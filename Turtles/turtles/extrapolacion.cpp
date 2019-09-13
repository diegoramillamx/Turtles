#include "extrapolacion.h"
#include "ui_extrapolacion.h"
#include <math.h>
#include <cmath>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QtQml/QQmlContext>
#include <QtQml/QQmlEngine>
#include <QtQml/QQmlComponent>
#include <QDebug>
#define earthRadiusKm 6371.0

extraPolacion::extraPolacion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::extraPolacion)
{
    ui->setupUi(this);
    turtlesDatabase = QSqlDatabase::database("turtles");
    loadComboBoxSensor();
}

extraPolacion::~extraPolacion()
{
    delete ui;
}

void extraPolacion::loadComboBoxSensor() {
    QSqlQueryModel *sensorModel = new QSqlQueryModel;
    QSqlQuery query(turtlesDatabase);
    query.prepare("SELECT NOMBRE FROM SENSOR WHERE PUESTO = 1");
    query.exec();
    sensorModel->setQuery(query);
    ui->cboSensor->setModel(sensorModel);
    queryFromSensor(ui->cboSensor->currentText());
    }

void extraPolacion::queryFromSensor(const QString& sensor) {
    QSqlQuery myQuery(turtlesDatabase);
    myQuery.exec(QString("SELECT IdTortuga as 'Id tortuga', Tortuga.Nombre, SUBESPECIE.Descripcion as 'Subespecie', "
                         "concat(nombrepila, ' ', ap_paterno, ' ', ap_materno, ' ') as Investigador, "
                         "ZONA.DESCRIPCION AS 'ZONA', MUNICIPIO.MUNICIPIO, ESTADO.ESTADO "
                         "FROM TORTUGA INNER JOIN SUBESPECIE ON SUBESPECIE.IDSUBESPECIE = TORTUGA.SUBESPECIE_IDSUBESPECIE INNER JOIN "
                         "INVESTIGADOR ON INVESTIGADOR.USUARIO = TORTUGA.INVESTIGADOR_USUARIO INNER JOIN SENSOR "
                         "ON SENSOR.IDSENSOR = TORTUGA.SENSOR_IDSENSOR INNER JOIN ZONA ON TORTUGA.ZONA_IDZONA = ZONA.IDZONA "
                         "INNER JOIN MUNICIPIO ON ZONA.MUNICIPIO_IDMUNICIPIO = MUNICIPIO.IDMUNICIPIO INNER JOIN "
                         "ESTADO ON MUNICIPIO.ESTADO_IDESTADO = ESTADO.IDESTADO WHERE SENSOR.NOMBRE = '%1';").arg(sensor));
    myQuery.next();
    ui->lneIdTortuga->setText(myQuery.value(0).toString());
    ui->lneNombreTortuga->setText(myQuery.value(1).toString());
    ui->lneSubespecie->setText(myQuery.value(2).toString());
    ui->lneInvestigador->setText(myQuery.value(3).toString());
    ui->lneZona->setText(myQuery.value(4).toString());
    ui->lneMunicipio->setText(myQuery.value(5).toString());
    ui->lneEstado->setText(myQuery.value(6).toString());
}

void extraPolacion::loadMap()
{
    QQmlEngine engine;
    QQmlComponent component(&engine, QUrl(QStringLiteral("qrc:/Map.qml")));
    QObject *object = component.create();

    loadNextPoint(object);
}

void extraPolacion::loadNextPoint(QObject *&object)
{
    for(int i=0; i < listaDatos.size(); i++){
        QMetaObject::invokeMethod(object, "addPin",
                                  Q_ARG(QVariant, listaDatos.at(i).first),
                                  Q_ARG(QVariant, listaDatos.at(i).second),
                                  Q_ARG(QVariant, "green"),
                                  Q_ARG(QVariant, 1000));

    }
    for(int i=0; i < listaDatos.size() - 1; i++){
        QMetaObject::invokeMethod(object, "addLine",
                            Q_ARG(QVariant, listaDatos.at(i).first),
                            Q_ARG(QVariant, listaDatos.at(i).second),
                            Q_ARG(QVariant, listaDatos.at(i+1).first),
                            Q_ARG(QVariant, listaDatos.at(i+1).second));
    }

    QMetaObject::invokeMethod(object, "addPin",
                              Q_ARG(QVariant, coordenada.first),
                              Q_ARG(QVariant, coordenada.second),
                              Q_ARG(QVariant, "yellow"),
                              Q_ARG(QVariant, 1000));
    QMetaObject::invokeMethod(object, "addLine",
                        Q_ARG(QVariant, coordenada.first),
                        Q_ARG(QVariant, coordenada.second),
                        Q_ARG(QVariant, listaDatos.last().first),
                        Q_ARG(QVariant, listaDatos.last().second));
    QMetaObject::invokeMethod(object, "setCenter",
                              Q_ARG(QVariant, coordenada.first),
                              Q_ARG(QVariant, coordenada.second));

    }

double extraPolacion::getM(double x1, double y1, double x2, double y2)
{
    return (y2 - y1) / (x2 - x1);
}

double extraPolacion::getAverageM()
{
    double sum = 0.0;
    for(int i=0; i< listaPendientes.size(); i++){
        sum += listaPendientes.at(i);
    }
    return sum/listaPendientes.size();
}

double extraPolacion::getTemporalPont()
{
    return getAverageM() * ((listaDatos.last().second + 0.10) - listaDatos.last().second) + listaDatos.last().first;
}

void extraPolacion::getCoordenadaFinal()
{
    coordenada.first = getTemporalPont();
    double pendienteNueva = getM(listaDatos.last().second, listaDatos.last().first,
                                 listaDatos.last().second + 0.10, coordenada.first);
    if(static_cast<int>(pendienteNueva*100) == static_cast<int>(getAverageM()*100)){
        qDebug() << "Misma pendiente";
        coordenada.second = listaDatos.last().second +0.10;
        qDebug() << distanceEarth(listaDatos.last().first, listaDatos.last().second,
                                  coordenada.first, coordenada.second);
    }
}

void extraPolacion::clearLists()
{
    listaDatos.clear();
    listaDistancias.clear();
    listaPendientes.clear();
}


// This function converts decimal degrees to radians
double extraPolacion::deg2rad(double deg) {
  return (deg * M_PI / 180);
}

//  This function converts radians to decimal degrees
double extraPolacion::rad2deg(double rad) {
  return (rad * 180 / M_PI);
}

double extraPolacion::distanceEarth(double lat1d, double lon1d, double lat2d, double lon2d)
{
    double lat1r, lon1r, lat2r, lon2r, u, v;
      lat1r = deg2rad(lat1d);
      lon1r = deg2rad(lon1d);
      lat2r = deg2rad(lat2d);
      lon2r = deg2rad(lon2d);
      u = sin((lat2r - lat1r)/2);
      v = sin((lon2r - lon1r)/2);
      return 2.0 * earthRadiusKm * asin(sqrt(u * u + cos(lat1r) * cos(lat2r) * v * v));
}

void extraPolacion::loadView(QString idTortuga)
{
    QSqlQueryModel *subSpeciesModel = new QSqlQueryModel;
    QSqlQuery query(turtlesDatabase);
    query.exec(QString("SELECT latitud AS 'lat', longitud AS 'long' FROM"
                      " ubicacion WHERE TORTUGA_IDTORTUGA = %1").arg(idTortuga));
    subSpeciesModel->setQuery(query);
    //ui->tvQuery->setModel(subSpeciesModel);
}

void extraPolacion::loadAverage(QString idTortuga)
{
    clearLists();
    QSqlQuery query(turtlesDatabase);
    query.exec(QString("SELECT latitud AS 'lat', longitud AS 'long' FROM"
                      " ubicacion WHERE TORTUGA_IDTORTUGA = %1").arg(idTortuga));
    while(query.next()){
        coordenada.first = query.value(0).toDouble();
        coordenada.second = query.value(1).toDouble();
        listaDatos.append(coordenada);
    }
    for(int i=0; i<listaDatos.size()-1; i++){
        listaDistancias.append(distanceEarth(listaDatos.at(i).first, listaDatos.at(i).second,
                                             listaDatos.at(i+1).first, listaDatos.at(i+1).second));
    }
    for(int i=0; i<listaDatos.size()-1; i++){
        listaPendientes.append(getM(listaDatos.at(i).second, listaDatos.at(i).first,
                                    listaDatos.at(i+1).second, listaDatos.at(i+1).first));
    }
    double sum=0.0;
    for(int i=0; i<listaDistancias.size(); i++){
        sum += listaDistancias.at(i);
    }
    promedioDistancia = sum/listaDistancias.size();
}


void extraPolacion::on_cboSensor_currentTextChanged(const QString &arg1)
{
    queryFromSensor(arg1);
}

void extraPolacion::on_showMapPB_clicked()
{
    loadAverage(ui->lneIdTortuga->text());
    getCoordenadaFinal();
    loadMap();
}
