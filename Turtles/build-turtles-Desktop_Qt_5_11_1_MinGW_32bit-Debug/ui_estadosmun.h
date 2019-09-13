/********************************************************************************
** Form generated from reading UI file 'estadosmun.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESTADOSMUN_H
#define UI_ESTADOSMUN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_estadosMun
{
public:
    QLabel *background;
    QTabWidget *tabWidget;
    QWidget *Estados;
    QGroupBox *groupBox;
    QGroupBox *gbActivity;
    QGridLayout *gridLayout;
    QRadioButton *buscarEstadoRB;
    QRadioButton *modEstadoRB;
    QRadioButton *altaEstadoRB;
    QGroupBox *gbAltaEdo;
    QLineEdit *lneIdEstado;
    QLineEdit *lneEstado;
    QLabel *lbEstado;
    QPushButton *pbAgregar;
    QLabel *lbIdEstado;
    QGroupBox *gbBuscarEdo;
    QLabel *lbEstadoBusqueda;
    QLineEdit *lneQueryEdo;
    QTableView *tvQueryEdo;
    QGroupBox *gbModificarEdo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbIdSubModificarEstado;
    QLineEdit *lneIdEstadoMod;
    QPushButton *pbBuscarEdo;
    QLabel *lbSubModificarEstado;
    QLineEdit *lneEdoMod;
    QPushButton *pbModificarEdo;
    QPushButton *pbOut2;
    QWidget *Municipios;
    QGroupBox *groupBox_2;
    QGroupBox *gbActivityMpo;
    QGridLayout *gridLayout_2;
    QRadioButton *buscarMunicipioRB;
    QRadioButton *modMunicipioRB;
    QRadioButton *altaMunicipioRB;
    QGroupBox *gbAltaMunicipio;
    QLineEdit *lneIdMpo;
    QLineEdit *lneMunicipio;
    QLabel *lbMunicipio;
    QPushButton *pbAgregarMpo;
    QLabel *lbIdMunicipio;
    QLabel *lbIdEstadoMpo;
    QLineEdit *lneEstadoMpo;
    QGroupBox *gbBuscarMpo;
    QLabel *lbMunicipioBsq;
    QLineEdit *lneQueryMpo;
    QTableView *tvQueryMpo;
    QGroupBox *gbModificarMpo;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbIdSubModificarMpo;
    QLineEdit *lneIdMpoMod;
    QPushButton *pbBuscarMpo;
    QLabel *lbSubModificarMpo;
    QLineEdit *lneMpoMod;
    QLabel *lbSubModificarEdoMpo;
    QLineEdit *lneEdoMpoMod;
    QPushButton *pbModificarMpo;
    QPushButton *pbOut2_2;

    void setupUi(QWidget *estadosMun)
    {
        if (estadosMun->objectName().isEmpty())
            estadosMun->setObjectName(QStringLiteral("estadosMun"));
        estadosMun->resize(1375, 700);
        estadosMun->setMinimumSize(QSize(1375, 700));
        estadosMun->setMaximumSize(QSize(1375, 700));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/if_Turtle_204384.ico"), QSize(), QIcon::Normal, QIcon::Off);
        estadosMun->setWindowIcon(icon);
        background = new QLabel(estadosMun);
        background->setObjectName(QStringLiteral("background"));
        background->setGeometry(QRect(0, 0, 1375, 700));
        background->setMinimumSize(QSize(1375, 700));
        background->setMaximumSize(QSize(1375, 700));
        background->setStyleSheet(QStringLiteral("background-color: rgb(57, 134, 137)"));
        tabWidget = new QTabWidget(estadosMun);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(60, 20, 1250, 630));
        tabWidget->setMinimumSize(QSize(1250, 630));
        tabWidget->setMaximumSize(QSize(1250, 630));
        QFont font;
        font.setPointSize(11);
        tabWidget->setFont(font);
        Estados = new QWidget();
        Estados->setObjectName(QStringLiteral("Estados"));
        Estados->setFont(font);
        groupBox = new QGroupBox(Estados);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 1250, 611));
        groupBox->setMinimumSize(QSize(1250, 611));
        groupBox->setMaximumSize(QSize(1250, 611));
        groupBox->setStyleSheet(QLatin1String("background-color: rgb(206, 206, 206);\n"
"background-color: rgb(231, 231, 231);"));
        gbActivity = new QGroupBox(groupBox);
        gbActivity->setObjectName(QStringLiteral("gbActivity"));
        gbActivity->setGeometry(QRect(100, 50, 711, 81));
        gbActivity->setMinimumSize(QSize(711, 81));
        gbActivity->setMaximumSize(QSize(711, 81));
        QFont font1;
        font1.setPointSize(13);
        gbActivity->setFont(font1);
        gridLayout = new QGridLayout(gbActivity);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buscarEstadoRB = new QRadioButton(gbActivity);
        buscarEstadoRB->setObjectName(QStringLiteral("buscarEstadoRB"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        buscarEstadoRB->setFont(font2);

        gridLayout->addWidget(buscarEstadoRB, 0, 1, 1, 1);

        modEstadoRB = new QRadioButton(gbActivity);
        modEstadoRB->setObjectName(QStringLiteral("modEstadoRB"));
        modEstadoRB->setFont(font2);

        gridLayout->addWidget(modEstadoRB, 0, 2, 1, 1);

        altaEstadoRB = new QRadioButton(gbActivity);
        altaEstadoRB->setObjectName(QStringLiteral("altaEstadoRB"));
        altaEstadoRB->setFont(font2);
        altaEstadoRB->setChecked(true);

        gridLayout->addWidget(altaEstadoRB, 0, 0, 1, 1);

        gbAltaEdo = new QGroupBox(groupBox);
        gbAltaEdo->setObjectName(QStringLiteral("gbAltaEdo"));
        gbAltaEdo->setEnabled(true);
        gbAltaEdo->setGeometry(QRect(100, 160, 271, 251));
        gbAltaEdo->setMinimumSize(QSize(271, 251));
        gbAltaEdo->setMaximumSize(QSize(271, 251));
        gbAltaEdo->setFont(font1);
        lneIdEstado = new QLineEdit(gbAltaEdo);
        lneIdEstado->setObjectName(QStringLiteral("lneIdEstado"));
        lneIdEstado->setEnabled(false);
        lneIdEstado->setGeometry(QRect(110, 54, 141, 22));
        QFont font3;
        font3.setFamily(QStringLiteral("Raleway"));
        font3.setPointSize(11);
        lneIdEstado->setFont(font3);
        lneIdEstado->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneIdEstado->setAlignment(Qt::AlignCenter);
        lneEstado = new QLineEdit(gbAltaEdo);
        lneEstado->setObjectName(QStringLiteral("lneEstado"));
        lneEstado->setEnabled(true);
        lneEstado->setGeometry(QRect(110, 84, 141, 22));
        lneEstado->setFont(font3);
        lneEstado->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbEstado = new QLabel(gbAltaEdo);
        lbEstado->setObjectName(QStringLiteral("lbEstado"));
        lbEstado->setEnabled(true);
        lbEstado->setGeometry(QRect(20, 88, 71, 16));
        QFont font4;
        font4.setFamily(QStringLiteral("Raleway"));
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        lbEstado->setFont(font4);
        lbEstado->setAlignment(Qt::AlignCenter);
        pbAgregar = new QPushButton(gbAltaEdo);
        pbAgregar->setObjectName(QStringLiteral("pbAgregar"));
        pbAgregar->setEnabled(true);
        pbAgregar->setGeometry(QRect(30, 143, 211, 40));
        pbAgregar->setFont(font2);
        pbAgregar->setStyleSheet(QStringLiteral("background-color: rgb(120, 190, 151);"));
        lbIdEstado = new QLabel(gbAltaEdo);
        lbIdEstado->setObjectName(QStringLiteral("lbIdEstado"));
        lbIdEstado->setEnabled(true);
        lbIdEstado->setGeometry(QRect(20, 58, 81, 16));
        lbIdEstado->setFont(font4);
        lbIdEstado->setAlignment(Qt::AlignCenter);
        gbBuscarEdo = new QGroupBox(groupBox);
        gbBuscarEdo->setObjectName(QStringLiteral("gbBuscarEdo"));
        gbBuscarEdo->setEnabled(false);
        gbBuscarEdo->setGeometry(QRect(400, 160, 741, 251));
        gbBuscarEdo->setMinimumSize(QSize(741, 251));
        gbBuscarEdo->setMaximumSize(QSize(741, 251));
        QFont font5;
        font5.setFamily(QStringLiteral("Raleway"));
        font5.setPointSize(13);
        gbBuscarEdo->setFont(font5);
        lbEstadoBusqueda = new QLabel(gbBuscarEdo);
        lbEstadoBusqueda->setObjectName(QStringLiteral("lbEstadoBusqueda"));
        lbEstadoBusqueda->setGeometry(QRect(60, 40, 81, 21));
        lbEstadoBusqueda->setFont(font4);
        lbEstadoBusqueda->setAlignment(Qt::AlignCenter);
        lneQueryEdo = new QLineEdit(gbBuscarEdo);
        lneQueryEdo->setObjectName(QStringLiteral("lneQueryEdo"));
        lneQueryEdo->setGeometry(QRect(160, 40, 551, 22));
        lneQueryEdo->setFont(font3);
        lneQueryEdo->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tvQueryEdo = new QTableView(gbBuscarEdo);
        tvQueryEdo->setObjectName(QStringLiteral("tvQueryEdo"));
        tvQueryEdo->setGeometry(QRect(50, 80, 661, 131));
        gbModificarEdo = new QGroupBox(groupBox);
        gbModificarEdo->setObjectName(QStringLiteral("gbModificarEdo"));
        gbModificarEdo->setEnabled(false);
        gbModificarEdo->setGeometry(QRect(100, 440, 1041, 101));
        gbModificarEdo->setMinimumSize(QSize(1041, 101));
        gbModificarEdo->setMaximumSize(QSize(1041, 101));
        gbModificarEdo->setFont(font5);
        horizontalLayout_2 = new QHBoxLayout(gbModificarEdo);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbIdSubModificarEstado = new QLabel(gbModificarEdo);
        lbIdSubModificarEstado->setObjectName(QStringLiteral("lbIdSubModificarEstado"));
        lbIdSubModificarEstado->setFont(font4);

        horizontalLayout_2->addWidget(lbIdSubModificarEstado);

        lneIdEstadoMod = new QLineEdit(gbModificarEdo);
        lneIdEstadoMod->setObjectName(QStringLiteral("lneIdEstadoMod"));
        lneIdEstadoMod->setFont(font3);
        lneIdEstadoMod->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(lneIdEstadoMod);

        pbBuscarEdo = new QPushButton(gbModificarEdo);
        pbBuscarEdo->setObjectName(QStringLiteral("pbBuscarEdo"));
        pbBuscarEdo->setFont(font4);
        pbBuscarEdo->setStyleSheet(QStringLiteral("background-color: rgb(120, 190, 151);"));

        horizontalLayout_2->addWidget(pbBuscarEdo);

        lbSubModificarEstado = new QLabel(gbModificarEdo);
        lbSubModificarEstado->setObjectName(QStringLiteral("lbSubModificarEstado"));
        lbSubModificarEstado->setFont(font4);

        horizontalLayout_2->addWidget(lbSubModificarEstado);

        lneEdoMod = new QLineEdit(gbModificarEdo);
        lneEdoMod->setObjectName(QStringLiteral("lneEdoMod"));
        lneEdoMod->setFont(font3);
        lneEdoMod->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(lneEdoMod);

        pbModificarEdo = new QPushButton(gbModificarEdo);
        pbModificarEdo->setObjectName(QStringLiteral("pbModificarEdo"));
        pbModificarEdo->setFont(font4);
        pbModificarEdo->setStyleSheet(QLatin1String("\n"
"background-color: rgb(120, 190, 151);"));

        horizontalLayout_2->addWidget(pbModificarEdo);

        pbOut2 = new QPushButton(groupBox);
        pbOut2->setObjectName(QStringLiteral("pbOut2"));
        pbOut2->setGeometry(QRect(840, 60, 131, 61));
        pbOut2->setFont(font4);
        pbOut2->setStyleSheet(QStringLiteral("background-color: rgb(120, 190, 151);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/door_out.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbOut2->setIcon(icon1);
        tabWidget->addTab(Estados, QString());
        Municipios = new QWidget();
        Municipios->setObjectName(QStringLiteral("Municipios"));
        groupBox_2 = new QGroupBox(Municipios);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 1250, 611));
        groupBox_2->setMinimumSize(QSize(1250, 611));
        groupBox_2->setMaximumSize(QSize(1250, 611));
        groupBox_2->setStyleSheet(QLatin1String("background-color: rgb(206, 206, 206);\n"
"background-color: rgb(231, 231, 231);"));
        gbActivityMpo = new QGroupBox(groupBox_2);
        gbActivityMpo->setObjectName(QStringLiteral("gbActivityMpo"));
        gbActivityMpo->setGeometry(QRect(100, 50, 711, 81));
        gbActivityMpo->setMinimumSize(QSize(711, 81));
        gbActivityMpo->setMaximumSize(QSize(711, 81));
        gbActivityMpo->setFont(font1);
        gridLayout_2 = new QGridLayout(gbActivityMpo);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        buscarMunicipioRB = new QRadioButton(gbActivityMpo);
        buscarMunicipioRB->setObjectName(QStringLiteral("buscarMunicipioRB"));
        buscarMunicipioRB->setFont(font2);

        gridLayout_2->addWidget(buscarMunicipioRB, 0, 1, 1, 1);

        modMunicipioRB = new QRadioButton(gbActivityMpo);
        modMunicipioRB->setObjectName(QStringLiteral("modMunicipioRB"));
        modMunicipioRB->setFont(font2);

        gridLayout_2->addWidget(modMunicipioRB, 0, 2, 1, 1);

        altaMunicipioRB = new QRadioButton(gbActivityMpo);
        altaMunicipioRB->setObjectName(QStringLiteral("altaMunicipioRB"));
        altaMunicipioRB->setFont(font2);
        altaMunicipioRB->setChecked(true);

        gridLayout_2->addWidget(altaMunicipioRB, 0, 0, 1, 1);

        gbAltaMunicipio = new QGroupBox(groupBox_2);
        gbAltaMunicipio->setObjectName(QStringLiteral("gbAltaMunicipio"));
        gbAltaMunicipio->setEnabled(true);
        gbAltaMunicipio->setGeometry(QRect(100, 160, 271, 251));
        gbAltaMunicipio->setFont(font1);
        lneIdMpo = new QLineEdit(gbAltaMunicipio);
        lneIdMpo->setObjectName(QStringLiteral("lneIdMpo"));
        lneIdMpo->setEnabled(false);
        lneIdMpo->setGeometry(QRect(150, 50, 101, 22));
        lneIdMpo->setFont(font3);
        lneIdMpo->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneIdMpo->setAlignment(Qt::AlignCenter);
        lneMunicipio = new QLineEdit(gbAltaMunicipio);
        lneMunicipio->setObjectName(QStringLiteral("lneMunicipio"));
        lneMunicipio->setEnabled(true);
        lneMunicipio->setGeometry(QRect(119, 84, 131, 22));
        lneMunicipio->setFont(font3);
        lneMunicipio->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbMunicipio = new QLabel(gbAltaMunicipio);
        lbMunicipio->setObjectName(QStringLiteral("lbMunicipio"));
        lbMunicipio->setEnabled(true);
        lbMunicipio->setGeometry(QRect(20, 85, 91, 21));
        lbMunicipio->setFont(font4);
        lbMunicipio->setAlignment(Qt::AlignCenter);
        pbAgregarMpo = new QPushButton(gbAltaMunicipio);
        pbAgregarMpo->setObjectName(QStringLiteral("pbAgregarMpo"));
        pbAgregarMpo->setEnabled(true);
        pbAgregarMpo->setGeometry(QRect(30, 170, 211, 40));
        pbAgregarMpo->setFont(font2);
        pbAgregarMpo->setStyleSheet(QStringLiteral("background-color: rgb(120, 190, 151);"));
        lbIdMunicipio = new QLabel(gbAltaMunicipio);
        lbIdMunicipio->setObjectName(QStringLiteral("lbIdMunicipio"));
        lbIdMunicipio->setEnabled(true);
        lbIdMunicipio->setGeometry(QRect(19, 50, 121, 16));
        lbIdMunicipio->setFont(font4);
        lbIdMunicipio->setAlignment(Qt::AlignCenter);
        lbIdEstadoMpo = new QLabel(gbAltaMunicipio);
        lbIdEstadoMpo->setObjectName(QStringLiteral("lbIdEstadoMpo"));
        lbIdEstadoMpo->setEnabled(true);
        lbIdEstadoMpo->setGeometry(QRect(20, 120, 91, 21));
        lbIdEstadoMpo->setFont(font4);
        lbIdEstadoMpo->setAlignment(Qt::AlignCenter);
        lneEstadoMpo = new QLineEdit(gbAltaMunicipio);
        lneEstadoMpo->setObjectName(QStringLiteral("lneEstadoMpo"));
        lneEstadoMpo->setEnabled(true);
        lneEstadoMpo->setGeometry(QRect(120, 120, 131, 22));
        lneEstadoMpo->setFont(font3);
        lneEstadoMpo->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        gbBuscarMpo = new QGroupBox(groupBox_2);
        gbBuscarMpo->setObjectName(QStringLiteral("gbBuscarMpo"));
        gbBuscarMpo->setEnabled(false);
        gbBuscarMpo->setGeometry(QRect(400, 160, 741, 251));
        gbBuscarMpo->setFont(font5);
        lbMunicipioBsq = new QLabel(gbBuscarMpo);
        lbMunicipioBsq->setObjectName(QStringLiteral("lbMunicipioBsq"));
        lbMunicipioBsq->setGeometry(QRect(50, 40, 101, 21));
        lbMunicipioBsq->setFont(font4);
        lbMunicipioBsq->setAlignment(Qt::AlignCenter);
        lneQueryMpo = new QLineEdit(gbBuscarMpo);
        lneQueryMpo->setObjectName(QStringLiteral("lneQueryMpo"));
        lneQueryMpo->setGeometry(QRect(160, 40, 551, 22));
        lneQueryMpo->setFont(font3);
        lneQueryMpo->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tvQueryMpo = new QTableView(gbBuscarMpo);
        tvQueryMpo->setObjectName(QStringLiteral("tvQueryMpo"));
        tvQueryMpo->setGeometry(QRect(50, 80, 661, 131));
        gbModificarMpo = new QGroupBox(groupBox_2);
        gbModificarMpo->setObjectName(QStringLiteral("gbModificarMpo"));
        gbModificarMpo->setEnabled(false);
        gbModificarMpo->setGeometry(QRect(100, 440, 1041, 101));
        gbModificarMpo->setFont(font5);
        horizontalLayout_3 = new QHBoxLayout(gbModificarMpo);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lbIdSubModificarMpo = new QLabel(gbModificarMpo);
        lbIdSubModificarMpo->setObjectName(QStringLiteral("lbIdSubModificarMpo"));
        lbIdSubModificarMpo->setFont(font4);

        horizontalLayout_3->addWidget(lbIdSubModificarMpo);

        lneIdMpoMod = new QLineEdit(gbModificarMpo);
        lneIdMpoMod->setObjectName(QStringLiteral("lneIdMpoMod"));
        lneIdMpoMod->setFont(font3);
        lneIdMpoMod->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(lneIdMpoMod);

        pbBuscarMpo = new QPushButton(gbModificarMpo);
        pbBuscarMpo->setObjectName(QStringLiteral("pbBuscarMpo"));
        pbBuscarMpo->setFont(font4);
        pbBuscarMpo->setStyleSheet(QStringLiteral("background-color: rgb(120, 190, 151);"));

        horizontalLayout_3->addWidget(pbBuscarMpo);

        lbSubModificarMpo = new QLabel(gbModificarMpo);
        lbSubModificarMpo->setObjectName(QStringLiteral("lbSubModificarMpo"));
        lbSubModificarMpo->setFont(font4);

        horizontalLayout_3->addWidget(lbSubModificarMpo);

        lneMpoMod = new QLineEdit(gbModificarMpo);
        lneMpoMod->setObjectName(QStringLiteral("lneMpoMod"));
        lneMpoMod->setFont(font3);
        lneMpoMod->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(lneMpoMod);

        lbSubModificarEdoMpo = new QLabel(gbModificarMpo);
        lbSubModificarEdoMpo->setObjectName(QStringLiteral("lbSubModificarEdoMpo"));
        lbSubModificarEdoMpo->setFont(font4);

        horizontalLayout_3->addWidget(lbSubModificarEdoMpo);

        lneEdoMpoMod = new QLineEdit(gbModificarMpo);
        lneEdoMpoMod->setObjectName(QStringLiteral("lneEdoMpoMod"));
        lneEdoMpoMod->setFont(font3);
        lneEdoMpoMod->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(lneEdoMpoMod);

        pbModificarMpo = new QPushButton(gbModificarMpo);
        pbModificarMpo->setObjectName(QStringLiteral("pbModificarMpo"));
        pbModificarMpo->setFont(font4);
        pbModificarMpo->setStyleSheet(QLatin1String("\n"
"background-color: rgb(120, 190, 151);"));

        horizontalLayout_3->addWidget(pbModificarMpo);

        pbOut2_2 = new QPushButton(groupBox_2);
        pbOut2_2->setObjectName(QStringLiteral("pbOut2_2"));
        pbOut2_2->setGeometry(QRect(830, 60, 131, 61));
        pbOut2_2->setFont(font4);
        pbOut2_2->setStyleSheet(QStringLiteral("background-color: rgb(120, 190, 151);"));
        pbOut2_2->setIcon(icon1);
        tabWidget->addTab(Municipios, QString());

        retranslateUi(estadosMun);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(estadosMun);
    } // setupUi

    void retranslateUi(QWidget *estadosMun)
    {
        estadosMun->setWindowTitle(QApplication::translate("estadosMun", "Estados y municipios", nullptr));
        background->setText(QString());
        groupBox->setTitle(QString());
        gbActivity->setTitle(QApplication::translate("estadosMun", "Actividades", nullptr));
        buscarEstadoRB->setText(QApplication::translate("estadosMun", "Buscar", nullptr));
        modEstadoRB->setText(QApplication::translate("estadosMun", "Modificar", nullptr));
        altaEstadoRB->setText(QApplication::translate("estadosMun", "Alta", nullptr));
        gbAltaEdo->setTitle(QApplication::translate("estadosMun", "Altas", nullptr));
        lbEstado->setText(QApplication::translate("estadosMun", "Estado", nullptr));
        pbAgregar->setText(QApplication::translate("estadosMun", "Agregar", nullptr));
        lbIdEstado->setText(QApplication::translate("estadosMun", "Id Estado", nullptr));
        gbBuscarEdo->setTitle(QApplication::translate("estadosMun", "Buscar", nullptr));
        lbEstadoBusqueda->setText(QApplication::translate("estadosMun", "Estado", nullptr));
        gbModificarEdo->setTitle(QApplication::translate("estadosMun", "Modificar", nullptr));
        lbIdSubModificarEstado->setText(QApplication::translate("estadosMun", "Id Estado", nullptr));
        pbBuscarEdo->setText(QApplication::translate("estadosMun", "Buscar", nullptr));
        lbSubModificarEstado->setText(QApplication::translate("estadosMun", "Estado", nullptr));
        pbModificarEdo->setText(QApplication::translate("estadosMun", "Modificar", nullptr));
        pbOut2->setText(QApplication::translate("estadosMun", "Salir", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Estados), QApplication::translate("estadosMun", "Estado", nullptr));
        groupBox_2->setTitle(QString());
        gbActivityMpo->setTitle(QApplication::translate("estadosMun", "Actividades", nullptr));
        buscarMunicipioRB->setText(QApplication::translate("estadosMun", "Buscar", nullptr));
        modMunicipioRB->setText(QApplication::translate("estadosMun", "Modificar", nullptr));
        altaMunicipioRB->setText(QApplication::translate("estadosMun", "Alta", nullptr));
        gbAltaMunicipio->setTitle(QApplication::translate("estadosMun", "Altas", nullptr));
        lbMunicipio->setText(QApplication::translate("estadosMun", "Municipio", nullptr));
        pbAgregarMpo->setText(QApplication::translate("estadosMun", "Agregar", nullptr));
        lbIdMunicipio->setText(QApplication::translate("estadosMun", "Id Municipio", nullptr));
        lbIdEstadoMpo->setText(QApplication::translate("estadosMun", "Id Estado", nullptr));
        gbBuscarMpo->setTitle(QApplication::translate("estadosMun", "Buscar", nullptr));
        lbMunicipioBsq->setText(QApplication::translate("estadosMun", "Municipio", nullptr));
        gbModificarMpo->setTitle(QApplication::translate("estadosMun", "Modificar", nullptr));
        lbIdSubModificarMpo->setText(QApplication::translate("estadosMun", "Id Municipio", nullptr));
        pbBuscarMpo->setText(QApplication::translate("estadosMun", "Buscar", nullptr));
        lbSubModificarMpo->setText(QApplication::translate("estadosMun", "Municipio", nullptr));
        lbSubModificarEdoMpo->setText(QApplication::translate("estadosMun", "Id Estado", nullptr));
        pbModificarMpo->setText(QApplication::translate("estadosMun", "Modificar", nullptr));
        pbOut2_2->setText(QApplication::translate("estadosMun", "Salir", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Municipios), QApplication::translate("estadosMun", "Municipio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class estadosMun: public Ui_estadosMun {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESTADOSMUN_H
