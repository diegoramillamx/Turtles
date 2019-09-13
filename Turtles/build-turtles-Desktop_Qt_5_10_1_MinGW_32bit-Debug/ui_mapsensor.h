/********************************************************************************
** Form generated from reading UI file 'mapsensor.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPSENSOR_H
#define UI_MAPSENSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapSensor
{
public:
    QWidget *centralwidget;
    QGroupBox *gbPrimary;
    QGroupBox *gbDatos;
    QLabel *lbSensor;
    QComboBox *cboSensor;
    QLabel *lbIdTortuga;
    QLabel *lbNombreTortuga;
    QLabel *lbSubespecie;
    QLabel *lbInvestigador;
    QLabel *lbZona;
    QLabel *lbMunicipio;
    QLabel *lbEstado;
    QLineEdit *lneIdTortuga;
    QLineEdit *lneNombreTortuga;
    QLineEdit *lneSubespecie;
    QLineEdit *lneInvestigador;
    QLineEdit *lneZona;
    QLineEdit *lneMunicipio;
    QLineEdit *lneEstado;
    QLabel *lbMensaje;
    QLabel *label;
    QPushButton *pbDetener;
    QPushButton *pbSensor;
    QPushButton *pushButton;
    QLabel *background;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MapSensor)
    {
        if (MapSensor->objectName().isEmpty())
            MapSensor->setObjectName(QStringLiteral("MapSensor"));
        MapSensor->resize(1375, 700);
        MapSensor->setMinimumSize(QSize(408, 601));
        MapSensor->setMaximumSize(QSize(1375, 700));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/if_Turtle_204384.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MapSensor->setWindowIcon(icon);
        MapSensor->setStyleSheet(QStringLiteral("background-color: rgb(57, 134, 137)"));
        centralwidget = new QWidget(MapSensor);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gbPrimary = new QGroupBox(centralwidget);
        gbPrimary->setObjectName(QStringLiteral("gbPrimary"));
        gbPrimary->setGeometry(QRect(60, 49, 1250, 581));
        gbPrimary->setMaximumSize(QSize(1250, 600));
        gbPrimary->setStyleSheet(QStringLiteral("background-color: rgb(231, 231, 231);"));
        gbDatos = new QGroupBox(gbPrimary);
        gbDatos->setObjectName(QStringLiteral("gbDatos"));
        gbDatos->setEnabled(false);
        gbDatos->setGeometry(QRect(70, 39, 451, 480));
        gbDatos->setMaximumSize(QSize(1100, 480));
        QFont font;
        font.setPointSize(13);
        gbDatos->setFont(font);
        lbSensor = new QLabel(gbDatos);
        lbSensor->setObjectName(QStringLiteral("lbSensor"));
        lbSensor->setGeometry(QRect(60, 80, 51, 16));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        lbSensor->setFont(font1);
        cboSensor = new QComboBox(gbDatos);
        cboSensor->setObjectName(QStringLiteral("cboSensor"));
        cboSensor->setGeometry(QRect(120, 80, 291, 22));
        QFont font2;
        font2.setPointSize(11);
        cboSensor->setFont(font2);
        cboSensor->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbIdTortuga = new QLabel(gbDatos);
        lbIdTortuga->setObjectName(QStringLiteral("lbIdTortuga"));
        lbIdTortuga->setGeometry(QRect(60, 130, 91, 21));
        lbIdTortuga->setFont(font1);
        lbNombreTortuga = new QLabel(gbDatos);
        lbNombreTortuga->setObjectName(QStringLiteral("lbNombreTortuga"));
        lbNombreTortuga->setGeometry(QRect(60, 170, 121, 21));
        lbNombreTortuga->setFont(font1);
        lbSubespecie = new QLabel(gbDatos);
        lbSubespecie->setObjectName(QStringLiteral("lbSubespecie"));
        lbSubespecie->setGeometry(QRect(60, 220, 101, 21));
        lbSubespecie->setFont(font1);
        lbInvestigador = new QLabel(gbDatos);
        lbInvestigador->setObjectName(QStringLiteral("lbInvestigador"));
        lbInvestigador->setGeometry(QRect(60, 260, 101, 21));
        lbInvestigador->setFont(font1);
        lbZona = new QLabel(gbDatos);
        lbZona->setObjectName(QStringLiteral("lbZona"));
        lbZona->setGeometry(QRect(60, 311, 51, 20));
        lbZona->setFont(font1);
        lbMunicipio = new QLabel(gbDatos);
        lbMunicipio->setObjectName(QStringLiteral("lbMunicipio"));
        lbMunicipio->setGeometry(QRect(60, 350, 81, 21));
        lbMunicipio->setFont(font1);
        lbEstado = new QLabel(gbDatos);
        lbEstado->setObjectName(QStringLiteral("lbEstado"));
        lbEstado->setGeometry(QRect(60, 390, 55, 16));
        lbEstado->setFont(font1);
        lneIdTortuga = new QLineEdit(gbDatos);
        lneIdTortuga->setObjectName(QStringLiteral("lneIdTortuga"));
        lneIdTortuga->setEnabled(false);
        lneIdTortuga->setGeometry(QRect(140, 130, 271, 22));
        lneIdTortuga->setFont(font1);
        lneIdTortuga->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneNombreTortuga = new QLineEdit(gbDatos);
        lneNombreTortuga->setObjectName(QStringLiteral("lneNombreTortuga"));
        lneNombreTortuga->setEnabled(false);
        lneNombreTortuga->setGeometry(QRect(180, 170, 231, 22));
        lneNombreTortuga->setFont(font1);
        lneNombreTortuga->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneSubespecie = new QLineEdit(gbDatos);
        lneSubespecie->setObjectName(QStringLiteral("lneSubespecie"));
        lneSubespecie->setEnabled(false);
        lneSubespecie->setGeometry(QRect(150, 220, 261, 22));
        lneSubespecie->setFont(font1);
        lneSubespecie->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneInvestigador = new QLineEdit(gbDatos);
        lneInvestigador->setObjectName(QStringLiteral("lneInvestigador"));
        lneInvestigador->setEnabled(false);
        lneInvestigador->setGeometry(QRect(170, 260, 241, 21));
        lneInvestigador->setFont(font1);
        lneInvestigador->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneZona = new QLineEdit(gbDatos);
        lneZona->setObjectName(QStringLiteral("lneZona"));
        lneZona->setEnabled(false);
        lneZona->setGeometry(QRect(110, 310, 301, 21));
        lneZona->setFont(font1);
        lneZona->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneMunicipio = new QLineEdit(gbDatos);
        lneMunicipio->setObjectName(QStringLiteral("lneMunicipio"));
        lneMunicipio->setEnabled(false);
        lneMunicipio->setGeometry(QRect(140, 350, 271, 22));
        lneMunicipio->setFont(font1);
        lneMunicipio->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneEstado = new QLineEdit(gbDatos);
        lneEstado->setObjectName(QStringLiteral("lneEstado"));
        lneEstado->setEnabled(false);
        lneEstado->setGeometry(QRect(120, 390, 291, 22));
        lneEstado->setFont(font1);
        lneEstado->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbMensaje = new QLabel(gbPrimary);
        lbMensaje->setObjectName(QStringLiteral("lbMensaje"));
        lbMensaje->setGeometry(QRect(40, 520, 321, 20));
        QFont font3;
        font3.setFamily(QStringLiteral("Raleway"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        lbMensaje->setFont(font3);
        label = new QLabel(gbPrimary);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(760, 0, 401, 561));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/tortugaagua.jpeg")));
        pbDetener = new QPushButton(gbPrimary);
        pbDetener->setObjectName(QStringLiteral("pbDetener"));
        pbDetener->setEnabled(true);
        pbDetener->setGeometry(QRect(550, 390, 180, 70));
        pbDetener->setMaximumSize(QSize(180, 70));
        pbDetener->setFont(font1);
        pbDetener->setStyleSheet(QLatin1String(" QPushButton#pbDetener {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#pbDetener:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/381031-200.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbDetener->setIcon(icon1);
        pbDetener->setIconSize(QSize(50, 50));
        pbSensor = new QPushButton(gbPrimary);
        pbSensor->setObjectName(QStringLiteral("pbSensor"));
        pbSensor->setEnabled(true);
        pbSensor->setGeometry(QRect(550, 240, 180, 70));
        pbSensor->setMaximumSize(QSize(180, 70));
        pbSensor->setFont(font1);
        pbSensor->setStyleSheet(QLatin1String(" QPushButton#pbSensor {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#pbSensor:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        pbSensor->setIcon(icon1);
        pbSensor->setIconSize(QSize(50, 50));
        pushButton = new QPushButton(gbPrimary);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(true);
        pushButton->setGeometry(QRect(550, 100, 180, 70));
        pushButton->setMaximumSize(QSize(180, 70));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String(" QPushButton#pushButton {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#pushButton:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/switch_windows.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(50, 50));
        background = new QLabel(centralwidget);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 0, 1375, 700));
        MapSensor->setCentralWidget(centralwidget);
        background->raise();
        gbPrimary->raise();
        statusbar = new QStatusBar(MapSensor);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MapSensor->setStatusBar(statusbar);

        retranslateUi(MapSensor);

        QMetaObject::connectSlotsByName(MapSensor);
    } // setupUi

    void retranslateUi(QMainWindow *MapSensor)
    {
        MapSensor->setWindowTitle(QApplication::translate("MapSensor", "Sensorado de tortugas", nullptr));
        gbPrimary->setTitle(QString());
        gbDatos->setTitle(QApplication::translate("MapSensor", "Datos de la tortuga sensorada", nullptr));
        lbSensor->setText(QApplication::translate("MapSensor", "Sensor", nullptr));
        lbIdTortuga->setText(QApplication::translate("MapSensor", "Id Tortuga", nullptr));
        lbNombreTortuga->setText(QApplication::translate("MapSensor", "Nombre tortuga", nullptr));
        lbSubespecie->setText(QApplication::translate("MapSensor", "Subespecie", nullptr));
        lbInvestigador->setText(QApplication::translate("MapSensor", "Investigador", nullptr));
        lbZona->setText(QApplication::translate("MapSensor", "Zona", nullptr));
        lbMunicipio->setText(QApplication::translate("MapSensor", "Municipio", nullptr));
        lbEstado->setText(QApplication::translate("MapSensor", "Estado", nullptr));
        lneEstado->setText(QString());
        lbMensaje->setText(QString());
        label->setText(QString());
        pbDetener->setText(QApplication::translate("MapSensor", "Detener", nullptr));
        pbSensor->setText(QApplication::translate("MapSensor", "Activar sensor", nullptr));
        pushButton->setText(QApplication::translate("MapSensor", "Activar ventana", nullptr));
        background->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MapSensor: public Ui_MapSensor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPSENSOR_H
