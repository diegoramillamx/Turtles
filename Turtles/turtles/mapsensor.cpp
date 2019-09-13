#include "mapsensor.h"
#include "ui_mapsensor.h"

#include <QtQml/QQmlContext>
#include <QtQml/QQmlEngine>
#include <QtQml/QQmlComponent>

#include <QSqlQuery>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QDebug>
#include <QDateTime>
#include <QMessageBox>

#include <QTimer>
#include <windows.h>

MapSensor::MapSensor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MapSensor) {
    ui->setupUi(this);

    cronometro = new QTimer(this);

    turtlesDatabase = QSqlDatabase::database("turtles");
    ubicationDatabase = QSqlDatabase::database("data");
    setBack();
    loadComboBoxSensor();
    }

MapSensor::~MapSensor() {
    delete ui;
}

void MapSensor::setBack()
{
    QMovie *movie=new QMovie(":/OtherGifs/seaGify.gif");
    if (!movie->isValid())
        {
         // Something went wrong :(
        }
    ui->background->setMovie(movie);
    movie->start();
}

void MapSensor::loadComboBoxSensor() {
    QSqlQueryModel *sensorModel = new QSqlQueryModel;
    QSqlQuery query(turtlesDatabase);
    query.prepare("SELECT NOMBRE FROM SENSOR WHERE PUESTO = 1");
    query.exec();
    sensorModel->setQuery(query);
    ui->cboSensor->setModel(sensorModel);
    }

void MapSensor::queryFromSensor(const QString& sensor) {
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


void MapSensor::activationOfDataDatabase() {
    connect(cronometro, SIGNAL(timeout()), this, SLOT(getLocation()));
    cronometro->start(30000);
    }

void MapSensor::getLocation() {
    QString sensor(ui->cboSensor->currentText());
    QSqlQuery query(ubicationDatabase);

    query.exec(QString("select latitud, longitud, nombre from localizaciones inner join "
                       "ubicacion on localizaciones.idubicacion = ubicacion.idubicacion "
                       "where nombre = '%1' and idlocalizaciones = %2;").arg(sensor).arg(contadorUbication++));
    query.next();


    QQmlEngine engine;
    QQmlComponent component(&engine, QUrl(QStringLiteral("qrc:/Map.qml")));
    QObject *object = component.create();

    Ubicacion lastUbication(getIdUbicacion(),
                            query.value(0).toDouble(),
                            query.value(1).toDouble());

    openMap(object, lastUbication);
    }

void MapSensor::openMap(QObject*& object, const Ubicacion& lastUbication) {

    insertIntoUbicaciones(lastUbication);
    unsigned int idTortuga(ui->lneIdTortuga->text().toUInt());

    QSqlQuery rows(turtlesDatabase);
    rows.exec(QString("SELECT COUNT(*) FROM UBICACION INNER JOIN "
                      "TORTUGA ON UBICACION.TORTUGA_IDTORTUGA = TORTUGA.IDTORTUGA "
                      "WHERE TORTUGA.IDTORTUGA = %1;").arg(idTortuga));
    rows.next();
    int n(rows.value(0).toInt());

    QSqlQuery query(turtlesDatabase);

    double latitud(0), longitud(0);
    for (int i(1); i <= n; i++) {

        query.exec(QString("SELECT LATITUD, LONGITUD FROM UBICACION INNER JOIN "
                           "TORTUGA ON UBICACION.TORTUGA_IDTORTUGA = TORTUGA.IDTORTUGA "
                           "WHERE TORTUGA_IDTORTUGA = %1 AND UBICACION.IDUBICACION = %2")
                           .arg(idTortuga).arg(i));
        query.next();

        double queryLatitud(query.value(0).toDouble());
        double queryLongitud(query.value(1).toDouble());

        QMetaObject::invokeMethod(object, "addPin",
                                  Q_ARG(QVariant, queryLatitud),
                                  Q_ARG(QVariant, queryLongitud),
                                  Q_ARG(QVariant, "green"),
                                  Q_ARG(QVariant, 1000));

        if (i > 1) {
            QMetaObject::invokeMethod(object, "addLine",
                                Q_ARG(QVariant, latitud),
                                Q_ARG(QVariant, longitud),
                                Q_ARG(QVariant, queryLatitud),
                                Q_ARG(QVariant, queryLongitud));
            }
        latitud = queryLatitud;
        longitud = queryLongitud;
        }

    QMetaObject::invokeMethod(object, "setCenter",
                              Q_ARG(QVariant, lastUbication.getLatitud()),
                              Q_ARG(QVariant, lastUbication.getLongitud()));

    QMetaObject::invokeMethod(object, "addPin",
                              Q_ARG(QVariant, lastUbication.getLatitud()),
                              Q_ARG(QVariant, lastUbication.getLongitud()),
                              Q_ARG(QVariant, "red"),
                              Q_ARG(QVariant, 1000));
    }

void MapSensor::insertIntoUbicaciones(const Ubicacion& lastUbicacion) {
    QDateTime dateTime;
    QSqlQuery insertUbication(turtlesDatabase);
    insertUbication.prepare("INSERT INTO UBICACION VALUES (:idu, :lat, :lon, :date, :idt);");
    insertUbication.bindValue(":idu", lastUbicacion.getIdUbicacion());
    insertUbication.bindValue(":lat", lastUbicacion.getLatitud());
    insertUbication.bindValue(":lon", lastUbicacion.getLongitud());
    insertUbication.bindValue(":date", dateTime.currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
    insertUbication.bindValue(":idt", ui->lneIdTortuga->text().toUInt());

    if (!insertUbication.exec()) {
        QMessageBox::critical(this, "Error", "No se pudo registrar la ubicacion"
                              + insertUbication.lastError().text());
        return;
        }
    }

unsigned int MapSensor::getIdUbicacion() {
    unsigned int idTortuga(ui->lneIdTortuga->text().toUInt());
    QSqlQuery query(turtlesDatabase);
    query.exec(QString("SELECT MAX(IDUBICACION) FROM UBICACION WHERE TORTUGA_IDTORTUGA = %1;")
               .arg(idTortuga));
    query.next();
    return query.value(0).toUInt() + 1;
    }

void MapSensor::on_pushButton_clicked() {
    ui->gbDatos->setEnabled(true);
    queryFromSensor(ui->cboSensor->currentText());
    }

void MapSensor::on_cboSensor_currentTextChanged(const QString &value) {
    if (ui->gbDatos->isEnabled()) queryFromSensor(value);
    }

void MapSensor::on_pbSensor_clicked() {
    if (ui->gbDatos->isEnabled()) {
        contadorUbication = getIdUbicacion();
        Sleep(2500);
        ui->lbMensaje->setText("Esperando señales.");
        Sleep(2500);
        ui->lbMensaje->setText("Esperando señales..");
        activationOfDataDatabase();
        }
    }

void MapSensor::on_pbDetener_clicked() {
    cronometro->stop();
    ui->lbMensaje->setText("");
    }
