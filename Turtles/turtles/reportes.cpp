#include "reportes.h"
#include "ui_reportes.h"

#include <QtQml/QQmlContext>
#include <QtQml/QQmlEngine>
#include <QtQml/QQmlComponent>

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QtMath>
#include <QDebug>

Reportes::Reportes(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Reportes) {
    ui->setupUi(this);

    turtlesDatabase = QSqlDatabase::database("turtles");
    loadTableViewDensity();
    loadComboBoxZone();
    }

Reportes::~Reportes() {
    delete ui;
    }

void Reportes::loadTableViewDensity() {
    QSqlQuery query("SELECT count(*) AS POBLACIÓN, ZONA.DESCRIPCION AS ZONA FROM TORTUGA "
                    "INNER JOIN ZONA ON TORTUGA.ZONA_IDZONA = ZONA.IDZONA group by IDZONA;", turtlesDatabase);
    query.exec();
    QSqlQueryModel *densityModel = new QSqlQueryModel;
    densityModel->setQuery(query);
    ui->tvDensidad->setModel(densityModel);
    }

void Reportes::loadComboBoxZone() {
    QSqlQuery query("SELECT DESCRIPCION FROM ZONA", turtlesDatabase);
    query.exec();
    QSqlQueryModel *zoneModel = new QSqlQueryModel;
    zoneModel->setQuery(query);
    ui->cboZone->setModel(zoneModel);
    }

void Reportes::loadComboBoxSensor(const QString &value) {
    QSqlQuery query(turtlesDatabase);
    query.exec(QString("SELECT SENSOR.NOMBRE FROM TORTUGA INNER JOIN ZONA "
                       "ON TORTUGA.ZONA_IDZONA = ZONA.IDZONA INNER JOIN "
                       "SENSOR ON SENSOR.IDSENSOR = TORTUGA.SENSOR_IDSENSOR "
                       "WHERE ZONA.DESCRIPCION = '%1';").arg(value));
    QSqlQueryModel *sensorModel = new QSqlQueryModel;
    sensorModel->setQuery(query);
    ui->cboSensor->setModel(sensorModel);
    }

void Reportes::loadInformationOfTheTurtle(const QString &value) {
    QSqlQuery myQuery(turtlesDatabase);
    myQuery.exec(QString("SELECT IdTortuga as 'Id tortuga', Tortuga.Nombre, SUBESPECIE.Descripcion as 'Subespecie', "
                         "concat(nombrepila, ' ', ap_paterno, ' ', ap_materno, ' ') as Investigador, "
                         "ZONA.DESCRIPCION AS 'ZONA', MUNICIPIO.MUNICIPIO, ESTADO.ESTADO "
                         "FROM TORTUGA INNER JOIN SUBESPECIE ON SUBESPECIE.IDSUBESPECIE = TORTUGA.SUBESPECIE_IDSUBESPECIE INNER JOIN "
                         "INVESTIGADOR ON INVESTIGADOR.USUARIO = TORTUGA.INVESTIGADOR_USUARIO INNER JOIN SENSOR "
                         "ON SENSOR.IDSENSOR = TORTUGA.SENSOR_IDSENSOR INNER JOIN ZONA ON TORTUGA.ZONA_IDZONA = ZONA.IDZONA "
                         "INNER JOIN MUNICIPIO ON ZONA.MUNICIPIO_IDMUNICIPIO = MUNICIPIO.IDMUNICIPIO INNER JOIN "
                         "ESTADO ON MUNICIPIO.ESTADO_IDESTADO = ESTADO.IDESTADO WHERE SENSOR.NOMBRE = '%1';").arg(value));
    myQuery.next();
    ui->lneIdTortuga->setText(myQuery.value(0).toString());
    ui->lneNombreTortuga->setText(myQuery.value(1).toString());
    ui->lneSubespecie->setText(myQuery.value(2).toString());
    ui->lneInvestigador->setText(myQuery.value(3).toString());
    ui->lneZona->setText(myQuery.value(4).toString());
    ui->lneMunicipio->setText(myQuery.value(5).toString());
    ui->lneEstado->setText(myQuery.value(6).toString());

    ui->lbDistance->setText("Distancia: " + QString::number(getDistance(myQuery.value(0).toInt())) + " Km");
    double velocidad = getDistance((myQuery.value(0).toInt())) / getTime(myQuery.value(0).toInt());
    ui->lbVelocidad->setText("Velocidad: " + QString::number(velocidad) + " Km/h");
    ui->lbHour->setText("Horas: " + QString::number(getTime(myQuery.value(0).toInt())));
    ui->lbDays->setText("Días: " + QString::number(getTime(myQuery.value(0).toInt()) / 24));
    }

double Reportes::getTime(const int &idTurtle) {
    QSqlQuery localizaciones(turtlesDatabase);
    localizaciones.exec(QString("SELECT TIMESTAMPDIFF(HOUR, (SELECT MIN(FECHA_HORA)FROM UBICACION WHERE TORTUGA_IDTORTUGA = %1), "
                                "(SELECT MAX(FECHA_HORA) FROM UBICACION WHERE TORTUGA_IDTORTUGA = %1)) "
                                "FROM UBICACION WHERE TORTUGA_IDTORTUGA = %1 "
                                "GROUP BY TORTUGA_IDTORTUGA;").arg(idTurtle));
    localizaciones.next();
    return localizaciones.value(0).toDouble();
    }

double Reportes::getDistance(const int &idTurtle) {
    QSqlQuery localizaciones(turtlesDatabase);
    localizaciones.exec(QString("SELECT LATITUD, LONGITUD FROM TORTUGA INNER JOIN "
                                "UBICACION ON UBICACION.TORTUGA_IDTORTUGA = TORTUGA.IDTORTUGA "
                                "WHERE IDTORTUGA = %1;").arg(idTurtle));

    localizaciones.next();
    double distance(0);

    double x2(0);
    double y2(0);

    double c = M_PI / 180;
    double r = 6371000;

    for (int i(0); i < localizaciones.numRowsAffected(); i++) {

        if (i == 0) {
            x2 = localizaciones.value(0).toDouble();
            y2 = localizaciones.value(1).toDouble();
            }

        if (i >= 1) {

            double x1(localizaciones.value(0).toDouble());
            double y1(localizaciones.value(1).toDouble());

            double distancia = 2 * r * asin(sqrt(pow(sin(c * (x2 - x1) / 2), 2) +
                               cos(c * x1) * cos(c * x2) * pow(sin(c * (y2 - y1) / 2), 2)));

            distance += distancia / 1000;

            x2 = x1;
            y2 = y1;
            }

        localizaciones.next();
        }
    return distance;
    }

void Reportes::paintTheTurtleZone(const int &idTurtle) {
    QSqlQuery localizaciones(turtlesDatabase);
    localizaciones.exec(QString("SELECT MIN(LATITUD), MAX(LATITUD), MIN(LONGITUD), "
                                "MAX(LONGITUD) FROM UBICACION WHERE TORTUGA_IDTORTUGA = %1;").arg(idTurtle));
    localizaciones.next();

    QSqlQuery promedio(turtlesDatabase);
    promedio.exec(QString("SELECT AVG(LATITUD), AVG(LONGITUD) "
                                "FROM UBICACION WHERE TORTUGA_IDTORTUGA = %1;").arg(idTurtle));
    promedio.next();

    double xPromedio(promedio.value(0).toDouble());
    double yPromedio(promedio.value(1).toDouble());

    double x1(localizaciones.value(0).toDouble());
    double x2(localizaciones.value(1).toDouble());
    double y1(localizaciones.value(2).toDouble());
    double y2(localizaciones.value(3).toDouble());


    QQmlEngine engine;
    QQmlComponent component(&engine, QUrl(QStringLiteral("qrc:/Map.qml")));
    QObject *object = component.create();

    QMetaObject::invokeMethod(object, "setCenter",
                                Q_ARG(QVariant, x1),
                                Q_ARG(QVariant, y1));

    while (x1 <= x2) {
        y1 = localizaciones.value(2).toDouble();
        while (y1 <= y2) {

            QMetaObject::invokeMethod(object, "addPin",
                                        Q_ARG(QVariant, x1),
                                        Q_ARG(QVariant, y1),
                                        Q_ARG(QVariant, "black"),
                                        Q_ARG(QVariant, 10000));
            y1 += 0.01;
            }

        x1 += 0.01;
        }

    x1 = localizaciones.value(0).toDouble();
    while (x1 <= xPromedio) {
        y1 = localizaciones.value(2).toDouble();
        while (y1 <= yPromedio) {

            QMetaObject::invokeMethod(object, "addPin",
                                        Q_ARG(QVariant, x1),
                                        Q_ARG(QVariant, y1),
                                        Q_ARG(QVariant, "red"),
                                        Q_ARG(QVariant, 3000));
            y1 += 0.01;
            }

        x1 += 0.01;
        }

    while (xPromedio <= x2) {
        yPromedio = promedio.value(1).toDouble();
        while (yPromedio <= y2) {

            QMetaObject::invokeMethod(object, "addPin",
                                        Q_ARG(QVariant, xPromedio),
                                        Q_ARG(QVariant, yPromedio),
                                        Q_ARG(QVariant, "red"),
                                        Q_ARG(QVariant, 3000));

            yPromedio += 0.01;
            }
        xPromedio += 0.01;
        }

    }

void Reportes::getZonesProtectedAndNoProtected() {
    QSqlQuery query("SELECT LATITUD, LONGITUD, TIPO_ZONA.DESCRIPCION FROM ZONA "
                    "INNER JOIN TIPO_ZONA ON ZONA.TIPO_ID = TIPO_ZONA.ID;", turtlesDatabase);
    query.exec();
    query.next();

    QQmlEngine engine;
    QQmlComponent component(&engine, QUrl(QStringLiteral("qrc:/Map.qml")));
    QObject *object = component.create();

    for (int i(0); i < query.numRowsAffected(); i++) {

        double latitud(query.value(0).toDouble());
        double longitud(query.value(1).toDouble());
        QString type(query.value(2).toString());

        if (i == 0) {
            QMetaObject::invokeMethod(object, "setCenter",
                                      Q_ARG(QVariant, latitud),
                                      Q_ARG(QVariant, longitud));
            }

        if (type == "PROTEGIDA") {
            QMetaObject::invokeMethod(object, "addPin",
                                      Q_ARG(QVariant, latitud),
                                      Q_ARG(QVariant, longitud),
                                      Q_ARG(QVariant, "blue"),
                                      Q_ARG(QVariant, 3000));
            }
        else {
            QMetaObject::invokeMethod(object, "addPin",
                                      Q_ARG(QVariant, latitud),
                                      Q_ARG(QVariant, longitud),
                                      Q_ARG(QVariant, "red"),
                                      Q_ARG(QVariant, 3000));
            }
        query.next();
        }
    }

void Reportes::on_cboZone_currentTextChanged(const QString& value) {
    loadComboBoxSensor(value);
    }

void Reportes::on_cboSensor_currentTextChanged(const QString& value) {
    loadInformationOfTheTurtle(value);
    }
void Reportes::on_pbZones_clicked() {
    getZonesProtectedAndNoProtected();
    }

void Reportes::on_pbZones2_clicked() {
    paintTheTurtleZone(ui->lneIdTortuga->text().toInt());
    }
