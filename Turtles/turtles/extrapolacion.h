#ifndef EXTRAPOLACION_H
#define EXTRAPOLACION_H

#include <QDialog>
#include <QSqlDatabase>

namespace Ui {
    class extraPolacion;
    }

class extraPolacion : public QDialog {
    Q_OBJECT

    public:
        explicit extraPolacion(QWidget *parent = nullptr);
        ~extraPolacion();

    private slots:
        void on_cboSensor_currentTextChanged(const QString &arg1);
        void on_showMapPB_clicked();

    private:
        Ui::extraPolacion *ui;

        QSqlDatabase turtlesDatabase;
        QPair<double, double> coordenada;
        QList<QPair<double, double>> listaDatos;
        QList<double> listaDistancias;
        QList<double> listaPendientes;

        double promedioDistancia;

        double deg2rad(double deg);
        double rad2deg(double rad);

        double distanceEarth(double lat1d, double lon1d, double lat2d, double lon2d);

        void loadView(QString idTortuga);
        void loadAverage(QString idTortuga);

        void queryFromSensor();
        void loadComboBoxSensor();
        void queryFromSensor(const QString& sensor);

        void loadMap();
        void loadNextPoint(QObject*& object);

        double getM(double x1, double y1, double x2, double y2);
        double getAverageM();

        double getTemporalPont();

        void getCoordenadaFinal();
        void clearLists();
    };

#endif // EXTRAPOLACION_H
