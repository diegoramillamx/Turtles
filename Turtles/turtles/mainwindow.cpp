#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlTableModel>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QMovie>
#include <QBitmap>
#include <QDebug>
#include <QGraphicsDropShadowEffect>
#include "menuprincipal.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    setVisualEfects();
    addDatabases();
    isConnected();
    setBackground();
    }

MainWindow::~MainWindow() {
    delete ui;
    }

void MainWindow::setVisualEfects() {

    }

void MainWindow::checkLogin() {
    QString user(ui->ledUsuario->text()), password(ui->ledPassword->text());
    QSqlQuery query(firstDataBase);

    query.exec(QString("SELECT COUNT(*) FROM INVESTIGADOR WHERE USUARIO = '%1' and CONTRASENA = MD5(SHA1('%2'))")
               .arg(user).arg(password));
    query.next();

    QMessageBox* mensaje = new QMessageBox(QMessageBox::Information, "Acceso al sistema", "¡Acceso conseguido!");
    QPalette palette; palette.setColor(QPalette::Background, Qt::cyan);
    mensaje->setPalette(palette);

    if (query.value(0).toInt() == 1) {
        mensaje->setWindowIcon(mensaje->iconPixmap());
        mensaje->exec();
        delete mensaje;

        ui->ledUsuario->clear();
        ui->ledPassword->clear();
        ui->ledUsuario->setFocus();

        MenuPrincipal *menu = new MenuPrincipal(user);
        menu->setWindowModality(Qt::ApplicationModal);
        menu->show();
        }
    else{
        mensaje = new QMessageBox(QMessageBox::Information, "Acceso al sistema", "Datos incorrectos.");
        mensaje->setWindowIcon(mensaje->iconPixmap());
        mensaje->exec();
        delete mensaje;
        }
    }

void MainWindow::isConnected() {
    QMessageBox mensaje;
    QPalette palette;
    palette.setColor(QPalette::Background, Qt::cyan);
    if (!firstDataBase.open()){
        mensaje.setIcon(QMessageBox::Critical);
        mensaje.setWindowIcon(mensaje.iconPixmap());
        mensaje.setWindowTitle("Error");
        mensaje.setText(firstDataBase.lastError().text());
    }
    else {
        mensaje.setIcon(QMessageBox::Information);
        mensaje.setWindowIcon(mensaje.iconPixmap());
        mensaje.setWindowTitle("Conexión");
        mensaje.setText("Conexión a la base de datos conseguida.");
    }
    mensaje.setPalette(palette);
    mensaje.exec();
}

void MainWindow::setBackground()
{
    QMovie *movie=new QMovie(":/OtherGifs/seaGify.gif");
    if (!movie->isValid())
        {
         // Something went wrong :(
        }
    ui->lbBack->setMovie(movie);
    movie->start();
}

void MainWindow::on_psbEntrar_clicked() {
    checkLogin();
    }

void MainWindow::on_psbRegistrarse_clicked() {
    Register *myReg = new Register;
    myReg->setWindowModality(Qt::ApplicationModal);
    myReg->show();
    }

void MainWindow::on_ledPassword_returnPressed() {
    checkLogin();
    }

void MainWindow::on_ledUsuario_returnPressed() {
    ui->ledPassword->setFocus();
    }

void MainWindow::addDatabases() {
    firstDataBase = QSqlDatabase::addDatabase("QMYSQL", "turtles");
    firstDataBase.setHostName("localhost");
    firstDataBase.setDatabaseName("turtles_db");
    firstDataBase.setPort(3306);
    firstDataBase.setUserName("root");
    firstDataBase.setPassword("RAMD6609058aa");

    secondDatabase = QSqlDatabase::addDatabase("QMYSQL", "data");
    secondDatabase.setHostName("localhost");
    secondDatabase.setDatabaseName("datos");
    secondDatabase.setPort(3306);
    secondDatabase.setUserName("root");
    secondDatabase.setPassword("RAMD6609058aa");
    }
