#ifndef MAPSENSOR_H
#define MAPSENSOR_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QMovie>

#include "ubicacion.h"

namespace Ui {
    class MapSensor;
    }

class MapSensor : public QMainWindow {
    Q_OBJECT

    public:
        explicit MapSensor(QWidget *parent = nullptr);
        ~MapSensor();
        void setBack();


private slots:
    void on_pushButton_clicked();
    void on_cboSensor_currentTextChanged(const QString &arg1);
    void on_pbSensor_clicked();
    void on_pbDetener_clicked();

    void getLocation();

private:
        Ui::MapSensor *ui;

        QTimer *cronometro;

        unsigned int contadorUbication;
        QSqlDatabase turtlesDatabase;
        QSqlDatabase ubicationDatabase;

        void loadComboBoxSensor();
        void queryFromSensor(const QString&);
        void activationOfDataDatabase();

        void openMap(QObject*&, const Ubicacion&);

        unsigned int getIdUbicacion();
        void insertIntoUbicaciones(const Ubicacion&);
    };

#endif // MAPSENSOR_H
