#include "crudsubespecie.h"
#include "ui_crudsubespecie.h"

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>

CrudSubespecie::CrudSubespecie(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CrudSubespecie) {
    ui->setupUi(this);

    setBack();
    turtlesDatabase = QSqlDatabase::database("turtles");
    whichRadioIsChecked();
    ui->lneIdSubespcie->setText(QString::number(getIdForSubSpecies()));
    }

CrudSubespecie::~CrudSubespecie() {
    delete ui;
}

void CrudSubespecie::setBack()
{
    QMovie *movie=new QMovie(":/OtherGifs/seaGify.gif");
    if (!movie->isValid())
    {
             // Something went wrong :(
    }
    //ui->lbbackground->setMovie(movie);
    ui->lbBackground->setMovie(movie);
    movie->start();

}

void CrudSubespecie::on_rbAltas_clicked() {
    whichRadioIsChecked();
    ui->lneIdSubespcie->setText(QString::number(getIdForSubSpecies()));
    }

void CrudSubespecie::on_rbBusqueda_clicked() {
    whichRadioIsChecked();
    }

void CrudSubespecie::on_rbModificar_clicked() {
    whichRadioIsChecked();
    }

void CrudSubespecie::on_pbAgregar_clicked() {
    SubSpecies newSubSpecie;
    getDataForSubSpecies(newSubSpecie);
    if (insertIntoSubSpecies(newSubSpecie)) QMessageBox::information(this, "Excelente", "Registro insertado en la base de datos");
    else QMessageBox::critical(this, "Error", "El registro no ha podido ser completado.\n"
                                              "Contacte a su administrador.");
    clearAll();
    ui->lneIdSubespcie->setText(QString::number(getIdForSubSpecies()));
    }

void CrudSubespecie::on_lneQuery_textChanged(const QString &value) {
    subSpeciesQuery(value);
    }

void CrudSubespecie::on_pbBuscar_clicked() {
    getInformationOfSubSpecies(ui->lneIdSubModificar->text());
    }

void CrudSubespecie::on_pbModificar_clicked() {
    updateSubSpecies();
    }

void CrudSubespecie::whichRadioIsChecked() {
    if (ui->rbAltas->isChecked()) {
        ui->gbAltas->setEnabled(true);
        ui->gbBuscar->setEnabled(false);
        ui->gbModificar->setEnabled(false);

        ui->gbAltas->setStyleSheet("background-color: rgb(206, 241, 157);");
        ui->gbBuscar->setStyleSheet("");
        ui->gbModificar->setStyleSheet("");
        }
    else if (ui->rbBusqueda->isChecked()) {
        ui->gbAltas->setEnabled(false);
        ui->gbBuscar->setEnabled(true);
        ui->gbModificar->setEnabled(false);

        ui->gbAltas->setStyleSheet("");
        ui->gbBuscar->setStyleSheet("background-color: rgb(206, 241, 157);");
        ui->gbModificar->setStyleSheet("");
        }
    else {
        ui->gbAltas->setEnabled(false);
        ui->gbBuscar->setEnabled(false);
        ui->gbModificar->setEnabled(true);

        ui->gbAltas->setStyleSheet("");
        ui->gbBuscar->setStyleSheet("");
        ui->gbModificar->setStyleSheet("background-color: rgb(206, 241, 157);");
        }
    clearAll();
    }

void CrudSubespecie::clearAll() {
    ui->lneIdSubModificar->clear();
    ui->lneIdSubespcie->clear();
    ui->lneQuery->clear();
    ui->lneSubModificar->clear();
    ui->lneSubespecie->clear();
    }

unsigned int CrudSubespecie::getIdForSubSpecies() {
    QSqlQuery query("SELECT MAX(IDSUBESPECIE) FROM SUBESPECIE;", turtlesDatabase);
    query.exec();
    query.next();
    return query.value(0).toUInt() + 1;
    }

void CrudSubespecie::getDataForSubSpecies(SubSpecies& newSubSpecies) {
    newSubSpecies.setIdSubSpecie(ui->lneIdSubespcie->text().toUInt());
    newSubSpecies.setDescription(ui->lneSubespecie->text());
    }

bool CrudSubespecie::insertIntoSubSpecies(const SubSpecies& newSubSpecies) {
    QSqlQuery insertSubSpecie(turtlesDatabase);
    insertSubSpecie.prepare("INSERT INTO SUBESPECIE VALUES (:id, :des)");
    insertSubSpecie.bindValue(":id", newSubSpecies.getIdSubSpecie());
    insertSubSpecie.bindValue(":des", newSubSpecies.getDescription());
    return insertSubSpecie.exec();
    }

void CrudSubespecie::subSpeciesQuery(const QString& value) {
    QSqlQueryModel *subSpeciesModel = new QSqlQueryModel;
    QSqlQuery query(turtlesDatabase);
    query.exec(QString("SELECT IDSUBESPECIE AS 'ID SUBESPECIE', DESCRIPCION AS NOMBRE FROM"
                      " SUBESPECIE WHERE DESCRIPCION LIKE '%%1%'").arg(value));
    subSpeciesModel->setQuery(query);
    ui->tvQuery->setModel(subSpeciesModel);
    }

void CrudSubespecie::getInformationOfSubSpecies(const QString& value) {
    QSqlQuery query(turtlesDatabase);
    if (query.exec(QString("SELECT IDSUBESPECIE, DESCRIPCION FROM SUBESPECIE "
                           "WHERE IDSUBESPECIE = '%1';").arg(value))) {
        query.next();
        ui->lneIdSubModificar->setText(query.value(0).toString());
        ui->lneSubModificar->setText(query.value(1).toString());
        }
    else {
        QMessageBox::critical(this, "Error", "No existe una subespecie con ese ID.");
        }
    }

void CrudSubespecie::updateSubSpecies() {
    QString id(ui->lneIdSubModificar->text());
    QString desc(ui->lneSubModificar->text());
    bool isExecuted;
    QSqlQuery updateSubSpecies(turtlesDatabase);
    isExecuted = updateSubSpecies.exec(QString("UPDATE SUBESPECIE SET DESCRIPCION = '%1' WHERE IDSUBESPECIE = '%2';")
                          .arg(desc).arg(id));

    if (isExecuted) QMessageBox::information(this, "Excelente", "Registro actualizado de manera satisfactoria.");
    else QMessageBox::critical(this, "Error", "El registro no pudo ser actualizado.");

    clearAll();
    }
