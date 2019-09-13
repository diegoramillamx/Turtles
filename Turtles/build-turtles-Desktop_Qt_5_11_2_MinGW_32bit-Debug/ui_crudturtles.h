/********************************************************************************
** Form generated from reading UI file 'crudturtles.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRUDTURTLES_H
#define UI_CRUDTURTLES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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

class Ui_CrudTurtles
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tabInsert;
    QGroupBox *gbPrimaryEdit;
    QLabel *lbTurtleId;
    QLineEdit *lneTurtleId;
    QGroupBox *gbEdit;
    QHBoxLayout *horizontalLayout;
    QLabel *lbName;
    QLineEdit *lneTurtleName;
    QLabel *lbSubspcie;
    QComboBox *cboSubspecie;
    QLabel *lbSensor;
    QComboBox *cboSensor;
    QLabel *lbZona;
    QComboBox *cboZona;
    QPushButton *pbActive;
    QPushButton *pbInsert;
    QPushButton *pbOut;
    QLabel *lbTextInformation;
    QLabel *lbTurtleImage;
    QWidget *tabQuery;
    QGroupBox *gbPrimaryQuery;
    QGroupBox *gbSecundaryQuery;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbQuery;
    QLineEdit *lnQuery;
    QLabel *lbCritery;
    QComboBox *cboCritery;
    QTableView *tvQuery;
    QPushButton *pbOut2;
    QPushButton *pbActiveQuery;
    QLabel *lbImageTF;
    QLabel *lbBackground;

    void setupUi(QMainWindow *CrudTurtles)
    {
        if (CrudTurtles->objectName().isEmpty())
            CrudTurtles->setObjectName(QStringLiteral("CrudTurtles"));
        CrudTurtles->resize(1375, 700);
        CrudTurtles->setMinimumSize(QSize(782, 345));
        CrudTurtles->setMaximumSize(QSize(1375, 700));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/if_Turtle_204384.ico"), QSize(), QIcon::Normal, QIcon::Off);
        CrudTurtles->setWindowIcon(icon);
        CrudTurtles->setStyleSheet(QStringLiteral("background-color: rgb(57, 134, 137)"));
        centralwidget = new QWidget(CrudTurtles);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(60, 40, 1251, 601));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        font.setPointSize(13);
        tabWidget->setFont(font);
        tabWidget->setStyleSheet(QLatin1String("background-color: rgb(206, 206, 206);\n"
"background-color: rgb(231, 231, 231);"));
        tabInsert = new QWidget();
        tabInsert->setObjectName(QStringLiteral("tabInsert"));
        gbPrimaryEdit = new QGroupBox(tabInsert);
        gbPrimaryEdit->setObjectName(QStringLiteral("gbPrimaryEdit"));
        gbPrimaryEdit->setEnabled(false);
        gbPrimaryEdit->setGeometry(QRect(60, 60, 1121, 221));
        lbTurtleId = new QLabel(gbPrimaryEdit);
        lbTurtleId->setObjectName(QStringLiteral("lbTurtleId"));
        lbTurtleId->setGeometry(QRect(740, 20, 111, 20));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        lbTurtleId->setFont(font1);
        lneTurtleId = new QLineEdit(gbPrimaryEdit);
        lneTurtleId->setObjectName(QStringLiteral("lneTurtleId"));
        lneTurtleId->setEnabled(false);
        lneTurtleId->setGeometry(QRect(850, 20, 201, 22));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        font2.setPointSize(11);
        lneTurtleId->setFont(font2);
        gbEdit = new QGroupBox(gbPrimaryEdit);
        gbEdit->setObjectName(QStringLiteral("gbEdit"));
        gbEdit->setGeometry(QRect(70, 60, 981, 61));
        gbEdit->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(gbEdit);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lbName = new QLabel(gbEdit);
        lbName->setObjectName(QStringLiteral("lbName"));
        lbName->setFont(font1);

        horizontalLayout->addWidget(lbName);

        lneTurtleName = new QLineEdit(gbEdit);
        lneTurtleName->setObjectName(QStringLiteral("lneTurtleName"));
        lneTurtleName->setMaximumSize(QSize(350, 16777215));
        QFont font3;
        font3.setPointSize(11);
        lneTurtleName->setFont(font3);
        lneTurtleName->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(lneTurtleName);

        lbSubspcie = new QLabel(gbEdit);
        lbSubspcie->setObjectName(QStringLiteral("lbSubspcie"));
        lbSubspcie->setFont(font1);

        horizontalLayout->addWidget(lbSubspcie);

        cboSubspecie = new QComboBox(gbEdit);
        cboSubspecie->setObjectName(QStringLiteral("cboSubspecie"));
        cboSubspecie->setMinimumSize(QSize(175, 0));
        cboSubspecie->setMaximumSize(QSize(250, 16777215));
        cboSubspecie->setFont(font1);
        cboSubspecie->setCursor(QCursor(Qt::PointingHandCursor));
        cboSubspecie->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(cboSubspecie);

        lbSensor = new QLabel(gbEdit);
        lbSensor->setObjectName(QStringLiteral("lbSensor"));
        lbSensor->setFont(font1);

        horizontalLayout->addWidget(lbSensor);

        cboSensor = new QComboBox(gbEdit);
        cboSensor->setObjectName(QStringLiteral("cboSensor"));
        cboSensor->setMinimumSize(QSize(175, 0));
        cboSensor->setMaximumSize(QSize(250, 16777215));
        cboSensor->setFont(font1);
        cboSensor->setCursor(QCursor(Qt::PointingHandCursor));
        cboSensor->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(cboSensor);

        lbZona = new QLabel(gbPrimaryEdit);
        lbZona->setObjectName(QStringLiteral("lbZona"));
        lbZona->setGeometry(QRect(360, 170, 61, 21));
        lbZona->setFont(font1);
        cboZona = new QComboBox(gbPrimaryEdit);
        cboZona->setObjectName(QStringLiteral("cboZona"));
        cboZona->setGeometry(QRect(430, 170, 250, 21));
        cboZona->setMinimumSize(QSize(175, 0));
        cboZona->setMaximumSize(QSize(250, 16777215));
        QFont font4;
        font4.setFamily(QStringLiteral("Raleway"));
        font4.setBold(true);
        font4.setWeight(75);
        cboZona->setFont(font4);
        cboZona->setCursor(QCursor(Qt::PointingHandCursor));
        cboZona->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pbActive = new QPushButton(tabInsert);
        pbActive->setObjectName(QStringLiteral("pbActive"));
        pbActive->setGeometry(QRect(90, 370, 131, 61));
        pbActive->setFont(font1);
        pbActive->setStyleSheet(QStringLiteral("background-color: rgb(120, 190, 151);"));
        pbInsert = new QPushButton(tabInsert);
        pbInsert->setObjectName(QStringLiteral("pbInsert"));
        pbInsert->setEnabled(false);
        pbInsert->setGeometry(QRect(260, 370, 131, 61));
        pbInsert->setFont(font1);
        pbInsert->setStyleSheet(QStringLiteral("background-color: rgb(120, 190, 151);"));
        pbOut = new QPushButton(tabInsert);
        pbOut->setObjectName(QStringLiteral("pbOut"));
        pbOut->setGeometry(QRect(430, 370, 131, 61));
        pbOut->setFont(font1);
        pbOut->setStyleSheet(QStringLiteral("background-color: rgb(120, 190, 151);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/door_out.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbOut->setIcon(icon1);
        lbTextInformation = new QLabel(tabInsert);
        lbTextInformation->setObjectName(QStringLiteral("lbTextInformation"));
        lbTextInformation->setGeometry(QRect(810, 340, 341, 121));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setWeight(75);
        lbTextInformation->setFont(font5);
        lbTextInformation->setStyleSheet(QStringLiteral("color: rgb(57, 134, 137)"));
        lbTextInformation->setAlignment(Qt::AlignCenter);
        lbTurtleImage = new QLabel(tabInsert);
        lbTurtleImage->setObjectName(QStringLiteral("lbTurtleImage"));
        lbTurtleImage->setGeometry(QRect(630, 320, 171, 161));
        lbTurtleImage->setPixmap(QPixmap(QString::fromUtf8(":/turtlePNG.png")));
        lbTurtleImage->setScaledContents(true);
        tabWidget->addTab(tabInsert, QString());
        tabQuery = new QWidget();
        tabQuery->setObjectName(QStringLiteral("tabQuery"));
        gbPrimaryQuery = new QGroupBox(tabQuery);
        gbPrimaryQuery->setObjectName(QStringLiteral("gbPrimaryQuery"));
        gbPrimaryQuery->setEnabled(false);
        gbPrimaryQuery->setGeometry(QRect(80, 70, 1081, 341));
        gbSecundaryQuery = new QGroupBox(gbPrimaryQuery);
        gbSecundaryQuery->setObjectName(QStringLiteral("gbSecundaryQuery"));
        gbSecundaryQuery->setGeometry(QRect(90, 40, 891, 61));
        horizontalLayout_2 = new QHBoxLayout(gbSecundaryQuery);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbQuery = new QLabel(gbSecundaryQuery);
        lbQuery->setObjectName(QStringLiteral("lbQuery"));
        lbQuery->setFont(font1);

        horizontalLayout_2->addWidget(lbQuery);

        lnQuery = new QLineEdit(gbSecundaryQuery);
        lnQuery->setObjectName(QStringLiteral("lnQuery"));
        lnQuery->setMaximumSize(QSize(350, 16777215));
        lnQuery->setFont(font2);
        lnQuery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(lnQuery);

        lbCritery = new QLabel(gbSecundaryQuery);
        lbCritery->setObjectName(QStringLiteral("lbCritery"));
        lbCritery->setFont(font1);

        horizontalLayout_2->addWidget(lbCritery);

        cboCritery = new QComboBox(gbSecundaryQuery);
        cboCritery->setObjectName(QStringLiteral("cboCritery"));
        cboCritery->setMinimumSize(QSize(250, 22));
        cboCritery->setMaximumSize(QSize(350, 22));
        cboCritery->setFont(font1);
        cboCritery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(cboCritery);

        tvQuery = new QTableView(gbPrimaryQuery);
        tvQuery->setObjectName(QStringLiteral("tvQuery"));
        tvQuery->setGeometry(QRect(90, 130, 891, 161));
        QFont font6;
        font6.setFamily(QStringLiteral("Raleway"));
        font6.setPointSize(8);
        font6.setBold(false);
        font6.setWeight(50);
        tvQuery->setFont(font6);
        pbOut2 = new QPushButton(tabQuery);
        pbOut2->setObjectName(QStringLiteral("pbOut2"));
        pbOut2->setGeometry(QRect(340, 450, 131, 61));
        pbOut2->setFont(font1);
        pbOut2->setStyleSheet(QStringLiteral("background-color: rgb(120, 190, 151);"));
        pbOut2->setIcon(icon1);
        pbActiveQuery = new QPushButton(tabQuery);
        pbActiveQuery->setObjectName(QStringLiteral("pbActiveQuery"));
        pbActiveQuery->setGeometry(QRect(150, 450, 131, 61));
        pbActiveQuery->setFont(font1);
        pbActiveQuery->setStyleSheet(QStringLiteral("background-color: rgb(120, 190, 151);"));
        lbImageTF = new QLabel(tabQuery);
        lbImageTF->setObjectName(QStringLiteral("lbImageTF"));
        lbImageTF->setGeometry(QRect(750, 430, 351, 91));
        lbImageTF->setPixmap(QPixmap(QString::fromUtf8(":/TunderSoft.png")));
        lbImageTF->setScaledContents(true);
        tabWidget->addTab(tabQuery, QString());
        lbBackground = new QLabel(centralwidget);
        lbBackground->setObjectName(QStringLiteral("lbBackground"));
        lbBackground->setGeometry(QRect(0, 0, 1375, 700));
        lbBackground->setScaledContents(true);
        CrudTurtles->setCentralWidget(centralwidget);
        lbBackground->raise();
        tabWidget->raise();

        retranslateUi(CrudTurtles);
        QObject::connect(pbOut, SIGNAL(clicked()), CrudTurtles, SLOT(close()));
        QObject::connect(pbOut2, SIGNAL(clicked()), CrudTurtles, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CrudTurtles);
    } // setupUi

    void retranslateUi(QMainWindow *CrudTurtles)
    {
        CrudTurtles->setWindowTitle(QApplication::translate("CrudTurtles", "Administraci\303\263n de tortugas", nullptr));
        gbPrimaryEdit->setTitle(QString());
        lbTurtleId->setText(QApplication::translate("CrudTurtles", "Id tortuga", nullptr));
        gbEdit->setTitle(QString());
        lbName->setText(QApplication::translate("CrudTurtles", "Nombre", nullptr));
        lbSubspcie->setText(QApplication::translate("CrudTurtles", "Subespecie", nullptr));
        lbSensor->setText(QApplication::translate("CrudTurtles", "Sensor", nullptr));
        lbZona->setText(QApplication::translate("CrudTurtles", "Zona", nullptr));
        pbActive->setText(QApplication::translate("CrudTurtles", "Activar", nullptr));
        pbInsert->setText(QApplication::translate("CrudTurtles", "Agregar", nullptr));
        pbOut->setText(QApplication::translate("CrudTurtles", "Salir", nullptr));
        lbTextInformation->setText(QApplication::translate("CrudTurtles", "Es mucho m\303\241s sencillo llevar el contol\n"
"de las tortugas monitoreadas si se\n"
"les agrega alg\303\272n nombre que las\n"
"identifique del resto.", nullptr));
        lbTurtleImage->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabInsert), QApplication::translate("CrudTurtles", "Agregar tortuga", nullptr));
        gbPrimaryQuery->setTitle(QString());
        gbSecundaryQuery->setTitle(QString());
        lbQuery->setText(QApplication::translate("CrudTurtles", "Busqueda", nullptr));
        lbCritery->setText(QApplication::translate("CrudTurtles", "Criterio", nullptr));
        pbOut2->setText(QApplication::translate("CrudTurtles", "Salir", nullptr));
        pbActiveQuery->setText(QApplication::translate("CrudTurtles", "Activar", nullptr));
        lbImageTF->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tabQuery), QApplication::translate("CrudTurtles", "Buscar tortugas", nullptr));
        lbBackground->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CrudTurtles: public Ui_CrudTurtles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRUDTURTLES_H
