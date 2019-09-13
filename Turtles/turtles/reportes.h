#ifndef REPORTES_H
#define REPORTES_H

#include <QMainWindow>
#include <QSqlDatabase>

namespace Ui {
    class Reportes;
    }

class Reportes : public QMainWindow {
    Q_OBJECT

    public:
        explicit Reportes(QWidget *parent = nullptr);
        ~Reportes();

private slots:
    void on_cboZone_currentTextChanged(const QString &arg1);
    void on_cboSensor_currentTextChanged(const QString &arg1);
    void on_pbZones_clicked();

    void on_pbZones2_clicked();

private:
        QSqlDatabase turtlesDatabase;

        void loadTableViewDensity();

        void loadComboBoxZone();
        void loadComboBoxSensor(const QString& value = "");
        void loadInformationOfTheTurtle(const QString& value = "");

        double getDistance(const int& idTurtle);
        double getTime(const int& idTurtle);

        void paintTheTurtleZone(const int& idTurtle);

        void getZonesProtectedAndNoProtected();
        Ui::Reportes *ui;
    };

#endif // REPORTES_H
