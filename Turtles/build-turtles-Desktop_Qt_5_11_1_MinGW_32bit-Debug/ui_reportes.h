/********************************************************************************
** Form generated from reading UI file 'reportes.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTES_H
#define UI_REPORTES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Reportes
{
public:
    QWidget *centralwidget;
    QGroupBox *gbMain;
    QTableView *tvDensidad;
    QLabel *lbDensidad;
    QGroupBox *gbStadistics;
    QLabel *lbZone;
    QLabel *lbSensor;
    QComboBox *cboZone;
    QComboBox *cboSensor;
    QLineEdit *lneIdTortuga;
    QLineEdit *lneInvestigador;
    QLabel *lbIdTortuga;
    QLabel *lbNombreTortuga;
    QLineEdit *lneNombreTortuga;
    QLineEdit *lneZona;
    QLabel *lbZona;
    QLabel *lbSubespecie;
    QLineEdit *lneSubespecie;
    QLineEdit *lneEstado;
    QLabel *lbMunicipio;
    QLineEdit *lneMunicipio;
    QLabel *lbInvestigador;
    QLabel *lbEstado;
    QLabel *lbDistance;
    QLabel *lbVelocidad;
    QLabel *lbHour;
    QLabel *lbDays;
    QPushButton *pbZones;
    QPushButton *pbZones2;

    void setupUi(QMainWindow *Reportes)
    {
        if (Reportes->objectName().isEmpty())
            Reportes->setObjectName(QStringLiteral("Reportes"));
        Reportes->resize(1107, 562);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/if_Turtle_204384.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Reportes->setWindowIcon(icon);
        Reportes->setStyleSheet(QStringLiteral("background-color: rgb(57, 134, 137)"));
        centralwidget = new QWidget(Reportes);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gbMain = new QGroupBox(centralwidget);
        gbMain->setObjectName(QStringLiteral("gbMain"));
        gbMain->setGeometry(QRect(10, 10, 1091, 541));
        gbMain->setStyleSheet(QLatin1String("background-color: rgb(206, 206, 206);\n"
"background-color: rgb(231, 231, 231);"));
        tvDensidad = new QTableView(gbMain);
        tvDensidad->setObjectName(QStringLiteral("tvDensidad"));
        tvDensidad->setGeometry(QRect(570, 10, 511, 192));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        font.setPointSize(10);
        tvDensidad->setFont(font);
        tvDensidad->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbDensidad = new QLabel(gbMain);
        lbDensidad->setObjectName(QStringLiteral("lbDensidad"));
        lbDensidad->setGeometry(QRect(10, 10, 721, 161));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        lbDensidad->setFont(font1);
        gbStadistics = new QGroupBox(gbMain);
        gbStadistics->setObjectName(QStringLiteral("gbStadistics"));
        gbStadistics->setGeometry(QRect(10, 210, 711, 321));
        gbStadistics->setFont(font1);
        lbZone = new QLabel(gbStadistics);
        lbZone->setObjectName(QStringLiteral("lbZone"));
        lbZone->setGeometry(QRect(10, 40, 111, 16));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        font2.setBold(false);
        font2.setWeight(50);
        lbZone->setFont(font2);
        lbSensor = new QLabel(gbStadistics);
        lbSensor->setObjectName(QStringLiteral("lbSensor"));
        lbSensor->setGeometry(QRect(10, 70, 181, 16));
        lbSensor->setFont(font2);
        cboZone = new QComboBox(gbStadistics);
        cboZone->setObjectName(QStringLiteral("cboZone"));
        cboZone->setGeometry(QRect(130, 37, 431, 22));
        QFont font3;
        font3.setFamily(QStringLiteral("Raleway"));
        font3.setPointSize(9);
        cboZone->setFont(font3);
        cboZone->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        cboSensor = new QComboBox(gbStadistics);
        cboSensor->setObjectName(QStringLiteral("cboSensor"));
        cboSensor->setGeometry(QRect(190, 67, 371, 22));
        cboSensor->setFont(font3);
        cboSensor->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneIdTortuga = new QLineEdit(gbStadistics);
        lneIdTortuga->setObjectName(QStringLiteral("lneIdTortuga"));
        lneIdTortuga->setEnabled(false);
        lneIdTortuga->setGeometry(QRect(90, 120, 121, 22));
        QFont font4;
        font4.setFamily(QStringLiteral("Raleway"));
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        lneIdTortuga->setFont(font4);
        lneIdTortuga->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneInvestigador = new QLineEdit(gbStadistics);
        lneInvestigador->setObjectName(QStringLiteral("lneInvestigador"));
        lneInvestigador->setEnabled(false);
        lneInvestigador->setGeometry(QRect(100, 180, 261, 21));
        lneInvestigador->setFont(font4);
        lneInvestigador->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbIdTortuga = new QLabel(gbStadistics);
        lbIdTortuga->setObjectName(QStringLiteral("lbIdTortuga"));
        lbIdTortuga->setGeometry(QRect(10, 120, 71, 21));
        QFont font5;
        font5.setFamily(QStringLiteral("Raleway"));
        font5.setPointSize(9);
        font5.setBold(false);
        font5.setWeight(50);
        lbIdTortuga->setFont(font5);
        lbNombreTortuga = new QLabel(gbStadistics);
        lbNombreTortuga->setObjectName(QStringLiteral("lbNombreTortuga"));
        lbNombreTortuga->setGeometry(QRect(220, 120, 121, 21));
        lbNombreTortuga->setFont(font5);
        lneNombreTortuga = new QLineEdit(gbStadistics);
        lneNombreTortuga->setObjectName(QStringLiteral("lneNombreTortuga"));
        lneNombreTortuga->setEnabled(false);
        lneNombreTortuga->setGeometry(QRect(340, 120, 221, 22));
        lneNombreTortuga->setFont(font4);
        lneNombreTortuga->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneZona = new QLineEdit(gbStadistics);
        lneZona->setObjectName(QStringLiteral("lneZona"));
        lneZona->setEnabled(false);
        lneZona->setGeometry(QRect(50, 210, 311, 21));
        lneZona->setFont(font4);
        lneZona->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbZona = new QLabel(gbStadistics);
        lbZona->setObjectName(QStringLiteral("lbZona"));
        lbZona->setGeometry(QRect(10, 210, 41, 20));
        lbZona->setFont(font5);
        lbSubespecie = new QLabel(gbStadistics);
        lbSubespecie->setObjectName(QStringLiteral("lbSubespecie"));
        lbSubespecie->setGeometry(QRect(10, 150, 91, 21));
        lbSubespecie->setFont(font5);
        lneSubespecie = new QLineEdit(gbStadistics);
        lneSubespecie->setObjectName(QStringLiteral("lneSubespecie"));
        lneSubespecie->setEnabled(false);
        lneSubespecie->setGeometry(QRect(100, 150, 261, 22));
        lneSubespecie->setFont(font4);
        lneSubespecie->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneEstado = new QLineEdit(gbStadistics);
        lneEstado->setObjectName(QStringLiteral("lneEstado"));
        lneEstado->setEnabled(false);
        lneEstado->setGeometry(QRect(60, 270, 301, 22));
        lneEstado->setFont(font4);
        lneEstado->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbMunicipio = new QLabel(gbStadistics);
        lbMunicipio->setObjectName(QStringLiteral("lbMunicipio"));
        lbMunicipio->setGeometry(QRect(10, 240, 71, 21));
        lbMunicipio->setFont(font5);
        lneMunicipio = new QLineEdit(gbStadistics);
        lneMunicipio->setObjectName(QStringLiteral("lneMunicipio"));
        lneMunicipio->setEnabled(false);
        lneMunicipio->setGeometry(QRect(80, 240, 281, 22));
        lneMunicipio->setFont(font4);
        lneMunicipio->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbInvestigador = new QLabel(gbStadistics);
        lbInvestigador->setObjectName(QStringLiteral("lbInvestigador"));
        lbInvestigador->setGeometry(QRect(10, 180, 91, 21));
        lbInvestigador->setFont(font5);
        lbEstado = new QLabel(gbStadistics);
        lbEstado->setObjectName(QStringLiteral("lbEstado"));
        lbEstado->setGeometry(QRect(10, 270, 51, 20));
        lbEstado->setFont(font5);
        lbDistance = new QLabel(gbStadistics);
        lbDistance->setObjectName(QStringLiteral("lbDistance"));
        lbDistance->setGeometry(QRect(380, 160, 311, 16));
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(true);
        font6.setWeight(75);
        lbDistance->setFont(font6);
        lbVelocidad = new QLabel(gbStadistics);
        lbVelocidad->setObjectName(QStringLiteral("lbVelocidad"));
        lbVelocidad->setGeometry(QRect(380, 190, 311, 16));
        lbVelocidad->setFont(font6);
        lbHour = new QLabel(gbStadistics);
        lbHour->setObjectName(QStringLiteral("lbHour"));
        lbHour->setGeometry(QRect(380, 220, 311, 16));
        lbHour->setFont(font6);
        lbDays = new QLabel(gbStadistics);
        lbDays->setObjectName(QStringLiteral("lbDays"));
        lbDays->setGeometry(QRect(380, 250, 311, 16));
        lbDays->setFont(font6);
        pbZones = new QPushButton(gbMain);
        pbZones->setObjectName(QStringLiteral("pbZones"));
        pbZones->setGeometry(QRect(780, 260, 271, 111));
        pbZones->setFont(font1);
        pbZones->setStyleSheet(QLatin1String(" QPushButton#pbZones {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#pbZones:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        pbZones2 = new QPushButton(gbMain);
        pbZones2->setObjectName(QStringLiteral("pbZones2"));
        pbZones2->setGeometry(QRect(780, 390, 271, 111));
        pbZones2->setFont(font1);
        pbZones2->setStyleSheet(QLatin1String(" QPushButton#pbZones2 {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#pbZones2:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        lbDensidad->raise();
        tvDensidad->raise();
        gbStadistics->raise();
        pbZones->raise();
        pbZones2->raise();
        Reportes->setCentralWidget(centralwidget);

        retranslateUi(Reportes);

        QMetaObject::connectSlotsByName(Reportes);
    } // setupUi

    void retranslateUi(QMainWindow *Reportes)
    {
        Reportes->setWindowTitle(QApplication::translate("Reportes", "Estad\303\255sticas sobre las tortugas y las zonas", nullptr));
        gbMain->setTitle(QString());
        lbDensidad->setText(QApplication::translate("Reportes", "A CONTINUACI\303\223N SE PRESENTA LA DENSIDAD POBLACIONAL\n"
"DE CADA UNA DE LAS ZONAS REGISTRADAS DENTRO DEL SISTEMA\n"
"SE PIDE PRESTAR ATENCI\303\223N A LA INFORMACI\303\223N", nullptr));
        gbStadistics->setTitle(QApplication::translate("Reportes", "Estad\303\255sticas de las tortugas", nullptr));
        lbZone->setText(QApplication::translate("Reportes", "Zona de la tortuga", nullptr));
        lbSensor->setText(QApplication::translate("Reportes", "Sensor de la tortuga a elegir", nullptr));
        lbIdTortuga->setText(QApplication::translate("Reportes", "Id Tortuga", nullptr));
        lbNombreTortuga->setText(QApplication::translate("Reportes", "Nombre tortuga", nullptr));
        lbZona->setText(QApplication::translate("Reportes", "Zona", nullptr));
        lbSubespecie->setText(QApplication::translate("Reportes", "Subespecie", nullptr));
        lneEstado->setText(QString());
        lbMunicipio->setText(QApplication::translate("Reportes", "Municipio", nullptr));
        lbInvestigador->setText(QApplication::translate("Reportes", "Investigador", nullptr));
        lbEstado->setText(QApplication::translate("Reportes", "Estado", nullptr));
        lbDistance->setText(QApplication::translate("Reportes", "Distancia:", nullptr));
        lbVelocidad->setText(QApplication::translate("Reportes", "Velocidad:", nullptr));
        lbHour->setText(QApplication::translate("Reportes", "Horas:", nullptr));
        lbDays->setText(QApplication::translate("Reportes", "D\303\255as:", nullptr));
        pbZones->setText(QApplication::translate("Reportes", "Puntos de zonas protegidas y \n"
"no protegidas", nullptr));
        pbZones2->setText(QApplication::translate("Reportes", "Zona de la tortuga marcada", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Reportes: public Ui_Reportes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTES_H
