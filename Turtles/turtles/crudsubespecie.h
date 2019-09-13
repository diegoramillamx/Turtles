#ifndef CRUDSUBESPECIE_H
#define CRUDSUBESPECIE_H

#include <QMainWindow>
#include <QSqlDatabase>
#include "subspecies.h"
#include <QMovie>
#include <QBitmap>

namespace Ui {
    class CrudSubespecie;
    }

class CrudSubespecie : public QMainWindow {
    Q_OBJECT

public:
    explicit CrudSubespecie(QWidget *parent = nullptr);
    ~CrudSubespecie();
    void setBack();

private slots:
    void on_rbAltas_clicked();

    void on_rbBusqueda_clicked();

    void on_rbModificar_clicked();

    void on_pbAgregar_clicked();

    void on_lneQuery_textChanged(const QString &arg1);

    void on_pbBuscar_clicked();

    void on_pbModificar_clicked();

private:
    Ui::CrudSubespecie *ui;
    QSqlDatabase turtlesDatabase;

    void whichRadioIsChecked();
    void clearAll();

    unsigned int getIdForSubSpecies();
    void getDataForSubSpecies(SubSpecies&);
    bool insertIntoSubSpecies(const SubSpecies&);

    void subSpeciesQuery(const QString&);

    void getInformationOfSubSpecies(const QString&);
    void updateSubSpecies();
    };

#endif // CRUDSUBESPECIE_H
