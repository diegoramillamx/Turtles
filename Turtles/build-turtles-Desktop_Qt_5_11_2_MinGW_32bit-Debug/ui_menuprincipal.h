/********************************************************************************
** Form generated from reading UI file 'menuprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPRINCIPAL_H
#define UI_MENUPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
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
    QGridLayout *gridLayout;
    QPushButton *pbSensor;
    QPushButton *psbMapa;
    QPushButton *psbExtrapolacion;
    QLabel *lbGif_2;
    QLabel *lbTitleMap;
    QPushButton *pbTurtle2;
    QWidget *tab;
    QPushButton *pbStadistics;
    QPushButton *pbReport;
    QPushButton *pbTurtle2_3;
    QLabel *lbTitleMap_3;
    QLabel *lbGif_5;
    QPushButton *pbReportView;

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
        lbTittle->setGeometry(QRect(300, 110, 721, 41));
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
        lbMessage->setGeometry(QRect(60, 220, 1151, 271));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway Medium"));
        font2.setPointSize(15);
        lbMessage->setFont(font2);
        lbMessage->setStyleSheet(QStringLiteral(""));
        lbMessage->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(tabWelcome);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 100, 91, 71));
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
        groupBox_2->setGeometry(QRect(130, 160, 376, 330));
        groupBox_2->setMinimumSize(QSize(371, 330));
        groupBox_2->setMaximumSize(QSize(400, 330));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pbSensor = new QPushButton(groupBox_2);
        pbSensor->setObjectName(QStringLiteral("pbSensor"));
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
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/381031-200.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbSensor->setIcon(icon3);
        pbSensor->setIconSize(QSize(60, 60));

        gridLayout->addWidget(pbSensor, 0, 0, 1, 2);

        psbMapa = new QPushButton(groupBox_2);
        psbMapa->setObjectName(QStringLiteral("psbMapa"));
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
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Images/map-map-marker-icon_34394.ico"), QSize(), QIcon::Normal, QIcon::Off);
        psbMapa->setIcon(icon4);
        psbMapa->setIconSize(QSize(60, 50));

        gridLayout->addWidget(psbMapa, 1, 0, 1, 1);

        psbExtrapolacion = new QPushButton(groupBox_2);
        psbExtrapolacion->setObjectName(QStringLiteral("psbExtrapolacion"));
        psbExtrapolacion->setMinimumSize(QSize(350, 75));
        psbExtrapolacion->setMaximumSize(QSize(350, 75));
        psbExtrapolacion->setFont(font3);
        psbExtrapolacion->setStyleSheet(QLatin1String(" QPushButton#psbExtrapolacion {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#psbExtrapolacion:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Images/Turtli.png"), QSize(), QIcon::Normal, QIcon::Off);
        psbExtrapolacion->setIcon(icon5);
        psbExtrapolacion->setIconSize(QSize(60, 50));

        gridLayout->addWidget(psbExtrapolacion, 2, 0, 1, 1);

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
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        pbStadistics = new QPushButton(tab);
        pbStadistics->setObjectName(QStringLiteral("pbStadistics"));
        pbStadistics->setGeometry(QRect(120, 180, 350, 75));
        pbStadistics->setMinimumSize(QSize(350, 75));
        pbStadistics->setMaximumSize(QSize(350, 75));
        pbStadistics->setFont(font3);
        pbStadistics->setStyleSheet(QLatin1String(" QPushButton#pbStadistics {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#pbStadistics:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/stats_icon-icons.com_60590_60590.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbStadistics->setIcon(icon6);
        pbStadistics->setIconSize(QSize(60, 60));
        pbReport = new QPushButton(tab);
        pbReport->setObjectName(QStringLiteral("pbReport"));
        pbReport->setGeometry(QRect(120, 280, 350, 75));
        pbReport->setMinimumSize(QSize(350, 75));
        pbReport->setMaximumSize(QSize(350, 75));
        pbReport->setFont(font3);
        pbReport->setStyleSheet(QLatin1String(" QPushButton#pbReport {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#pbReport:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/report.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbReport->setIcon(icon7);
        pbReport->setIconSize(QSize(60, 60));
        pbTurtle2_3 = new QPushButton(tab);
        pbTurtle2_3->setObjectName(QStringLiteral("pbTurtle2_3"));
        pbTurtle2_3->setGeometry(QRect(250, 40, 91, 71));
        pbTurtle2_3->setStyleSheet(QStringLiteral("background: transparent;"));
        pbTurtle2_3->setIcon(icon);
        pbTurtle2_3->setIconSize(QSize(60, 60));
        lbTitleMap_3 = new QLabel(tab);
        lbTitleMap_3->setObjectName(QStringLiteral("lbTitleMap_3"));
        lbTitleMap_3->setGeometry(QRect(370, 60, 611, 31));
        lbTitleMap_3->setFont(font4);
        lbTitleMap_3->setAlignment(Qt::AlignCenter);
        lbGif_5 = new QLabel(tab);
        lbGif_5->setObjectName(QStringLiteral("lbGif_5"));
        lbGif_5->setEnabled(true);
        lbGif_5->setGeometry(QRect(630, 160, 440, 300));
        lbGif_5->setMinimumSize(QSize(440, 300));
        lbGif_5->setMaximumSize(QSize(440, 300));
        lbGif_5->setScaledContents(true);
        pbReportView = new QPushButton(tab);
        pbReportView->setObjectName(QStringLiteral("pbReportView"));
        pbReportView->setGeometry(QRect(120, 380, 350, 75));
        pbReportView->setMinimumSize(QSize(350, 75));
        pbReportView->setMaximumSize(QSize(350, 75));
        pbReportView->setFont(font3);
        pbReportView->setStyleSheet(QLatin1String(" QPushButton#pbReportView {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#pbReportView:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/report_edit.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbReportView->setIcon(icon8);
        pbReportView->setIconSize(QSize(60, 60));
        tabWidget->addTab(tab, QString());
        MenuPrincipal->setCentralWidget(centralwidget);

        retranslateUi(MenuPrincipal);

        tabWidget->setCurrentIndex(2);


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
        pbSensor->setText(QApplication::translate("MenuPrincipal", "Sensor de tortugas", nullptr));
        psbMapa->setText(QApplication::translate("MenuPrincipal", "  Mapa de ubicaciones", nullptr));
        psbExtrapolacion->setText(QApplication::translate("MenuPrincipal", "Extrapolaci\303\263n de avance", nullptr));
        lbGif_2->setText(QString());
        lbTitleMap->setText(QApplication::translate("MenuPrincipal", "Manejo de sensores y visualizaci\303\263n de mapa", nullptr));
        pbTurtle2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabMap), QApplication::translate("MenuPrincipal", "Mapa", nullptr));
        pbStadistics->setText(QApplication::translate("MenuPrincipal", "Estad\303\255sticas de la tortuga", nullptr));
        pbReport->setText(QApplication::translate("MenuPrincipal", "   Reporte de la tortuga", nullptr));
        pbTurtle2_3->setText(QString());
        lbTitleMap_3->setText(QApplication::translate("MenuPrincipal", "Estad\303\255sticas y reportes de las tortugas", nullptr));
        lbGif_5->setText(QString());
        pbReportView->setText(QApplication::translate("MenuPrincipal", "  Ver mis reportes", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MenuPrincipal", "Estad\303\255sticas y reportes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuPrincipal: public Ui_MenuPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPRINCIPAL_H
