#ifndef MENUPRINCIPAL_H
#define MENUPRINCIPAL_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QVector>
#include <QMovie>

namespace Ui {
class MenuPrincipal;
}

class MenuPrincipal : public QMainWindow {
    Q_OBJECT

public:
    explicit MenuPrincipal(QString& user, QWidget *parent = nullptr);
    ~MenuPrincipal();
    void setBack();

private slots:
    void updateGif();

    void on_psbMapa_clicked();

    void on_pbTurtles_clicked();

    void on_pbZone_clicked();

    void on_pbSub_clicked();

    void on_pbSensor_clicked();

    void on_pbState_clicked();

    void on_pbStadistics_clicked();

    void on_pbReport_clicked();

    void on_psbExtrapolacion_clicked();

private:
    Ui::MenuPrincipal *ui;
    QSqlDatabase dataDatabase;
    QSqlDatabase turtlesDatabase;
    QString actualUser;

    QVector<QString> gifDirections;
    int currentIndex;

    void setCenterOfTheMap(QObject*&, double&, double&);
    void addPinIntoTheMap(QObject*&, double&, double&, QString color = "green");
    void addPolylineIntoTheMap(QObject*&, double&, double&, double&, double&);
    void setGif(QString path);
    void rotateGifs();
    void backGifWelcome();
    };

#endif // MENUPRINCIPAL_H
