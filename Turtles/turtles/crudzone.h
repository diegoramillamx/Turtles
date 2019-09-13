#ifndef CRUDZONE_H
#define CRUDZONE_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QMovie>
#include "zone.h"

namespace Ui {
class CrudZone;
}

class CrudZone : public QMainWindow {
    Q_OBJECT

public:
    explicit CrudZone(QWidget *parent = nullptr);
    ~CrudZone();
    void setBack();

private slots:
    void on_pbActive_clicked();

    void on_cboState_currentTextChanged(const QString &arg1);

    void on_pbInsert_clicked();

    void on_lnQuery_textChanged(const QString &arg1);

    void on_pbActiveQuery_clicked();


private:
    Ui::CrudZone *ui;
    QSqlDatabase turtlesDatabase;
    unsigned int idZone;

    void setEnableOfTheView();
    void loadComboBoxStates();
    void loadComboBoxMunicipio(const QString&);
    unsigned int getIdFromState(const QString&);
    unsigned int getIdFromMunicipio(const QString&);

    void getMaxIdFromZones();
    unsigned int getIdFromZone();

    void startInsert();
    void getDataFromUser(Zone&);
    bool insertZoneInTheDatabase(const Zone&);

    void clearObjects();

    void loadComboBoxCritery();
    QString getRealValueComboBox(const QString&);
    void queryFromTheDatabase(const QString&);
    };

#endif // CRUDZONE_H
