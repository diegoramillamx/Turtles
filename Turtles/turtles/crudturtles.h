#ifndef CRUDTURTLES_H
#define CRUDTURTLES_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QMovie>

namespace Ui {
class CrudTurtles;
}

class CrudTurtles : public QMainWindow {
    Q_OBJECT

public:
    explicit CrudTurtles(QString& user, QWidget *parent = nullptr);
    ~CrudTurtles();
    void setBack();

private slots:
    void on_pbActive_clicked();

    void on_pbInsert_clicked();

    void on_pbActiveQuery_clicked();

    void on_lnQuery_textChanged(const QString &arg1);

private:
    Ui::CrudTurtles *ui;
    QSqlDatabase turtlesDatabase;

    QString actualUser;
    unsigned int idTurtle;

    void loadComboBoxSubSpecie();
    void loadComboBoxSensor();
    void loadComboBoxZone();

    void setEnableOnTheObjects();

    void loadComboBoxCritery();

    bool insertIntoTurtlesTable();
    unsigned int getIdTurtle();
    unsigned int getIdFromSubSpecie(const QString&);
    unsigned int getIdFromSensor(const QString&);
    unsigned int getIDFromZone(const QString&);

    void clearLineEdits();
    QString getRealValueCritery(const QString&);
    void setQueryResultOnTableView(const QString&);
    void updateStateOfTheSensor(const unsigned int&);
    };

#endif // CRUDTURTLES_H
