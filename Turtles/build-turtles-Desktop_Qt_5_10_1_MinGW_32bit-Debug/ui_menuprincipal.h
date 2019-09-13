/********************************************************************************
** Form generated from reading UI file 'menuprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPRINCIPAL_H
#define UI_MENUPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuPrincipal
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tabWelcome;
    QLabel *lbTittle;
    QLabel *lbMessage;
    QPushButton *pushButton;
    QLabel *lbBack;
    QWidget *tabAdmistratation;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QPushButton *pbTurtles;
    QPushButton *pbState;
    QPushButton *pbSub;
    QPushButton *pbZone;
    QLabel *lbGif;
    QLabel *lbTitleAdmin;
    QPushButton *pbTurtle;
    QWidget *tabMap;
    QGroupBox *groupBox_2;
    QPushButton *psbMapa;
    QPushButton *pbSensor;
    QLabel *lbGif_2;
    QLabel *lbTitleMap;
    QPushButton *pbTurtle2;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MenuPrincipal)
    {
        if (MenuPrincipal->objectName().isEmpty())
            MenuPrincipal->setObjectName(QStringLiteral("MenuPrincipal"));
        MenuPrincipal->resize(1375, 700);
        MenuPrincipal->setMinimumSize(QSize(900, 550));
        MenuPrincipal->setMaximumSize(QSize(1375, 700));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/if_Turtle_204384.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MenuPrincipal->setWindowIcon(icon);
        MenuPrincipal->setStyleSheet(QStringLiteral("background-color: rgb(57, 134, 137)"));
        centralwidget = new QWidget(MenuPrincipal);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(70, 30, 1240, 600));
        tabWidget->setMinimumSize(QSize(841, 490));
        tabWidget->setMaximumSize(QSize(1240, 600));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        font.setPointSize(13);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QLatin1String("background-color: rgb(206, 206, 206);\n"
"background-color: rgb(255, 170, 255);\n"
"background-color: rgb(231, 231, 231);"));
        tabWelcome = new QWidget();
        tabWelcome->setObjectName(QStringLiteral("tabWelcome"));
        lbTittle = new QLabel(tabWelcome);
        lbTittle->setObjectName(QStringLiteral("lbTittle"));
        lbTittle->setGeometry(QRect(370, 110, 621, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setWeight(75);
        lbTittle->setFont(font1);
        lbTittle->setStyleSheet(QStringLiteral(""));
        lbTittle->setAlignment(Qt::AlignCenter);
        lbMessage = new QLabel(tabWelcome);
        lbMessage->setObjectName(QStringLiteral("lbMessage"));
        lbMessage->setGeometry(QRect(180, 220, 871, 271));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway Medium"));
        font2.setPointSize(15);
        lbMessage->setFont(font2);
        lbMessage->setStyleSheet(QStringLiteral(""));
        lbMessage->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(tabWelcome);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(235, 100, 91, 71));
        pushButton->setStyleSheet(QStringLiteral("background: transparent;"));
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(60, 60));
        lbBack = new QLabel(tabWelcome);
        lbBack->setObjectName(QStringLiteral("lbBack"));
        lbBack->setGeometry(QRect(0, 0, 1241, 571));
        lbBack->setScaledContents(true);
        tabWidget->addTab(tabWelcome, QString());
        lbBack->raise();
        lbTittle->raise();
        lbMessage->raise();
        pushButton->raise();
        tabAdmistratation = new QWidget();
        tabAdmistratation->setObjectName(QStringLiteral("tabAdmistratation"));
        groupBox = new QGroupBox(tabAdmistratation);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(120, 140, 400, 341));
        groupBox->setMinimumSize(QSize(371, 341));
        groupBox->setMaximumSize(QSize(400, 341));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        pbTurtles = new QPushButton(groupBox);
        pbTurtles->setObjectName(QStringLiteral("pbTurtles"));
        pbTurtles->setMinimumSize(QSize(200, 50));
        pbTurtles->setMaximumSize(QSize(500, 300));
        QFont font3;
        font3.setFamily(QStringLiteral("Raleway"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        pbTurtles->setFont(font3);
        pbTurtles->setStyleSheet(QLatin1String(" QPushButton#pbTurtles {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#pbTurtles:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        pbTurtles->setIcon(icon);
        pbTurtles->setIconSize(QSize(50, 50));

        gridLayout_2->addWidget(pbTurtles, 0, 0, 1, 1);

        pbState = new QPushButton(groupBox);
        pbState->setObjectName(QStringLiteral("pbState"));
        pbState->setMinimumSize(QSize(200, 50));
        pbState->setMaximumSize(QSize(400, 300));
        pbState->setFont(font3);
        pbState->setStyleSheet(QLatin1String(" QPushButton#pbState {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#pbState:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/world.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbState->setIcon(icon1);
        pbState->setIconSize(QSize(50, 50));

        gridLayout_2->addWidget(pbState, 3, 0, 1, 1);

        pbSub = new QPushButton(groupBox);
        pbSub->setObjectName(QStringLiteral("pbSub"));
        pbSub->setMinimumSize(QSize(200, 50));
        pbSub->setMaximumSize(QSize(400, 300));
        pbSub->setFont(font3);
        pbSub->setStyleSheet(QLatin1String(" QPushButton#pbSub {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#pbSub:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        pbSub->setIcon(icon);
        pbSub->setIconSize(QSize(50, 50));

        gridLayout_2->addWidget(pbSub, 2, 0, 1, 1);

        pbZone = new QPushButton(groupBox);
        pbZone->setObjectName(QStringLiteral("pbZone"));
        pbZone->setMinimumSize(QSize(200, 50));
        pbZone->setMaximumSize(QSize(400, 300));
        pbZone->setFont(font3);
        pbZone->setStyleSheet(QLatin1String(" QPushButton#pbZone {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#pbZone:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/379538.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbZone->setIcon(icon2);
        pbZone->setIconSize(QSize(50, 50));

        gridLayout_2->addWidget(pbZone, 1, 0, 1, 1);

        lbGif = new QLabel(tabAdmistratation);
        lbGif->setObjectName(QStringLiteral("lbGif"));
        lbGif->setGeometry(QRect(650, 140, 450, 331));
        lbGif->setMinimumSize(QSize(371, 300));
        lbGif->setMaximumSize(QSize(450, 370));
        lbTitleAdmin = new QLabel(tabAdmistratation);
        lbTitleAdmin->setObjectName(QStringLiteral("lbTitleAdmin"));
        lbTitleAdmin->setGeometry(QRect(440, 50, 461, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Raleway"));
        font4.setPointSize(17);
        font4.setBold(true);
        font4.setWeight(75);
        lbTitleAdmin->setFont(font4);
        lbTitleAdmin->setAlignment(Qt::AlignCenter);
        pbTurtle = new QPushButton(tabAdmistratation);
        pbTurtle->setObjectName(QStringLiteral("pbTurtle"));
        pbTurtle->setGeometry(QRect(290, 30, 91, 71));
        pbTurtle->setStyleSheet(QStringLiteral("background: transparent;"));
        pbTurtle->setIcon(icon);
        pbTurtle->setIconSize(QSize(60, 60));
        tabWidget->addTab(tabAdmistratation, QString());
        tabMap = new QWidget();
        tabMap->setObjectName(QStringLiteral("tabMap"));
        groupBox_2 = new QGroupBox(tabMap);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(130, 160, 400, 330));
        groupBox_2->setMinimumSize(QSize(371, 330));
        groupBox_2->setMaximumSize(QSize(400, 330));
        psbMapa = new QPushButton(groupBox_2);
        psbMapa->setObjectName(QStringLiteral("psbMapa"));
        psbMapa->setGeometry(QRect(10, 190, 350, 75));
        psbMapa->setMinimumSize(QSize(350, 75));
        psbMapa->setMaximumSize(QSize(350, 75));
        psbMapa->setFont(font3);
        psbMapa->setStyleSheet(QLatin1String(" QPushButton#psbMapa {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#psbMapa:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/map-map-marker-icon_34394.ico"), QSize(), QIcon::Normal, QIcon::Off);
        psbMapa->setIcon(icon3);
        psbMapa->setIconSize(QSize(60, 50));
        pbSensor = new QPushButton(groupBox_2);
        pbSensor->setObjectName(QStringLiteral("pbSensor"));
        pbSensor->setGeometry(QRect(10, 70, 350, 75));
        pbSensor->setMinimumSize(QSize(350, 75));
        pbSensor->setMaximumSize(QSize(350, 75));
        pbSensor->setFont(font3);
        pbSensor->setStyleSheet(QLatin1String(" QPushButton#pbSensor {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#pbSensor:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Images/381031-200.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbSensor->setIcon(icon4);
        pbSensor->setIconSize(QSize(60, 60));
        lbGif_2 = new QLabel(tabMap);
        lbGif_2->setObjectName(QStringLiteral("lbGif_2"));
        lbGif_2->setEnabled(true);
        lbGif_2->setGeometry(QRect(670, 180, 440, 300));
        lbGif_2->setMinimumSize(QSize(440, 300));
        lbGif_2->setMaximumSize(QSize(440, 300));
        lbGif_2->setScaledContents(true);
        lbTitleMap = new QLabel(tabMap);
        lbTitleMap->setObjectName(QStringLiteral("lbTitleMap"));
        lbTitleMap->setGeometry(QRect(380, 60, 611, 31));
        lbTitleMap->setFont(font4);
        lbTitleMap->setAlignment(Qt::AlignCenter);
        pbTurtle2 = new QPushButton(tabMap);
        pbTurtle2->setObjectName(QStringLiteral("pbTurtle2"));
        pbTurtle2->setGeometry(QRect(270, 40, 91, 71));
        pbTurtle2->setStyleSheet(QStringLiteral("background: transparent;"));
        pbTurtle2->setIcon(icon);
        pbTurtle2->setIconSize(QSize(60, 60));
        tabWidget->addTab(tabMap, QString());
        MenuPrincipal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MenuPrincipal);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1375, 21));
        MenuPrincipal->setMenuBar(menubar);

        retranslateUi(MenuPrincipal);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MenuPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *MenuPrincipal)
    {
        MenuPrincipal->setWindowTitle(QApplication::translate("MenuPrincipal", "Monitoreo de tortugas v1.0", nullptr));
        lbTittle->setText(QApplication::translate("MenuPrincipal", "\302\241Turtles finder te da la bienvenida!", nullptr));
        lbMessage->setText(QApplication::translate("MenuPrincipal", "Este proyecto fue hecho y mayormente pensado para ayudar a una de las especies en mayor\n"
"peligro de extinci\303\263n:  Las tortugas marinas.\n"
"\n"
"Nuestro prop\303\263sito es llevar a cabo un rastreo de las tortugas para poder conocer a mayor\n"
"profundidad cuales son sus zonas de alimentaci\303\263n, su ruta de migraci\303\263n, rutas de\n"
"caza de las tortugas, etc.\n"
"\n"
"En la parte de abajo se colocaran hiperv\303\255nculos de ayuda para mejorar la experencia del\n"
"usuario dentro del sistema.", nullptr));
        pushButton->setText(QString());
        lbBack->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabWelcome), QApplication::translate("MenuPrincipal", "Bienvenida", nullptr));
        groupBox->setTitle(QString());
        pbTurtles->setText(QApplication::translate("MenuPrincipal", "Administrar tortugas", nullptr));
        pbState->setText(QApplication::translate("MenuPrincipal", " Agregar estados y municipios", nullptr));
        pbSub->setText(QApplication::translate("MenuPrincipal", "Administrar subespecies", nullptr));
        pbZone->setText(QApplication::translate("MenuPrincipal", "   Administrar zonas", nullptr));
        lbGif->setText(QString());
        lbTitleAdmin->setText(QApplication::translate("MenuPrincipal", "Administraci\303\263n de recursos", nullptr));
        pbTurtle->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabAdmistratation), QApplication::translate("MenuPrincipal", "Administraci\303\263n", nullptr));
        groupBox_2->setTitle(QString());
        psbMapa->setText(QApplication::translate("MenuPrincipal", "  Mapa de ubicaciones", nullptr));
        pbSensor->setText(QApplication::translate("MenuPrincipal", "Sensor de tortugas", nullptr));
        lbGif_2->setText(QString());
        lbTitleMap->setText(QApplication::translate("MenuPrincipal", "Manejo de sensores y visualizaci\303\263n de mapa", nullptr));
        pbTurtle2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabMap), QApplication::translate("MenuPrincipal", "Mapa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuPrincipal: public Ui_MenuPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPRINCIPAL_H
