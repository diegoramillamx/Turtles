/********************************************************************************
** Form generated from reading UI file 'crudzone.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRUDZONE_H
#define UI_CRUDZONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CrudZone
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tabInsertZone;
    QGroupBox *gbPrimary;
    QLineEdit *lneIdZona;
    QLabel *lbName;
    QLabel *lbState;
    QLineEdit *lneName;
    QComboBox *cboState;
    QLabel *lbMunicipio;
    QComboBox *cboMunicipio;
    QLabel *label;
    QPushButton *pbOut;
    QPushButton *pbActive;
    QPushButton *pbInsert;
    QLabel *lbImage;
    QLabel *label_2;
    QWidget *tabQueryZone;
    QPushButton *pbActiveQuery;
    QGroupBox *gbPrimaryQuery;
    QGroupBox *gbSecundaryQuery;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbQuery;
    QLineEdit *lnQuery;
    QLabel *lbCritery;
    QComboBox *cboCritery;
    QTableView *tvQuery;
    QPushButton *pbOut2;
    QLabel *lbTS;
    QLabel *lbBackGif;

    void setupUi(QMainWindow *CrudZone)
    {
        if (CrudZone->objectName().isEmpty())
            CrudZone->setObjectName(QStringLiteral("CrudZone"));
        CrudZone->resize(1375, 700);
        CrudZone->setMinimumSize(QSize(780, 355));
        CrudZone->setMaximumSize(QSize(1375, 700));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/if_Turtle_204384.ico"), QSize(), QIcon::Normal, QIcon::Off);
        CrudZone->setWindowIcon(icon);
        CrudZone->setStyleSheet(QStringLiteral("background-color: rgb(57, 134, 137)"));
        centralwidget = new QWidget(CrudZone);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(60, 40, 1250, 600));
        tabWidget->setMaximumSize(QSize(1250, 600));
        QFont font;
        font.setPointSize(13);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QLatin1String("background-color: rgb(206, 206, 206);\n"
"background-color: rgb(231, 231, 231);"));
        tabInsertZone = new QWidget();
        tabInsertZone->setObjectName(QStringLiteral("tabInsertZone"));
        gbPrimary = new QGroupBox(tabInsertZone);
        gbPrimary->setObjectName(QStringLiteral("gbPrimary"));
        gbPrimary->setEnabled(false);
        gbPrimary->setGeometry(QRect(70, 130, 1101, 101));
        lneIdZona = new QLineEdit(gbPrimary);
        lneIdZona->setObjectName(QStringLiteral("lneIdZona"));
        lneIdZona->setGeometry(QRect(870, 10, 141, 21));
        lneIdZona->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbName = new QLabel(gbPrimary);
        lbName->setObjectName(QStringLiteral("lbName"));
        lbName->setGeometry(QRect(30, 60, 61, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        lbName->setFont(font1);
        lbState = new QLabel(gbPrimary);
        lbState->setObjectName(QStringLiteral("lbState"));
        lbState->setGeometry(QRect(360, 60, 51, 21));
        lbState->setFont(font1);
        lneName = new QLineEdit(gbPrimary);
        lneName->setObjectName(QStringLiteral("lneName"));
        lneName->setGeometry(QRect(100, 60, 211, 22));
        lneName->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        cboState = new QComboBox(gbPrimary);
        cboState->setObjectName(QStringLiteral("cboState"));
        cboState->setGeometry(QRect(420, 60, 231, 22));
        cboState->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lbMunicipio = new QLabel(gbPrimary);
        lbMunicipio->setObjectName(QStringLiteral("lbMunicipio"));
        lbMunicipio->setGeometry(QRect(700, 60, 71, 21));
        lbMunicipio->setFont(font1);
        cboMunicipio = new QComboBox(gbPrimary);
        cboMunicipio->setObjectName(QStringLiteral("cboMunicipio"));
        cboMunicipio->setGeometry(QRect(770, 61, 241, 21));
        cboMunicipio->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label = new QLabel(gbPrimary);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(800, 10, 61, 21));
        label->setFont(font1);
        pbOut = new QPushButton(tabInsertZone);
        pbOut->setObjectName(QStringLiteral("pbOut"));
        pbOut->setGeometry(QRect(420, 360, 131, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        pbOut->setFont(font2);
        pbOut->setStyleSheet(QStringLiteral("background-color: rgb(120, 190, 151);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/door_out.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbOut->setIcon(icon1);
        pbActive = new QPushButton(tabInsertZone);
        pbActive->setObjectName(QStringLiteral("pbActive"));
        pbActive->setGeometry(QRect(80, 360, 131, 61));
        pbActive->setFont(font2);
        pbActive->setStyleSheet(QStringLiteral("background-color: rgb(120, 190, 151);"));
        pbInsert = new QPushButton(tabInsertZone);
        pbInsert->setObjectName(QStringLiteral("pbInsert"));
        pbInsert->setEnabled(false);
        pbInsert->setGeometry(QRect(250, 360, 131, 61));
        pbInsert->setFont(font2);
        pbInsert->setStyleSheet(QStringLiteral("background-color: rgb(120, 190, 151);"));
        lbImage = new QLabel(tabInsertZone);
        lbImage->setObjectName(QStringLiteral("lbImage"));
        lbImage->setGeometry(QRect(630, 280, 311, 211));
        lbImage->setPixmap(QPixmap(QString::fromUtf8(":/littleleatherbackturtlesrogerleguen.jpg")));
        lbImage->setScaledContents(true);
        label_2 = new QLabel(tabInsertZone);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(960, 300, 201, 171));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        label_2->setFont(font3);
        label_2->setStyleSheet(QStringLiteral("color: rgb(167, 135, 100);"));
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tabInsertZone, QString());
        tabQueryZone = new QWidget();
        tabQueryZone->setObjectName(QStringLiteral("tabQueryZone"));
        pbActiveQuery = new QPushButton(tabQueryZone);
        pbActiveQuery->setObjectName(QStringLiteral("pbActiveQuery"));
        pbActiveQuery->setGeometry(QRect(220, 460, 131, 61));
        pbActiveQuery->setFont(font2);
        pbActiveQuery->setStyleSheet(QStringLiteral("background-color: rgb(120, 190, 151);"));
        gbPrimaryQuery = new QGroupBox(tabQueryZone);
        gbPrimaryQuery->setObjectName(QStringLiteral("gbPrimaryQuery"));
        gbPrimaryQuery->setEnabled(false);
        gbPrimaryQuery->setGeometry(QRect(80, 80, 1071, 341));
        gbSecundaryQuery = new QGroupBox(gbPrimaryQuery);
        gbSecundaryQuery->setObjectName(QStringLiteral("gbSecundaryQuery"));
        gbSecundaryQuery->setGeometry(QRect(70, 50, 931, 51));
        horizontalLayout_2 = new QHBoxLayout(gbSecundaryQuery);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbQuery = new QLabel(gbSecundaryQuery);
        lbQuery->setObjectName(QStringLiteral("lbQuery"));
        lbQuery->setFont(font2);

        horizontalLayout_2->addWidget(lbQuery);

        lnQuery = new QLineEdit(gbSecundaryQuery);
        lnQuery->setObjectName(QStringLiteral("lnQuery"));
        lnQuery->setMaximumSize(QSize(300, 16777215));
        QFont font4;
        font4.setFamily(QStringLiteral("Raleway"));
        lnQuery->setFont(font4);
        lnQuery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(lnQuery);

        lbCritery = new QLabel(gbSecundaryQuery);
        lbCritery->setObjectName(QStringLiteral("lbCritery"));
        lbCritery->setFont(font2);

        horizontalLayout_2->addWidget(lbCritery);

        cboCritery = new QComboBox(gbSecundaryQuery);
        cboCritery->setObjectName(QStringLiteral("cboCritery"));
        cboCritery->setMinimumSize(QSize(250, 22));
        cboCritery->setMaximumSize(QSize(300, 22));
        QFont font5;
        font5.setFamily(QStringLiteral("Raleway"));
        font5.setBold(true);
        font5.setWeight(75);
        cboCritery->setFont(font5);
        cboCritery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(cboCritery);

        tvQuery = new QTableView(gbPrimaryQuery);
        tvQuery->setObjectName(QStringLiteral("tvQuery"));
        tvQuery->setGeometry(QRect(70, 150, 931, 111));
        QFont font6;
        font6.setFamily(QStringLiteral("Raleway"));
        font6.setPointSize(8);
        font6.setBold(false);
        font6.setWeight(50);
        tvQuery->setFont(font6);
        pbOut2 = new QPushButton(tabQueryZone);
        pbOut2->setObjectName(QStringLiteral("pbOut2"));
        pbOut2->setGeometry(QRect(410, 460, 131, 61));
        pbOut2->setFont(font2);
        pbOut2->setStyleSheet(QStringLiteral("background-color: rgb(120, 190, 151);"));
        pbOut2->setIcon(icon1);
        lbTS = new QLabel(tabQueryZone);
        lbTS->setObjectName(QStringLiteral("lbTS"));
        lbTS->setGeometry(QRect(780, 440, 311, 91));
        lbTS->setPixmap(QPixmap(QString::fromUtf8(":/TunderSoft.png")));
        lbTS->setScaledContents(true);
        tabWidget->addTab(tabQueryZone, QString());
        lbBackGif = new QLabel(centralwidget);
        lbBackGif->setObjectName(QStringLiteral("lbBackGif"));
        lbBackGif->setGeometry(QRect(0, 0, 1375, 700));
        lbBackGif->setScaledContents(true);
        CrudZone->setCentralWidget(centralwidget);
        lbBackGif->raise();
        tabWidget->raise();

        retranslateUi(CrudZone);
        QObject::connect(pbOut, SIGNAL(clicked()), CrudZone, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CrudZone);
    } // setupUi

    void retranslateUi(QMainWindow *CrudZone)
    {
        CrudZone->setWindowTitle(QApplication::translate("CrudZone", "Administraci\303\263n de zonas", nullptr));
        gbPrimary->setTitle(QString());
        lbName->setText(QApplication::translate("CrudZone", "Nombre", nullptr));
        lbState->setText(QApplication::translate("CrudZone", "Estado", nullptr));
        lbMunicipio->setText(QApplication::translate("CrudZone", "Municipio", nullptr));
        label->setText(QApplication::translate("CrudZone", "Id Zona", nullptr));
        pbOut->setText(QApplication::translate("CrudZone", "Salir", nullptr));
        pbActive->setText(QApplication::translate("CrudZone", "Activar", nullptr));
        pbInsert->setText(QApplication::translate("CrudZone", "Agregar", nullptr));
        lbImage->setText(QString());
        label_2->setText(QApplication::translate("CrudZone", "Es importante llevar a cabo\n"
"un control sobre las zonas\n"
"donde las tortugas abundan\n"
"para as\303\255 tener presente\n"
"que estas deber\303\241n ser\n"
"monitoreadas con mayor\n"
"frecuencia.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabInsertZone), QApplication::translate("CrudZone", "Alta de zonas", nullptr));
        pbActiveQuery->setText(QApplication::translate("CrudZone", "Activar", nullptr));
        gbPrimaryQuery->setTitle(QString());
        gbSecundaryQuery->setTitle(QString());
        lbQuery->setText(QApplication::translate("CrudZone", "Busqueda", nullptr));
        lbCritery->setText(QApplication::translate("CrudZone", "Criterio", nullptr));
        pbOut2->setText(QApplication::translate("CrudZone", "Salir", nullptr));
        lbTS->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabQueryZone), QApplication::translate("CrudZone", "Busqueda de zonas", nullptr));
        lbBackGif->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CrudZone: public Ui_CrudZone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRUDZONE_H
