#include "crudzone.h"
#include "ui_crudzone.h"

#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QSqlError>
#include <QString>
#include <QDebug>

CrudZone::CrudZone(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CrudZone) {
    ui->setupUi(this);
    turtlesDatabase = QSqlDatabase::database("turtles");
    setBack();
    loadComboBoxStates();
    loadComboBoxCritery();
    }

CrudZone::~CrudZone() {
    delete ui;
}

void CrudZone::setBack()
{
    QMovie *movie=new QMovie(":/OtherGifs/seaGify.gif");
    if (!movie->isValid())
        {
         // Something went wrong :(
        }
    ui->lbBackGif->setMovie(movie);
    movie->start();
}

void CrudZone::on_pbActive_clicked() {
    setEnableOfTheView();
    idZone = getIdFromZone();
    ui->lneIdZona->setText(QString::number(idZone));
    }

void CrudZone::on_pbActiveQuery_clicked() {
    if (ui->gbPrimary->isEnabled()) ui->gbPrimary->setEnabled(false);
    ui->gbPrimaryQuery->setEnabled(!ui->gbPrimaryQuery->isEnabled());
    }

void CrudZone::on_cboState_currentTextChanged(const QString& state) {
    loadComboBoxMunicipio(state);
    }

void CrudZone::on_pbInsert_clicked() {
    startInsert();
    setEnableOfTheView();
    clearObjects();
    }

void CrudZone::on_lnQuery_textChanged(const QString &critery) {
    queryFromTheDatabase(critery);
    }

void CrudZone::setEnableOfTheView() {
    ui->gbPrimary->setEnabled(!ui->gbPrimary->isEnabled());
    ui->pbInsert->setEnabled(!ui->pbInsert->isEnabled());
    }

void CrudZone::loadComboBoxStates() {
    QSqlQueryModel *stateModel = new QSqlQueryModel;
    QSqlQuery stateQuery("SELECT ESTADO FROM ESTADO;", turtlesDatabase);
    stateQuery.exec();
    stateModel->setQuery(stateQuery);
    ui->cboState->setModel(stateModel);
    }

void CrudZone::loadComboBoxMunicipio(const QString& state) {
    QSqlQueryModel *municipioModel = new QSqlQueryModel;
    QSqlQuery municipioQuery(turtlesDatabase);
    municipioQuery.exec(QString("SELECT MUNICIPIO FROM MUNICIPIO WHERE ESTADO_IDESTADO = %1;")
                    .arg(getIdFromState(state)));
    municipioQuery.next();
    municipioModel->setQuery(municipioQuery);
    ui->cboMunicipio->setModel(municipioModel);
    }

unsigned int CrudZone::getIdFromState(const QString& state) {
    QSqlQuery query(turtlesDatabase);
    query.exec(QString("SELECT IDESTADO FROM ESTADO WHERE ESTADO = '%1'").arg(state));
    query.next();
    return query.value(0).toUInt();
    }

unsigned int CrudZone::getIdFromMunicipio(const QString& municipio) {
    QSqlQuery query(turtlesDatabase);
    query.exec(QString("SELECT IDMUNICIPIO FROM MUNICIPIO WHERE MUNICIPIO = '%1'").arg(municipio));
    query.next();
    return query.value(0).toUInt();
    }

unsigned int CrudZone::getIdFromZone() {
    QSqlQuery query("SELECT MAX(IDZONA) FROM ZONA", turtlesDatabase);
    query.exec();
    query.next();
    return query.value(0).toUInt() + 1;
    }

void CrudZone::startInsert() {
    Zone myNewZone;
    getDataFromUser(myNewZone);
    if (insertZoneInTheDatabase(myNewZone)) QMessageBox::information(this, "Excelente", "Registro insertado en la base de datos.");
    else QMessageBox::critical(this, "Error", "Error al insertar");
    }

void CrudZone::getDataFromUser(Zone& myNewZone) {
    QString municipio(ui->cboMunicipio->currentText());
    myNewZone.setName(ui->lneName->text());
    myNewZone.setIdZone(idZone);
    myNewZone.setIdMunicipio(getIdFromMunicipio(municipio));
    }

bool CrudZone::insertZoneInTheDatabase(const Zone& myNewZone) {
    QSqlQuery insertZone(turtlesDatabase);
    insertZone.prepare("INSERT INTO ZONA VALUES (:idz, :name, :idm)");
    insertZone.bindValue(":idz", myNewZone.getIdZone());
    insertZone.bindValue(":name", myNewZone.getName());
    insertZone.bindValue(":idm", myNewZone.getIdMunicipio());
    return insertZone.exec();
}

void CrudZone::clearObjects() {
    ui->lneName->clear();
    ui->lneIdZona->clear();
}

void CrudZone::loadComboBoxCritery() {
    ui->cboCritery->addItem("Id zona");
    ui->cboCritery->addItem("Nombre de la zona");
    ui->cboCritery->addItem("Estado");
    ui->cboCritery->addItem("Municipio");
    }

QString CrudZone::getRealValueComboBox(const QString& comboValue) {
    if (comboValue == "Id zona") return "IDZONA";
    else if (comboValue == "Nombre de la zona") return "Zona.Descripcion";
    else if (comboValue == "Estado") return "Estado";
    return "Municipio";
    }

void CrudZone::queryFromTheDatabase(const QString& critery) {
    QString searchCritery(getRealValueComboBox(ui->cboCritery->currentText()));
    QSqlQueryModel *zoneModel = new QSqlQueryModel;
    QSqlQuery query(turtlesDatabase);
    query.exec(QString("SELECT IDZONA AS 'Id Zona', Descripcion AS 'NOMBRE ZONA', MUNICIPIO, ESTADO "
                       "FROM ZONA INNER JOIN MUNICIPIO ON ZONA.MUNICIPIO_IDMUNICIPIO = MUNICIPIO.IDMUNICIPIO "
                       "INNER JOIN ESTADO ON MUNICIPIO.ESTADO_IDESTADO = ESTADO.IDESTADO "
                       "WHERE %1 LIKE '%%2%';").arg(searchCritery).arg(critery));
    zoneModel->setQuery(query);
    ui->tvQuery->setModel(zoneModel);
    }

