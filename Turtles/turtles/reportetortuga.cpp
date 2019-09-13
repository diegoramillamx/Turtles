#include "reportetortuga.h"
#include "ui_reportetortuga.h"

#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>

ReporteTortuga::ReporteTortuga(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ReporteTortuga) {

    turtlesDatabase = QSqlDatabase::database("turtles");

    ui->setupUi(this);
    }

ReporteTortuga::~ReporteTortuga() {
    delete ui;
    }

void ReporteTortuga::on_lneIdTortuga_returnPressed() {
    getDataFromTurtles(ui->lneIdTortuga->text().toInt());
    }

void ReporteTortuga::getDataFromTurtles(const int& idTurtle) {
    QSqlQuery myQuery(turtlesDatabase);
    myQuery.exec(QString("SELECT IdTortuga as 'Id tortuga', Tortuga.Nombre, SUBESPECIE.Descripcion as 'Subespecie', "
                         "concat(nombrepila, ' ', ap_paterno, ' ', ap_materno, ' ') as Investigador, "
                         "ZONA.DESCRIPCION AS 'ZONA', MUNICIPIO.MUNICIPIO, ESTADO.ESTADO, investigador_usuario "
                         "FROM TORTUGA INNER JOIN SUBESPECIE ON SUBESPECIE.IDSUBESPECIE = TORTUGA.SUBESPECIE_IDSUBESPECIE INNER JOIN "
                         "INVESTIGADOR ON INVESTIGADOR.USUARIO = TORTUGA.INVESTIGADOR_USUARIO INNER JOIN SENSOR "
                         "ON SENSOR.IDSENSOR = TORTUGA.SENSOR_IDSENSOR INNER JOIN ZONA ON TORTUGA.ZONA_IDZONA = ZONA.IDZONA "
                         "INNER JOIN MUNICIPIO ON ZONA.MUNICIPIO_IDMUNICIPIO = MUNICIPIO.IDMUNICIPIO INNER JOIN "
                         "ESTADO ON MUNICIPIO.ESTADO_IDESTADO = ESTADO.IDESTADO WHERE TORTUGA.IDTORTUGA = %1;").arg(idTurtle));
    myQuery.next();
    ui->lneIdTortuga->setText(myQuery.value(0).toString());
    ui->lneNombreTortuga->setText(myQuery.value(1).toString());
    ui->lneSubespecie->setText(myQuery.value(2).toString());
    ui->lneInvestigador->setText(myQuery.value(3).toString());
    ui->lneZona->setText(myQuery.value(4).toString());
    ui->lneMunicipio->setText(myQuery.value(5).toString());
    ui->lneEstado->setText(myQuery.value(6).toString());
    ui->lneCodigo->setText(myQuery.value(7).toString());
    }

int ReporteTortuga::getReportId() {
    QSqlQuery query(turtlesDatabase);
    query.exec("SELECT MAX(ID) FROM REPORTES;");
    query.next();
    return query.value(0).toInt() + 1;
    }

void ReporteTortuga::insertReport() {
    int idTurtle(ui->lneIdTortuga->text().toInt());
    QString userCode(ui->lneCodigo->text());
    int idReport(getReportId());
    QString report(ui->lneReport->text());

    QSqlQuery insertReport(turtlesDatabase);
    insertReport.prepare("INSERT INTO REPORTES VALUES (:id, :user, :idt, :rep);");
    insertReport.bindValue(":id", idReport);
    insertReport.bindValue(":idt", idTurtle);
    insertReport.bindValue(":user", userCode);
    insertReport.bindValue(":rep", report);
    insertReport.exec();

    qDebug() << insertReport.lastError().text();
    }

void ReporteTortuga::active() {
    ui->gbActive->setEnabled(!ui->gbActive->isEnabled());
    ui->lneIdTortuga->setEnabled(!ui->lneIdTortuga->isEnabled());
    ui->lneReport->setEnabled(!ui->lneReport->isEnabled());
    ui->pbRegister->setEnabled(!ui->pbRegister->isEnabled());
    }

void ReporteTortuga::clearAll() {
    ui->lneIdTortuga->clear();
    ui->lneNombreTortuga->clear();
    ui->lneSubespecie->clear();
    ui->lneInvestigador->clear();
    ui->lneZona->clear();
    ui->lneMunicipio->clear();
    ui->lneEstado->clear();
    ui->lneCodigo->clear();
    ui->lneReport->clear();
    }

void ReporteTortuga::on_pbRegister_clicked() {
    insertReport();
    QMessageBox::information(this, "Satisfactorio", "Registro insertado.");
    clearAll();
    active();
    }

void ReporteTortuga::on_pbActive_clicked() {
    active();
    }
