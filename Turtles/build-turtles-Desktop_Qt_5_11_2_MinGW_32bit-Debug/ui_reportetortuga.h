/********************************************************************************
** Form generated from reading UI file 'reportetortuga.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTETORTUGA_H
#define UI_REPORTETORTUGA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReporteTortuga
{
public:
    QWidget *centralwidget;
    QGroupBox *gbMain;
    QLabel *lbMunicipio;
    QLineEdit *lneZona;
    QLabel *lbInvestigador;
    QLabel *lbIdTortuga;
    QLabel *lbNombreTortuga;
    QLabel *lbZona;
    QLineEdit *lneSubespecie;
    QLineEdit *lneNombreTortuga;
    QLineEdit *lneIdTortuga;
    QLineEdit *lneEstado;
    QLineEdit *lneInvestigador;
    QLabel *lbSubespecie;
    QLabel *lbEstado;
    QLineEdit *lneMunicipio;
    QLabel *lbInvestigador_2;
    QLineEdit *lneCodigo;
    QLineEdit *lneReport;
    QPushButton *pbRegister;
    QGroupBox *gbActive;
    QPushButton *pbActive;
    QPushButton *pbExit;

    void setupUi(QMainWindow *ReporteTortuga)
    {
        if (ReporteTortuga->objectName().isEmpty())
            ReporteTortuga->setObjectName(QStringLiteral("ReporteTortuga"));
        ReporteTortuga->resize(1003, 507);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/if_Turtle_204384.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ReporteTortuga->setWindowIcon(icon);
        ReporteTortuga->setStyleSheet(QStringLiteral("background-color: rgb(57, 134, 137)"));
        centralwidget = new QWidget(ReporteTortuga);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gbMain = new QGroupBox(centralwidget);
        gbMain->setObjectName(QStringLiteral("gbMain"));
        gbMain->setEnabled(true);
        gbMain->setGeometry(QRect(10, 100, 981, 391));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        font.setPointSize(10);
        gbMain->setFont(font);
        gbMain->setStyleSheet(QLatin1String("background-color: rgb(206, 206, 206);\n"
"background-color: rgb(255, 170, 255);\n"
"background-color: rgb(231, 231, 231);"));
        lbMunicipio = new QLabel(gbMain);
        lbMunicipio->setObjectName(QStringLiteral("lbMunicipio"));
        lbMunicipio->setGeometry(QRect(20, 90, 71, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        lbMunicipio->setFont(font1);
        lneZona = new QLineEdit(gbMain);
        lneZona->setObjectName(QStringLiteral("lneZona"));
        lneZona->setEnabled(false);
        lneZona->setGeometry(QRect(620, 60, 311, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        font2.setPointSize(9);
        font2.setBold(true);
        font2.setWeight(75);
        lneZona->setFont(font2);
        lneZona->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbInvestigador = new QLabel(gbMain);
        lbInvestigador->setObjectName(QStringLiteral("lbInvestigador"));
        lbInvestigador->setGeometry(QRect(220, 60, 91, 21));
        lbInvestigador->setFont(font1);
        lbIdTortuga = new QLabel(gbMain);
        lbIdTortuga->setObjectName(QStringLiteral("lbIdTortuga"));
        lbIdTortuga->setGeometry(QRect(20, 30, 71, 21));
        lbIdTortuga->setFont(font1);
        lbNombreTortuga = new QLabel(gbMain);
        lbNombreTortuga->setObjectName(QStringLiteral("lbNombreTortuga"));
        lbNombreTortuga->setGeometry(QRect(230, 30, 121, 21));
        lbNombreTortuga->setFont(font1);
        lbZona = new QLabel(gbMain);
        lbZona->setObjectName(QStringLiteral("lbZona"));
        lbZona->setGeometry(QRect(580, 60, 41, 20));
        lbZona->setFont(font1);
        lneSubespecie = new QLineEdit(gbMain);
        lneSubespecie->setObjectName(QStringLiteral("lneSubespecie"));
        lneSubespecie->setEnabled(false);
        lneSubespecie->setGeometry(QRect(670, 30, 261, 22));
        lneSubespecie->setFont(font2);
        lneSubespecie->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneNombreTortuga = new QLineEdit(gbMain);
        lneNombreTortuga->setObjectName(QStringLiteral("lneNombreTortuga"));
        lneNombreTortuga->setEnabled(false);
        lneNombreTortuga->setGeometry(QRect(350, 30, 221, 22));
        lneNombreTortuga->setFont(font2);
        lneNombreTortuga->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneIdTortuga = new QLineEdit(gbMain);
        lneIdTortuga->setObjectName(QStringLiteral("lneIdTortuga"));
        lneIdTortuga->setEnabled(false);
        lneIdTortuga->setGeometry(QRect(100, 30, 121, 22));
        lneIdTortuga->setFont(font2);
        lneIdTortuga->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneEstado = new QLineEdit(gbMain);
        lneEstado->setObjectName(QStringLiteral("lneEstado"));
        lneEstado->setEnabled(false);
        lneEstado->setGeometry(QRect(430, 90, 301, 22));
        lneEstado->setFont(font2);
        lneEstado->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneInvestigador = new QLineEdit(gbMain);
        lneInvestigador->setObjectName(QStringLiteral("lneInvestigador"));
        lneInvestigador->setEnabled(false);
        lneInvestigador->setGeometry(QRect(310, 60, 261, 21));
        lneInvestigador->setFont(font2);
        lneInvestigador->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbSubespecie = new QLabel(gbMain);
        lbSubespecie->setObjectName(QStringLiteral("lbSubespecie"));
        lbSubespecie->setGeometry(QRect(580, 30, 91, 21));
        lbSubespecie->setFont(font1);
        lbEstado = new QLabel(gbMain);
        lbEstado->setObjectName(QStringLiteral("lbEstado"));
        lbEstado->setGeometry(QRect(380, 90, 51, 20));
        lbEstado->setFont(font1);
        lneMunicipio = new QLineEdit(gbMain);
        lneMunicipio->setObjectName(QStringLiteral("lneMunicipio"));
        lneMunicipio->setEnabled(false);
        lneMunicipio->setGeometry(QRect(90, 90, 281, 22));
        lneMunicipio->setFont(font2);
        lneMunicipio->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbInvestigador_2 = new QLabel(gbMain);
        lbInvestigador_2->setObjectName(QStringLiteral("lbInvestigador_2"));
        lbInvestigador_2->setGeometry(QRect(20, 60, 61, 21));
        lbInvestigador_2->setFont(font1);
        lneCodigo = new QLineEdit(gbMain);
        lneCodigo->setObjectName(QStringLiteral("lneCodigo"));
        lneCodigo->setEnabled(false);
        lneCodigo->setGeometry(QRect(90, 60, 121, 21));
        lneCodigo->setFont(font2);
        lneCodigo->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneReport = new QLineEdit(gbMain);
        lneReport->setObjectName(QStringLiteral("lneReport"));
        lneReport->setEnabled(false);
        lneReport->setGeometry(QRect(20, 130, 711, 241));
        QFont font3;
        font3.setFamily(QStringLiteral("Raleway Black"));
        font3.setPointSize(10);
        lneReport->setFont(font3);
        lneReport->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pbRegister = new QPushButton(gbMain);
        pbRegister->setObjectName(QStringLiteral("pbRegister"));
        pbRegister->setEnabled(false);
        pbRegister->setGeometry(QRect(740, 210, 221, 81));
        QFont font4;
        font4.setFamily(QStringLiteral("Raleway"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        pbRegister->setFont(font4);
        pbRegister->setStyleSheet(QLatin1String(" QPushButton#pbRegister {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#pbRegister:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/report_save.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbRegister->setIcon(icon1);
        pbRegister->setIconSize(QSize(60, 60));
        gbActive = new QGroupBox(centralwidget);
        gbActive->setObjectName(QStringLiteral("gbActive"));
        gbActive->setGeometry(QRect(10, 10, 981, 80));
        gbActive->setStyleSheet(QLatin1String("background-color: rgb(206, 206, 206);\n"
"background-color: rgb(255, 170, 255);\n"
"background-color: rgb(231, 231, 231);"));
        pbActive = new QPushButton(gbActive);
        pbActive->setObjectName(QStringLiteral("pbActive"));
        pbActive->setGeometry(QRect(20, 10, 181, 61));
        pbActive->setFont(font2);
        pbActive->setStyleSheet(QLatin1String(" QPushButton#pbActive {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#pbActive:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/report_add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbActive->setIcon(icon2);
        pbActive->setIconSize(QSize(60, 60));
        pbExit = new QPushButton(gbActive);
        pbExit->setObjectName(QStringLiteral("pbExit"));
        pbExit->setGeometry(QRect(780, 10, 181, 61));
        pbExit->setFont(font4);
        pbExit->setStyleSheet(QLatin1String(" QPushButton#pbExit {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#pbExit:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/door_out.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbExit->setIcon(icon3);
        pbExit->setIconSize(QSize(60, 60));
        ReporteTortuga->setCentralWidget(centralwidget);

        retranslateUi(ReporteTortuga);
        QObject::connect(pbExit, SIGNAL(clicked()), ReporteTortuga, SLOT(close()));

        QMetaObject::connectSlotsByName(ReporteTortuga);
    } // setupUi

    void retranslateUi(QMainWindow *ReporteTortuga)
    {
        ReporteTortuga->setWindowTitle(QApplication::translate("ReporteTortuga", "Reportes de las tortugas", nullptr));
        gbMain->setTitle(QApplication::translate("ReporteTortuga", "Reporte de tortugas", nullptr));
        lbMunicipio->setText(QApplication::translate("ReporteTortuga", "Municipio", nullptr));
        lbInvestigador->setText(QApplication::translate("ReporteTortuga", "Investigador", nullptr));
        lbIdTortuga->setText(QApplication::translate("ReporteTortuga", "Id Tortuga", nullptr));
        lbNombreTortuga->setText(QApplication::translate("ReporteTortuga", "Nombre tortuga", nullptr));
        lbZona->setText(QApplication::translate("ReporteTortuga", "Zona", nullptr));
        lneEstado->setText(QString());
        lbSubespecie->setText(QApplication::translate("ReporteTortuga", "Subespecie", nullptr));
        lbEstado->setText(QApplication::translate("ReporteTortuga", "Estado", nullptr));
        lbInvestigador_2->setText(QApplication::translate("ReporteTortuga", "C\303\263digo", nullptr));
        pbRegister->setText(QApplication::translate("ReporteTortuga", "   Registrar reportes", nullptr));
        gbActive->setTitle(QString());
        pbActive->setText(QApplication::translate("ReporteTortuga", "  Activar", nullptr));
        pbExit->setText(QApplication::translate("ReporteTortuga", "    Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReporteTortuga: public Ui_ReporteTortuga {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTETORTUGA_H
