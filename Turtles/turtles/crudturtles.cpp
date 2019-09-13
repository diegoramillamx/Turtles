#include "crudturtles.h"
#include "ui_crudturtles.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QSqlError>
#include <QString>
#include <QDebug>

CrudTurtles::CrudTurtles(QString& user, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CrudTurtles),
    actualUser(user) {

    ui->setupUi(this);

    turtlesDatabase = QSqlDatabase::database("turtles");
    setBack();
    loadComboBoxSensor();
    loadComboBoxSubSpecie();
    loadComboBoxCritery();
    loadComboBoxZone();
    }

CrudTurtles::~CrudTurtles() {
    delete ui;
}

void CrudTurtles::setBack()
{
    QMovie *movie=new QMovie(":/OtherGifs/seaGify.gif");
    if (!movie->isValid())
        {
         // Something went wrong :(
        }
    ui->lbBackground->setMovie(movie);
    movie->start();
}

void CrudTurtles::on_pbActive_clicked() {
    setEnableOnTheObjects();
    idTurtle = getIdTurtle();
    ui->lneTurtleId->setText(QString::number(idTurtle));
    }

void CrudTurtles::on_pbInsert_clicked() {
    if (insertIntoTurtlesTable()) {
        QMessageBox::information(this, "Todo salió bien", "Registro guardado en la base de datos");
        }
    else {
        QMessageBox::critical(this, "Error", "Algo salió mal, contacte a su administrador");
        }
    setEnableOnTheObjects();
    clearLineEdits();
    }

void CrudTurtles::on_pbActiveQuery_clicked() {
    ui->gbPrimaryQuery->setEnabled(!ui->gbPrimaryQuery->isEnabled());
    if (ui->gbPrimaryQuery->isEnabled()) {
        ui->gbPrimaryQuery->setStyleSheet("background-color: rgb(206, 241, 157);");
        ui->gbPrimaryEdit->setStyleSheet("");

        ui->gbPrimaryEdit->setEnabled(false);
        ui->pbInsert->setEnabled(false);
        }
    else ui->gbPrimaryQuery->setStyleSheet("");
    }

void CrudTurtles::setEnableOnTheObjects() {
    ui->gbPrimaryEdit->setEnabled(!ui->gbPrimaryEdit->isEnabled());
    ui->pbInsert->setEnabled(!ui->pbInsert->isEnabled());

    if (ui->gbPrimaryEdit->isEnabled()) {
        ui->gbPrimaryQuery->setEnabled(false);
        ui->gbPrimaryEdit->setStyleSheet("background-color: rgb(206, 241, 157);");
        ui->gbPrimaryQuery->setStyleSheet("");
        }
    else ui->gbPrimaryEdit->setStyleSheet("");
    }


void CrudTurtles::on_lnQuery_textChanged(const QString &currentText) {
    setQueryResultOnTableView(currentText);
    }

void CrudTurtles::loadComboBoxSubSpecie() {
    QSqlQueryModel *comboModel = new QSqlQueryModel;
    QSqlQuery query("SELECT DESCRIPCION FROM SUBESPECIE;", turtlesDatabase);
    query.exec();
    comboModel->setQuery(query);
    ui->cboSubspecie->setModel(comboModel);
    }

void CrudTurtles::loadComboBoxSensor() {
    QSqlQueryModel *comboModel = new QSqlQueryModel;
    QSqlQuery query("SELECT NOMBRE FROM SENSOR WHERE PUESTO = 0;", turtlesDatabase);
    query.exec();
    comboModel->setQuery(query);
    ui->cboSensor->setModel(comboModel);
    }

void CrudTurtles::loadComboBoxZone() {
    QSqlQueryModel *comboModel = new QSqlQueryModel;
    QSqlQuery query("SELECT DESCRIPCION FROM ZONA;", turtlesDatabase);
    query.exec();
    comboModel->setQuery(query);
    ui->cboZona->setModel(comboModel);
    }

void CrudTurtles::loadComboBoxCritery() {
    ui->cboCritery->addItem("Nombre");
    ui->cboCritery->addItem("Ubicación");
    ui->cboCritery->addItem("Nombre de investigador");
    ui->cboCritery->addItem("Apellido paterno de investigador");
    ui->cboCritery->addItem("Apellido materno de investigador");
    }

bool CrudTurtles::insertIntoTurtlesTable() {
    QString turtleName(ui->lneTurtleName->text());
    QString subSpecies(ui->cboSubspecie->currentText());
    QString zona(ui->cboZona->currentText());
    unsigned int idSensor(getIdFromSensor(ui->cboSensor->currentText()));

    QSqlQuery insertTurtle(turtlesDatabase);
    insertTurtle.prepare("INSERT INTO TORTUGA VALUES (:id, :name, :idsu, :user, :idse, :idzo)");
    insertTurtle.bindValue(":id", idTurtle);
    insertTurtle.bindValue(":name", turtleName);
    insertTurtle.bindValue(":idsu", getIdFromSubSpecie(subSpecies));
    insertTurtle.bindValue(":user", actualUser);
    insertTurtle.bindValue(":idse", idSensor);
    insertTurtle.bindValue(":idzo", getIDFromZone(zona));
    if (insertTurtle.exec()) {
        updateStateOfTheSensor(idSensor);
        return true;
        }
    return false;
    }

void CrudTurtles::updateStateOfTheSensor(const unsigned int& idSensor) {
    QSqlQuery updateSensor(turtlesDatabase);
    updateSensor.exec(QString("UPDATE SENSOR SET PUESTO = 1 WHERE IDSENSOR = %1").arg(idSensor));
    loadComboBoxSensor();
}

unsigned int CrudTurtles::getIdTurtle() {
    QSqlQuery query(turtlesDatabase);
    query.exec(QString("SELECT MAX(IDTORTUGA) FROM TORTUGA"));
    query.next();
    return query.value(0).toUInt() + 1;
    }

unsigned int CrudTurtles::getIdFromSubSpecie(const QString& subSpecies) {
    QSqlQuery query(turtlesDatabase);
    query.exec(QString("SELECT IDSUBESPECIE FROM SUBESPECIE WHERE DESCRIPCION = '%1'")
               .arg(subSpecies));
    query.next();
    return query.value(0).toUInt();
    }

unsigned int CrudTurtles::getIdFromSensor(const QString& sensor) {
    QSqlQuery query(turtlesDatabase);
    query.exec(QString("SELECT IDSENSOR FROM SENSOR WHERE NOMBRE = '%1'")
               .arg(sensor));
    query.next();
    return query.value(0).toUInt();
    }

unsigned int CrudTurtles::getIDFromZone(const QString& zona) {
    QSqlQuery query(turtlesDatabase);
    query.exec(QString("SELECT IDZONA FROM ZONA WHERE DESCRIPCION = '%1'")
               .arg(zona));
    query.next();
    return query.value(0).toUInt();
    }

QString CrudTurtles::getRealValueCritery(const QString& critery) {
    if (critery == "Nombre") return "tortuga.nombre";
    else if (critery == "Ubicación") return "ubicacion.descripcion";
    else if (critery == "Apellido paterno de investigador") return "investigador.ap_paterno";
    else if (critery == "Apellido materno de investigador") return "investigador.ap_materno";
    return "investigador.nombrepila";
    }

void CrudTurtles::setQueryResultOnTableView(const QString& text) {
    QString critery(ui->cboCritery->currentText());
    QSqlQueryModel *tableModel = new QSqlQueryModel;
    QSqlQuery query(turtlesDatabase);

    query.exec(QString("SELECT IdTortuga as 'Id Tortuga', Tortuga.Nombre, SUBESPECIE.Descripcion as 'Subespecie', "
                       "concat(nombrepila, ' ', ap_paterno, ' ', ap_materno, ' ') as Investigador, "
                       "sensor.nombre as 'Sensor', ZONA.DESCRIPCION AS 'Zona', "
                       "MUNICIPIO.Municipio, ESTADO.Estado "
                       "FROM TORTUGA INNER JOIN SUBESPECIE ON SUBESPECIE.IDSUBESPECIE = TORTUGA.SUBESPECIE_IDSUBESPECIE INNER JOIN "
                       "INVESTIGADOR ON INVESTIGADOR.USUARIO = TORTUGA.INVESTIGADOR_USUARIO INNER JOIN SENSOR "
                       "ON SENSOR.IDSENSOR = TORTUGA.SENSOR_IDSENSOR INNER JOIN ZONA ON TORTUGA.ZONA_IDZONA = ZONA.IDZONA "
                       "INNER JOIN MUNICIPIO ON ZONA.MUNICIPIO_IDMUNICIPIO = MUNICIPIO.IDMUNICIPIO INNER JOIN "
                       "ESTADO ON MUNICIPIO.ESTADO_IDESTADO = ESTADO.IDESTADO "
                       "WHERE %1 LIKE '%%2%';").arg(getRealValueCritery(critery)).arg(text));

    tableModel->setQuery(query);
    ui->tvQuery->setModel(tableModel);
    }

void CrudTurtles::clearLineEdits() {
    ui->lneTurtleId->clear();
    ui->lneTurtleName->clear();
    }
