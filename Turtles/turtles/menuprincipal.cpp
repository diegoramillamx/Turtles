#include "menuprincipal.h"
#include "ui_menuprincipal.h"

#include "crudturtles.h"
#include "crudzone.h"
#include "crudsubespecie.h"
#include "mapsensor.h"
#include "estadosmun.h"
#include "reportes.h"
#include "reportetortuga.h"
#include "extrapolacion.h"

#include <QtQml/QQmlContext>
#include <QtQml/QQmlEngine>
#include <QtQml/QQmlComponent>

#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QMovie>
#include <QDirIterator>
#include <QDebug>
#include <QTimer>

MenuPrincipal::MenuPrincipal(QString& user, QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MenuPrincipal),
    actualUser(user) {
    ui->setupUi(this);

    dataDatabase = QSqlDatabase::database("data");
    turtlesDatabase = QSqlDatabase::database("turtles");
    ui->tabWidget->setCurrentIndex(0);
    ui->lbMessage->setStyleSheet("border-radius: 15px; background-color: rgb(255,255,255,150)");
    ui->lbTittle->setStyleSheet("border-radius: 25px;background-color: rgb(255,255,255,150)");
    rotateGifs();
    backGifWelcome();
    setBack();
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(updateGif()));
    timer->start(10000);
    }

MenuPrincipal::~MenuPrincipal() {
    delete ui;
}

void MenuPrincipal::setBack()
{
        QMovie *movie=new QMovie(":/Giffys/77.gif");
        if (!movie->isValid())
            {
             // Something went wrong :(
            }
        ui->lbGif_2->setMovie(movie);
        movie->start();
}

void MenuPrincipal::updateGif() {
    if(currentIndex >= gifDirections.size())
        currentIndex = 0;
    setGif(gifDirections.at(currentIndex));
    currentIndex++;
    }

void MenuPrincipal::on_psbMapa_clicked() {
    QQmlEngine engine;
    QQmlComponent component(&engine, QUrl(QStringLiteral("qrc:/Map.qml")));
    QObject *object = component.create();

    QSqlQuery turtles("SELECT IDTORTUGA FROM TORTUGA;", turtlesDatabase);
    turtles.exec();

    for (int j(1); j <= turtles.numRowsAffected(); j++) {
        double primerLatitud(0);
        double primerLongitud(0);

        turtles.next();
        QSqlQuery ubicaciones(turtlesDatabase);
        ubicaciones.exec(QString("SELECT LATITUD, LONGITUD FROM UBICACION WHERE TORTUGA_IDTORTUGA = %1;")
                         .arg(turtles.value(0).toInt()));

        for (int i(1); i <= ubicaciones.numRowsAffected(); i++) {
            ubicaciones.next();
            double latitud(ubicaciones.value(0).toDouble());
            double longitud(ubicaciones.value(1).toDouble());

            if (i == 1) {
                setCenterOfTheMap(object, latitud, longitud);
                addPinIntoTheMap(object, latitud, longitud, "red");

                primerLatitud = latitud;
                primerLongitud = longitud;
                }
            else {
                addPinIntoTheMap(object, latitud, longitud);
                addPolylineIntoTheMap(object, primerLatitud, primerLongitud, latitud, longitud);
                primerLatitud = latitud;
                primerLongitud = longitud;
                }
            }
        }
    }

void MenuPrincipal::setCenterOfTheMap(QObject*& object, double& latitud, double& longitud) {
    QMetaObject::invokeMethod(object, "setCenter",
                              Q_ARG(QVariant, latitud),
                              Q_ARG(QVariant, longitud));
    }

void MenuPrincipal::addPinIntoTheMap(QObject*& object, double& latitud, double& longitud, QString color) {
    QMetaObject::invokeMethod(object, "addPin",
                              Q_ARG(QVariant, latitud),
                              Q_ARG(QVariant, longitud),
                              Q_ARG(QVariant, color),
                              Q_ARG(QVariant, 1000));
    }

void MenuPrincipal::addPolylineIntoTheMap(QObject*& object, double& firstLatitud, double& firstLongitud,
                                          double& secondLatitud, double& secondLongitud) {
    QMetaObject::invokeMethod(object, "addLine",
                              Q_ARG(QVariant, firstLatitud),
                              Q_ARG(QVariant, firstLongitud),
                              Q_ARG(QVariant, secondLatitud),
                              Q_ARG(QVariant, secondLongitud));
    }

void MenuPrincipal::setGif(QString path) {
    QMovie *gif = new QMovie(path);
    ui->lbGif->setMovie(gif);
    ui->lbGif_5->setMovie(gif);
    gif->start();
    }

void MenuPrincipal::rotateGifs() {
    QDirIterator it(":/Gifs", QDirIterator::Subdirectories);
    while(it.hasNext()) {
        gifDirections.push_back(it.next());
        }
    //qDebug() << gifDirections.size();
    currentIndex = 0;
    updateGif();
}

void MenuPrincipal::backGifWelcome()
{
    QMovie *movie=new QMovie(":/Giffys/turtle-clipart-animation.gif");
    if (!movie->isValid())
        {
         // Something went wrong :(
        }

    // Play GIF
   // QLabel *lback = new QLabel(this);
    //lback->setGeometry(115,60,128,128);
    ui->lbBack->setMovie(movie);
    movie->start();
}

void MenuPrincipal::on_pbTurtles_clicked() {
    CrudTurtles *newCrudTurtles =  new CrudTurtles(actualUser);
    newCrudTurtles->setWindowModality(Qt::ApplicationModal);
    newCrudTurtles->show();
    }

void MenuPrincipal::on_pbZone_clicked() {
    CrudZone *newCrudZone = new CrudZone;
    newCrudZone->setWindowModality(Qt::ApplicationModal);
    newCrudZone->show();
    }

void MenuPrincipal::on_pbSub_clicked() {
    CrudSubespecie *newCrudSubespecie = new CrudSubespecie;
    newCrudSubespecie->setWindowModality(Qt::ApplicationModal);
    newCrudSubespecie->show();
    }

void MenuPrincipal::on_pbSensor_clicked() {
    MapSensor *newMapSensor = new MapSensor;
    newMapSensor->setWindowModality(Qt::ApplicationModal);
    newMapSensor->show();
    }

void MenuPrincipal::on_pbState_clicked() {
    estadosMun* newEstados = new estadosMun;
    newEstados->setWindowModality(Qt::ApplicationModal);
    newEstados->show();
    }

void MenuPrincipal::on_pbStadistics_clicked() {
    Reportes *reportes = new Reportes;
    reportes->setWindowModality(Qt::ApplicationModal);
    reportes->show();
    }

void MenuPrincipal::on_pbReport_clicked() {
    ReporteTortuga *reporte = new ReporteTortuga;
    reporte->setWindowModality(Qt::ApplicationModal);
    reporte->show();
    }

void MenuPrincipal::on_psbExtrapolacion_clicked()
{
    extraPolacion* camino = new extraPolacion;
    camino->setWindowModality(Qt::ApplicationModal);
    camino->show();
}
