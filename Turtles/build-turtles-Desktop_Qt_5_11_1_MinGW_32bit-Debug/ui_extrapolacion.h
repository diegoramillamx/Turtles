/********************************************************************************
** Form generated from reading UI file 'extrapolacion.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTRAPOLACION_H
#define UI_EXTRAPOLACION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_extraPolacion
{
public:
    QLabel *label;
    QGroupBox *mainGB;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *lbSensor;
    QComboBox *cboSensor;
    QLabel *lbIdTortuga;
    QLineEdit *lneIdTortuga;
    QLabel *lbNombreTortuga;
    QLineEdit *lneNombreTortuga;
    QLabel *lbSubespecie;
    QLineEdit *lneSubespecie;
    QLabel *lbInvestigador;
    QLineEdit *lneInvestigador;
    QLabel *lbZona;
    QLineEdit *lneZona;
    QLabel *lbMunicipio;
    QLineEdit *lneMunicipio;
    QLabel *lbEstado;
    QLineEdit *lneEstado;
    QPushButton *showMapPB;
    QPushButton *exitPB;

    void setupUi(QDialog *extraPolacion)
    {
        if (extraPolacion->objectName().isEmpty())
            extraPolacion->setObjectName(QStringLiteral("extraPolacion"));
        extraPolacion->resize(942, 509);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/if_Turtle_204384.ico"), QSize(), QIcon::Normal, QIcon::Off);
        extraPolacion->setWindowIcon(icon);
        label = new QLabel(extraPolacion);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 942, 509));
        label->setStyleSheet(QStringLiteral("background-color: rgb(56, 134, 136);"));
        mainGB = new QGroupBox(extraPolacion);
        mainGB->setObjectName(QStringLiteral("mainGB"));
        mainGB->setGeometry(QRect(20, 20, 901, 471));
        mainGB->setStyleSheet(QStringLiteral("background-color: rgb(231, 231, 231);"));
        groupBox = new QGroupBox(mainGB);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 381, 411));
        QFont font;
        font.setPointSize(13);
        groupBox->setFont(font);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lbSensor = new QLabel(groupBox);
        lbSensor->setObjectName(QStringLiteral("lbSensor"));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        lbSensor->setFont(font1);

        gridLayout->addWidget(lbSensor, 0, 0, 1, 3);

        cboSensor = new QComboBox(groupBox);
        cboSensor->setObjectName(QStringLiteral("cboSensor"));
        QFont font2;
        font2.setPointSize(11);
        cboSensor->setFont(font2);
        cboSensor->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(cboSensor, 0, 3, 1, 5);

        lbIdTortuga = new QLabel(groupBox);
        lbIdTortuga->setObjectName(QStringLiteral("lbIdTortuga"));
        lbIdTortuga->setFont(font1);

        gridLayout->addWidget(lbIdTortuga, 1, 0, 1, 4);

        lneIdTortuga = new QLineEdit(groupBox);
        lneIdTortuga->setObjectName(QStringLiteral("lneIdTortuga"));
        lneIdTortuga->setEnabled(false);
        lneIdTortuga->setFont(font1);
        lneIdTortuga->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(lneIdTortuga, 1, 4, 1, 4);

        lbNombreTortuga = new QLabel(groupBox);
        lbNombreTortuga->setObjectName(QStringLiteral("lbNombreTortuga"));
        lbNombreTortuga->setFont(font1);

        gridLayout->addWidget(lbNombreTortuga, 2, 0, 1, 7);

        lneNombreTortuga = new QLineEdit(groupBox);
        lneNombreTortuga->setObjectName(QStringLiteral("lneNombreTortuga"));
        lneNombreTortuga->setEnabled(false);
        lneNombreTortuga->setFont(font1);
        lneNombreTortuga->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(lneNombreTortuga, 2, 7, 1, 1);

        lbSubespecie = new QLabel(groupBox);
        lbSubespecie->setObjectName(QStringLiteral("lbSubespecie"));
        lbSubespecie->setFont(font1);

        gridLayout->addWidget(lbSubespecie, 3, 0, 1, 5);

        lneSubespecie = new QLineEdit(groupBox);
        lneSubespecie->setObjectName(QStringLiteral("lneSubespecie"));
        lneSubespecie->setEnabled(false);
        lneSubespecie->setFont(font1);
        lneSubespecie->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(lneSubespecie, 3, 5, 1, 3);

        lbInvestigador = new QLabel(groupBox);
        lbInvestigador->setObjectName(QStringLiteral("lbInvestigador"));
        lbInvestigador->setFont(font1);

        gridLayout->addWidget(lbInvestigador, 4, 0, 1, 6);

        lneInvestigador = new QLineEdit(groupBox);
        lneInvestigador->setObjectName(QStringLiteral("lneInvestigador"));
        lneInvestigador->setEnabled(false);
        lneInvestigador->setFont(font1);
        lneInvestigador->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(lneInvestigador, 4, 6, 1, 2);

        lbZona = new QLabel(groupBox);
        lbZona->setObjectName(QStringLiteral("lbZona"));
        lbZona->setFont(font1);

        gridLayout->addWidget(lbZona, 5, 0, 1, 1);

        lneZona = new QLineEdit(groupBox);
        lneZona->setObjectName(QStringLiteral("lneZona"));
        lneZona->setEnabled(false);
        lneZona->setFont(font1);
        lneZona->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(lneZona, 5, 1, 1, 7);

        lbMunicipio = new QLabel(groupBox);
        lbMunicipio->setObjectName(QStringLiteral("lbMunicipio"));
        lbMunicipio->setFont(font1);

        gridLayout->addWidget(lbMunicipio, 6, 0, 1, 3);

        lneMunicipio = new QLineEdit(groupBox);
        lneMunicipio->setObjectName(QStringLiteral("lneMunicipio"));
        lneMunicipio->setEnabled(false);
        lneMunicipio->setFont(font1);
        lneMunicipio->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(lneMunicipio, 6, 3, 1, 5);

        lbEstado = new QLabel(groupBox);
        lbEstado->setObjectName(QStringLiteral("lbEstado"));
        lbEstado->setFont(font1);

        gridLayout->addWidget(lbEstado, 7, 0, 1, 2);

        lneEstado = new QLineEdit(groupBox);
        lneEstado->setObjectName(QStringLiteral("lneEstado"));
        lneEstado->setEnabled(false);
        lneEstado->setFont(font1);
        lneEstado->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        gridLayout->addWidget(lneEstado, 7, 2, 1, 6);

        showMapPB = new QPushButton(mainGB);
        showMapPB->setObjectName(QStringLiteral("showMapPB"));
        showMapPB->setGeometry(QRect(520, 50, 301, 161));
        showMapPB->setFont(font);
        showMapPB->setStyleSheet(QLatin1String(" QPushButton#showMapPB {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#showMapPB:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/381031-200.ico"), QSize(), QIcon::Normal, QIcon::Off);
        showMapPB->setIcon(icon1);
        showMapPB->setIconSize(QSize(56, 56));
        exitPB = new QPushButton(mainGB);
        exitPB->setObjectName(QStringLiteral("exitPB"));
        exitPB->setGeometry(QRect(520, 250, 301, 161));
        exitPB->setFont(font);
        exitPB->setStyleSheet(QLatin1String(" QPushButton#exitPB {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#exitPB:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/door_out.ico"), QSize(), QIcon::Normal, QIcon::Off);
        exitPB->setIcon(icon2);
        exitPB->setIconSize(QSize(46, 46));

        retranslateUi(extraPolacion);
        QObject::connect(exitPB, SIGNAL(clicked()), extraPolacion, SLOT(close()));

        QMetaObject::connectSlotsByName(extraPolacion);
    } // setupUi

    void retranslateUi(QDialog *extraPolacion)
    {
        extraPolacion->setWindowTitle(QApplication::translate("extraPolacion", "Extrapolaci\303\263n de avance", nullptr));
        label->setText(QString());
        mainGB->setTitle(QString());
        groupBox->setTitle(QApplication::translate("extraPolacion", "Predecir siguiente punto en ruta", nullptr));
        lbSensor->setText(QApplication::translate("extraPolacion", "Sensor", nullptr));
        lbIdTortuga->setText(QApplication::translate("extraPolacion", "Id Tortuga", nullptr));
        lbNombreTortuga->setText(QApplication::translate("extraPolacion", "Nombre tortuga", nullptr));
        lbSubespecie->setText(QApplication::translate("extraPolacion", "Subespecie", nullptr));
        lbInvestigador->setText(QApplication::translate("extraPolacion", "Investigador", nullptr));
        lbZona->setText(QApplication::translate("extraPolacion", "Zona", nullptr));
        lbMunicipio->setText(QApplication::translate("extraPolacion", "Municipio", nullptr));
        lbEstado->setText(QApplication::translate("extraPolacion", "Estado", nullptr));
        lneEstado->setText(QString());
        showMapPB->setText(QApplication::translate("extraPolacion", "Mostrar mapa", nullptr));
        exitPB->setText(QApplication::translate("extraPolacion", "Salir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class extraPolacion: public Ui_extraPolacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTRAPOLACION_H
