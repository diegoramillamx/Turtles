#include "welcome.h"
#include "mainwindow.h"
#include "ui_welcome.h"
#include <QTimer>
#include <windows.h>

Welcome::Welcome(QWidget *parent) : QMainWindow(parent), ui(new Ui::Welcome), contador(0) {
    ui->setupUi(this);

    QString safe =  "QProgressBar::chunk {background: QLinearGradient( x1: 0, y1: 0, x2: 1, ";
            safe += "y2: 0,stop: 0 #78d,stop: 0.4999 #46a,stop: 0.5 #45a,stop: 1 #238 );";
            safe += "border-bottom-right-radius: 7px;border-bottom-left-radius: 7px; border: 1px solid black;}";
    ui->prbProgreso->setStyleSheet(safe);

    QTimer *cronometro = new QTimer(this);
    connect(cronometro, SIGNAL(timeout()), this, SLOT(activar()));
    cronometro->start(15);
    }

Welcome::~Welcome() {
    delete ui;
    }

void Welcome::activar() {
    if (contador++ == 100) {
        Sleep(2000);
        MainWindow *main = new MainWindow();
        this->hide();
        main->show();
        }
    ui->prbProgreso->setValue(contador);
    }
