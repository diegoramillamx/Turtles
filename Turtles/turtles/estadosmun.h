#ifndef ESTADOSMUN_H
#define ESTADOSMUN_H

#include <QWidget>
#include <QSqlDatabase>
#include <QMovie>

namespace Ui {
class estadosMun;
}

class estadosMun : public QWidget
{
    Q_OBJECT

public:
    explicit estadosMun(QWidget *parent = nullptr);
    ~estadosMun();
    void setBack();

private slots:
    void on_altaEstadoRB_clicked();

    void on_buscarEstadoRB_clicked();

    void on_modEstadoRB_clicked();

    void on_pbAgregar_clicked();

    void on_lneQueryEdo_textChanged(const QString &arg1);

    void on_pbBuscarEdo_clicked();

    void on_pbModificarEdo_clicked();

    void on_altaMunicipioRB_clicked();

    void on_buscarMunicipioRB_clicked();

    void on_modMunicipioRB_clicked();

    void on_pbAgregarMpo_clicked();

    void on_lneQueryMpo_textChanged(const QString &arg1);

    void on_pbBuscarMpo_clicked();

    void on_pbModificarMpo_clicked();

private:
    Ui::estadosMun *ui;
    QSqlDatabase turtlesDatabase;

    ///Funciones para el estado
    void whichRadioIsChecked();
    void clearAll();

    unsigned int getEstateId();
    bool insertNewEstate();
    void estateQuery(const QString& value);
    void getEstateInformation(const QString &value);
    void updateEstates();

    ///Funciones para el municipio
    void radioIsCheckedMpo();
    void clearAllMpo();

    unsigned int getMunicipioId();
    bool insertNewMunicipio();
    void mpoQuery(const QString& value);
    void getMunicipioInf(const QString& value);
    void updateMunicipio();
};

#endif // ESTADOSMUN_H
