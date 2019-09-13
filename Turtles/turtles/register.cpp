#include "register.h"
#include "ui_register.h"

#include <QSqlQueryModel>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>

#include <time.h>
#include <ctime>
#include <windows.h>

Register::Register(QWidget *parent) : QMainWindow(parent), ui(new Ui::Register) {
    ui->setupUi(this);
    mDataBase = QSqlDatabase::database("turtles");
    loadComboBoxFromDatabase();
    }

Register::~Register() {
    delete ui;
    }

void Register::on_psbAgregar_clicked() {
    Investigador investigadorNuevo;
    investigadorNuevo.setNombre(ui->lneNombre->text());
    investigadorNuevo.setApellidoPat(ui->lneApp->text());
    investigadorNuevo.setApellidoMat(ui->lneApm->text());
    investigadorNuevo.setUsuario(ui->lneUsuario->text());
    investigadorNuevo.setContrasenia(ui->lnePassword->text());
    investigadorNuevo.setFechaNacimiento(ui->dteNacimiento->text());

    QSqlQuery query(mDataBase);
    query.prepare("SELECT IDTIPO FROM TIPO WHERE DESCRIPCION = '" + ui->cboTipo->currentText() + "';");
    query.exec();
    query.next();
    investigadorNuevo.setIdTipo(query.value(0).toInt());
    if (validacion(investigadorNuevo))
        agregarBaseDatos(investigadorNuevo);
    else {
        QMessageBox::critical(this, "Error", "Todos los campos del formulario son obligatorios.");
        }
    }

void Register::agregarBaseDatos(const Investigador &investigador) {

    if (ui->lnePassword->text() != ui->lnePassword_2->text()) {
        QMessageBox::critical(this, "Error", "Las contraseñas no son iguales.");
        ui->lnePassword->clear();
        ui->lnePassword_2->clear();
        return;
        }

    time_t tiempo = time(nullptr);//variables donde guardo el valor de la funcion time.
    struct tm *tlocal = localtime(&tiempo); //estructura donde obtengo el tiempo
    char fecha[11]; //array donde guardo la fecha
    strftime(fecha, 11, "%d/%m/%y", tlocal); //formato para guardar la fecha obtenido en *tlocal como dd/mm/yyyy

    QString fechaActual(fecha);
    QStringList listaFecha = fechaActual.split("/");
    QString year(listaFecha[2]);
    int yearInt = 2000 + year.toInt();
    year = QString::number(yearInt);

    QSqlQuery insertQuery(mDataBase);
    insertQuery.prepare("INSERT INTO INVESTIGADOR VALUES (:name, :app, :apm, :user, MD5(SHA1(:password)),"
                        " :fechaNac, :fechaIni, :fechaFin, :idTipo)");
    insertQuery.bindValue(":name", investigador.getNombre().toUpper());
    insertQuery.bindValue(":app", investigador.getApellidoPat().toUpper());
    insertQuery.bindValue(":apm", investigador.getApellidoMat().toUpper());
    insertQuery.bindValue(":user", investigador.getUsuario());
    insertQuery.bindValue(":password", investigador.getContrasenia());
    QStringList listString = investigador.getFechaNacimiento().split("/");
    insertQuery.bindValue(":fechaNac", listString[2] + "-" + listString[1] + "-" + listString[0]);
    insertQuery.bindValue(":fechaIni", year + "-" + listaFecha[1] + "-" + listaFecha[0]);
    insertQuery.bindValue(":idTipo", investigador.getIdTipo());

    if (!insertQuery.exec()) {
        QMessageBox::critical(this, "Error", "El usuario ya existe en la base de datos.");
        return;
        }
    else {
        QMessageBox::information(this, "¡Registro guardado!", "Registro guardado en la base de datos correctamente.");
        limpiarTodo();
        this->hide();
        }
    }

void Register::on_lneUsuario_textChanged(const QString &username) {
    QSqlQuery query(mDataBase);
    query.exec(QString("SELECT COUNT(*) FROM INVESTIGADOR WHERE USUARIO = '%1'").arg(username));
    query.next();
    if (query.value(0).toInt() == 0) {
        ui->lneUsuario->setStyleSheet("QLineEdit#lneUsuario{color: black;"
                                      "background-color: lightgreen;"
                                      "selection-color: black;"
                                      "selection-background-color: lightgreen;}");
        }
    else {
        ui->lneUsuario->setStyleSheet("QLineEdit#lneUsuario{color: black;"
                                      "background-color: red;"
                                      "selection-color: black;"
                                      "selection-background-color: red;}");
        }

    if (username.size() == 0) {
        ui->lneUsuario->setStyleSheet("");
        }
    }

void Register::on_lneNombre_returnPressed() { ui->lneApp->setFocus(); }


void Register::on_lnePassword_2_returnPressed() {
    ui->dteNacimiento->setFocus();
    }

void Register::on_lneApp_returnPressed() {
    ui->lneApm->setFocus();
    }

void Register::on_lneApm_returnPressed() {
    ui->lneUsuario->setFocus();
    }

void Register::on_lnePassword_returnPressed() {
    ui->lnePassword_2->setFocus();
    }


void Register::on_psbAgregar_pressed() { }

void Register::on_lneUsuario_returnPressed() {
    ui->lnePassword->setFocus();
    }

void Register::loadComboBoxFromDatabase() {
    QSqlQueryModel *modeloCombo = new QSqlQueryModel;
    QSqlQuery myQuery("SELECT DESCRIPCION FROM TIPO", mDataBase);
    myQuery.exec();
    modeloCombo->setQuery(myQuery);
    ui->cboTipo->setModel(modeloCombo);
    }

void Register::limpiarTodo() {
    ui->lneNombre->clear();
    ui->lneApp->clear();
    ui->lneApm->clear();
    ui->lneUsuario->clear();
    ui->lnePassword->clear();
    ui->lnePassword_2->clear();
    }

bool Register::validacion(const Investigador& investigador) {
    if (investigador.getNombre().isEmpty() or investigador.getApellidoPat().isEmpty() or
        investigador.getApellidoMat().isEmpty() or investigador.getUsuario().isEmpty()
            or investigador.getContrasenia().isEmpty()) return false;

    return true;
    }
