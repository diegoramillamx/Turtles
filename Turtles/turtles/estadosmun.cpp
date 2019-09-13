#include "estadosmun.h"
#include "ui_estadosmun.h"

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QDebug>

estadosMun::estadosMun(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::estadosMun)
{
    ui->setupUi(this);

    turtlesDatabase = QSqlDatabase::database("turtles");
    whichRadioIsChecked();
    ui->tabWidget->setCurrentIndex(0);
    ui->lneIdEstado->setText(QString::number(getEstateId()));
}

estadosMun::~estadosMun()
{
    delete ui;
}

void estadosMun::setBack()
{
    QMovie *movie=new QMovie(":/OtherGifs/seaGify.gif");
    if (!movie->isValid())
        {
         // Something went wrong :(
        }
    ui->background->setMovie(movie);
    movie->start();
}

void estadosMun::whichRadioIsChecked()
{
    if (ui->altaEstadoRB->isChecked()) {
        ui->gbAltaEdo->setEnabled(true);
        ui->gbBuscarEdo->setEnabled(false);
        ui->gbModificarEdo->setEnabled(false);

        ui->gbAltaEdo->setStyleSheet("background-color: rgb(206, 241, 157);");
        ui->gbBuscarEdo->setStyleSheet("");
        ui->gbModificarEdo->setStyleSheet("");
        }
    else if (ui->buscarEstadoRB->isChecked()) {
        ui->gbAltaEdo->setEnabled(false);
        ui->gbBuscarEdo->setEnabled(true);
        ui->gbModificarEdo->setEnabled(false);

        ui->gbAltaEdo->setStyleSheet("");
        ui->gbBuscarEdo->setStyleSheet("background-color: rgb(206, 241, 157);");
        ui->gbModificarEdo->setStyleSheet("");
        }
    else {
        ui->gbAltaEdo->setEnabled(false);
        ui->gbBuscarEdo->setEnabled(false);
        ui->gbModificarEdo->setEnabled(true);

        ui->gbAltaEdo->setStyleSheet("");
        ui->gbBuscarEdo->setStyleSheet("");
        ui->gbModificarEdo->setStyleSheet("background-color: rgb(206, 241, 157);");
        }
    clearAll();
}

void estadosMun::clearAll()
{
    ui->lneIdEstadoMod->clear();
    ui->lneIdEstado->clear();
    ui->lneQueryEdo->clear();
    ui->lneEdoMod->clear();
    ui->lneEstado->clear();
}

unsigned int estadosMun::getEstateId()
{
    QSqlQuery query("SELECT MAX(IDESTADO) FROM ESTADO;", turtlesDatabase);
    query.exec();
    query.next();
    return query.value(0).toUInt() + 1;
}

bool estadosMun::insertNewEstate()
{
    QSqlQuery insertState(turtlesDatabase);
    insertState.prepare("INSERT INTO ESTADO VALUES (:id, :des)");
    insertState.bindValue(":id", ui->lneIdEstado->text());
    insertState.bindValue(":des", ui->lneEstado->text().toUpper());
    return insertState.exec();
}

void estadosMun::estateQuery(const QString &value)
{
    QSqlQueryModel *estatesModel = new QSqlQueryModel;
    QSqlQuery query(turtlesDatabase);
    query.exec(QString("SELECT IDESTADO AS 'ID ESTADO', ESTADO AS ESTADO FROM"
                      " ESTADO WHERE ESTADO LIKE '%%1%'").arg(value));
    estatesModel->setQuery(query);
    ui->tvQueryEdo->setModel(estatesModel);
}

void estadosMun::getEstateInformation(const QString &value)
{
    QSqlQuery query(turtlesDatabase);
    if (query.exec(QString("SELECT IDESTADO, ESTADO FROM ESTADO "
                           "WHERE IDESTADO = '%1';").arg(value))) {
        query.next();
        ui->lneIdEstadoMod->setText(query.value(0).toString());
        ui->lneEdoMod->setText(query.value(1).toString());
        }
    else {
        QMessageBox::critical(this, "Error", "No existe un estado con ese ID.");
    }
}

void estadosMun::updateEstates()
{
    QString id(ui->lneIdEstadoMod->text());
    QString desc(ui->lneEdoMod->text().toUpper());
    bool isExecuted;
    QSqlQuery updateSubSpecies(turtlesDatabase);
    isExecuted = updateSubSpecies.exec(QString("UPDATE ESTADO SET ESTADO = '%1' WHERE IDESTADO = '%2';")
                          .arg(desc).arg(id));

    if (isExecuted) QMessageBox::information(this, "Excelente", "Registro actualizado de manera satisfactoria.");
    else QMessageBox::critical(this, "Error", "El registro no pudo ser actualizado.");

    clearAll();
}

void estadosMun::radioIsCheckedMpo()
{
    if (ui->altaMunicipioRB->isChecked()) {
        ui->gbAltaMunicipio->setEnabled(true);
        ui->gbBuscarMpo->setEnabled(false);
        ui->gbModificarMpo->setEnabled(false);

        ui->gbAltaMunicipio->setStyleSheet("background-color: rgb(206, 241, 157);");
        ui->gbBuscarMpo->setStyleSheet("");
        ui->gbModificarMpo->setStyleSheet("");
        }
    else if (ui->buscarMunicipioRB->isChecked()) {
        ui->gbAltaMunicipio->setEnabled(false);
        ui->gbBuscarMpo->setEnabled(true);
        ui->gbModificarMpo->setEnabled(false);

        ui->gbAltaMunicipio->setStyleSheet("");
        ui->gbBuscarMpo->setStyleSheet("background-color: rgb(206, 241, 157);");
        ui->gbModificarMpo->setStyleSheet("");
        }
    else {
        ui->gbAltaMunicipio->setEnabled(false);
        ui->gbBuscarMpo->setEnabled(false);
        ui->gbModificarMpo->setEnabled(true);

        ui->gbAltaMunicipio->setStyleSheet("");
        ui->gbBuscarMpo->setStyleSheet("");
        ui->gbModificarMpo->setStyleSheet("background-color: rgb(206, 241, 157);");
        }
    clearAllMpo();
}

void estadosMun::clearAllMpo()
{
    ui->lneIdMpoMod->clear();
    ui->lneIdMpo->clear();
    ui->lneQueryMpo->clear();
    ui->lneMunicipio->clear();
    ui->lneEstadoMpo->clear();
    ui->lneEdoMpoMod->clear();
}

unsigned int estadosMun::getMunicipioId()
{
    QSqlQuery query("SELECT MAX(IDMUNICIPIO) FROM MUNICIPIO;", turtlesDatabase);
    query.exec();
    query.next();
    return query.value(0).toUInt() + 1;
}

bool estadosMun::insertNewMunicipio()
{
    QSqlQuery insertState(turtlesDatabase);
    insertState.prepare("INSERT INTO MUNICIPIO VALUES (:id, :des, :idEdo)");
    insertState.bindValue(":id", ui->lneIdMpo->text());
    insertState.bindValue(":des", ui->lneMunicipio->text().toUpper());
    insertState.bindValue(":idEdo", ui->lneEstadoMpo->text());
    return insertState.exec();
}

void estadosMun::mpoQuery(const QString &value)
{
    QSqlQueryModel *mpoModel = new QSqlQueryModel;
    QSqlQuery query(turtlesDatabase);
    query.exec(QString("SELECT IDMUNICIPIO AS 'ID MUNICIPIO', MUNICIPIO AS MUNICIPIO FROM"
                      " MUNICIPIO WHERE MUNICIPIO LIKE '%%1%'").arg(value));
    mpoModel->setQuery(query);
    ui->tvQueryMpo->setModel(mpoModel);
}

void estadosMun::getMunicipioInf(const QString &value)
{
    QSqlQuery query(turtlesDatabase);
    if (query.exec(QString("SELECT IDMUNICIPIO, MUNICIPIO FROM MUNICIPIO "
                           "WHERE IDMUNICIPIO = '%1';").arg(value))) {
        query.next();
        ui->lneIdMpoMod->setText(query.value(0).toString());
        ui->lneMpoMod->setText(query.value(1).toString());
        ui->lneEdoMpoMod->setText(query.value(2).toString());
        }
    else {
        QMessageBox::critical(this, "Error", "No existe un estado con ese ID.");
    }
}

void estadosMun::updateMunicipio()
{
    QString id(ui->lneIdMpoMod->text());
    QString desc(ui->lneMpoMod->text().toUpper());
    QString idEdo(ui->lneEdoMpoMod->text());
    bool isExecuted;
    QSqlQuery updateSubSpecies(turtlesDatabase);
    isExecuted = updateSubSpecies.exec(QString("UPDATE MUNICIPIO SET MUNICIPIO = '%1' WHERE IDMUNICIPIO = '%2';")
                          .arg(idEdo).arg(desc).arg(id));

    if (isExecuted) QMessageBox::information(this, "Excelente", "Registro actualizado de manera satisfactoria.");
    else QMessageBox::critical(this, "Error", "El registro no pudo ser actualizado.");

    clearAllMpo();
}

void estadosMun::on_altaEstadoRB_clicked()
{
    whichRadioIsChecked();
    ui->lneIdEstado->setText(QString::number(getEstateId()));
}

void estadosMun::on_buscarEstadoRB_clicked()
{
    whichRadioIsChecked();
}

void estadosMun::on_modEstadoRB_clicked()
{
    whichRadioIsChecked();
}

void estadosMun::on_pbAgregar_clicked()
{
    if(insertNewEstate()) QMessageBox::information(this, "Excelente", "Registro insertado en la base de datos");
    else QMessageBox::critical(this, "Error", "El registro no ha podido ser completado.\n"
                                              "Contacte a su administrador.");
    clearAll();
    ui->lneIdEstado->setText(QString::number(getEstateId()));
}

void estadosMun::on_lneQueryEdo_textChanged(const QString &arg1)
{
    estateQuery(arg1);
}

void estadosMun::on_pbBuscarEdo_clicked()
{
    getEstateInformation(ui->lneIdEstadoMod->text());
}

void estadosMun::on_pbModificarEdo_clicked()
{
    updateEstates();
}

void estadosMun::on_altaMunicipioRB_clicked()
{
    radioIsCheckedMpo();
    ui->lneIdMpo->setText(QString::number(getMunicipioId()));
}

void estadosMun::on_buscarMunicipioRB_clicked()
{
    radioIsCheckedMpo();
}

void estadosMun::on_modMunicipioRB_clicked()
{
    radioIsCheckedMpo();
}

void estadosMun::on_pbAgregarMpo_clicked()
{
    if(insertNewMunicipio()) QMessageBox::information(this, "Excelente", "Registro insertado en la base de datos");
    else QMessageBox::critical(this, "Error", "El registro no ha podido ser completado.\n"
                                              "Contacte a su administrador.");
    clearAllMpo();
    ui->lneIdMpo->setText(QString::number(getMunicipioId()));
}

void estadosMun::on_lneQueryMpo_textChanged(const QString &arg1)
{
    mpoQuery(arg1);
}

void estadosMun::on_pbBuscarMpo_clicked()
{
    getMunicipioInf(ui->lneIdMpoMod->text());
}

void estadosMun::on_pbModificarMpo_clicked()
{
    updateMunicipio();
}
