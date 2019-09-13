/********************************************************************************
** Form generated from reading UI file 'crudsubespecie.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRUDSUBESPECIE_H
#define UI_CRUDSUBESPECIE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CrudSubespecie
{
public:
    QWidget *centralwidget;
    QGroupBox *gbMain;
    QGroupBox *gbActivity;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbAltas;
    QRadioButton *rbBusqueda;
    QRadioButton *rbModificar;
    QGroupBox *gbAltas;
    QLabel *lbSubespecie;
    QLabel *lbIdSubespecie;
    QLineEdit *lneIdSubespcie;
    QLineEdit *lneSubespecie;
    QPushButton *pbAgregar;
    QGroupBox *gbBuscar;
    QLabel *lbSubQuery;
    QLineEdit *lneQuery;
    QTableView *tvQuery;
    QGroupBox *gbModificar;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbIdSubModificar;
    QLineEdit *lneIdSubModificar;
    QPushButton *pbBuscar;
    QLabel *lbSubModificar;
    QLineEdit *lneSubModificar;
    QPushButton *pbModificar;
    QLabel *label;
    QPushButton *pbOut2;
    QLabel *lbBackground;

    void setupUi(QMainWindow *CrudSubespecie)
    {
        if (CrudSubespecie->objectName().isEmpty())
            CrudSubespecie->setObjectName(QStringLiteral("CrudSubespecie"));
        CrudSubespecie->resize(1375, 700);
        CrudSubespecie->setMinimumSize(QSize(793, 405));
        CrudSubespecie->setMaximumSize(QSize(1375, 700));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/if_Turtle_204384.ico"), QSize(), QIcon::Normal, QIcon::Off);
        CrudSubespecie->setWindowIcon(icon);
        CrudSubespecie->setStyleSheet(QStringLiteral("background-color: rgb(57, 134, 137)"));
        centralwidget = new QWidget(CrudSubespecie);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gbMain = new QGroupBox(centralwidget);
        gbMain->setObjectName(QStringLiteral("gbMain"));
        gbMain->setGeometry(QRect(60, 50, 1250, 600));
        gbMain->setMaximumSize(QSize(1250, 600));
        gbMain->setStyleSheet(QLatin1String("background-color: rgb(206, 206, 206);\n"
"background-color: rgb(231, 231, 231);"));
        gbActivity = new QGroupBox(gbMain);
        gbActivity->setObjectName(QStringLiteral("gbActivity"));
        gbActivity->setGeometry(QRect(100, 69, 711, 81));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        font.setPointSize(13);
        gbActivity->setFont(font);
        horizontalLayout = new QHBoxLayout(gbActivity);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        rbAltas = new QRadioButton(gbActivity);
        rbAltas->setObjectName(QStringLiteral("rbAltas"));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        rbAltas->setFont(font1);
        rbAltas->setChecked(true);

        horizontalLayout->addWidget(rbAltas);

        rbBusqueda = new QRadioButton(gbActivity);
        rbBusqueda->setObjectName(QStringLiteral("rbBusqueda"));
        rbBusqueda->setFont(font1);

        horizontalLayout->addWidget(rbBusqueda);

        rbModificar = new QRadioButton(gbActivity);
        rbModificar->setObjectName(QStringLiteral("rbModificar"));
        rbModificar->setFont(font1);

        horizontalLayout->addWidget(rbModificar);

        gbAltas = new QGroupBox(gbMain);
        gbAltas->setObjectName(QStringLiteral("gbAltas"));
        gbAltas->setEnabled(false);
        gbAltas->setGeometry(QRect(100, 180, 271, 251));
        gbAltas->setFont(font);
        lbSubespecie = new QLabel(gbAltas);
        lbSubespecie->setObjectName(QStringLiteral("lbSubespecie"));
        lbSubespecie->setGeometry(QRect(20, 110, 101, 21));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        lbSubespecie->setFont(font2);
        lbIdSubespecie = new QLabel(gbAltas);
        lbIdSubespecie->setObjectName(QStringLiteral("lbIdSubespecie"));
        lbIdSubespecie->setGeometry(QRect(20, 60, 111, 21));
        lbIdSubespecie->setFont(font2);
        lneIdSubespcie = new QLineEdit(gbAltas);
        lneIdSubespcie->setObjectName(QStringLiteral("lneIdSubespcie"));
        lneIdSubespcie->setEnabled(false);
        lneIdSubespcie->setGeometry(QRect(140, 60, 121, 22));
        QFont font3;
        font3.setFamily(QStringLiteral("Raleway"));
        font3.setPointSize(11);
        lneIdSubespcie->setFont(font3);
        lneIdSubespcie->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneIdSubespcie->setAlignment(Qt::AlignCenter);
        lneSubespecie = new QLineEdit(gbAltas);
        lneSubespecie->setObjectName(QStringLiteral("lneSubespecie"));
        lneSubespecie->setGeometry(QRect(129, 110, 131, 22));
        lneSubespecie->setFont(font3);
        lneSubespecie->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pbAgregar = new QPushButton(gbAltas);
        pbAgregar->setObjectName(QStringLiteral("pbAgregar"));
        pbAgregar->setGeometry(QRect(30, 150, 211, 41));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        pbAgregar->setFont(font4);
        pbAgregar->setStyleSheet(QStringLiteral("background-color: rgb(120, 190, 151);"));
        gbBuscar = new QGroupBox(gbMain);
        gbBuscar->setObjectName(QStringLiteral("gbBuscar"));
        gbBuscar->setEnabled(false);
        gbBuscar->setGeometry(QRect(400, 180, 741, 251));
        gbBuscar->setFont(font);
        lbSubQuery = new QLabel(gbBuscar);
        lbSubQuery->setObjectName(QStringLiteral("lbSubQuery"));
        lbSubQuery->setGeometry(QRect(40, 50, 101, 21));
        lbSubQuery->setFont(font2);
        lneQuery = new QLineEdit(gbBuscar);
        lneQuery->setObjectName(QStringLiteral("lneQuery"));
        lneQuery->setGeometry(QRect(150, 50, 551, 22));
        lneQuery->setFont(font3);
        lneQuery->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        tvQuery = new QTableView(gbBuscar);
        tvQuery->setObjectName(QStringLiteral("tvQuery"));
        tvQuery->setGeometry(QRect(40, 90, 661, 131));
        gbModificar = new QGroupBox(gbMain);
        gbModificar->setObjectName(QStringLiteral("gbModificar"));
        gbModificar->setEnabled(false);
        gbModificar->setGeometry(QRect(100, 460, 1041, 101));
        gbModificar->setFont(font);
        horizontalLayout_2 = new QHBoxLayout(gbModificar);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lbIdSubModificar = new QLabel(gbModificar);
        lbIdSubModificar->setObjectName(QStringLiteral("lbIdSubModificar"));
        lbIdSubModificar->setFont(font2);

        horizontalLayout_2->addWidget(lbIdSubModificar);

        lneIdSubModificar = new QLineEdit(gbModificar);
        lneIdSubModificar->setObjectName(QStringLiteral("lneIdSubModificar"));
        lneIdSubModificar->setFont(font3);
        lneIdSubModificar->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(lneIdSubModificar);

        pbBuscar = new QPushButton(gbModificar);
        pbBuscar->setObjectName(QStringLiteral("pbBuscar"));
        pbBuscar->setFont(font2);
        pbBuscar->setStyleSheet(QStringLiteral("background-color: rgb(120, 190, 151);"));

        horizontalLayout_2->addWidget(pbBuscar);

        lbSubModificar = new QLabel(gbModificar);
        lbSubModificar->setObjectName(QStringLiteral("lbSubModificar"));
        lbSubModificar->setFont(font2);

        horizontalLayout_2->addWidget(lbSubModificar);

        lneSubModificar = new QLineEdit(gbModificar);
        lneSubModificar->setObjectName(QStringLiteral("lneSubModificar"));
        lneSubModificar->setFont(font3);
        lneSubModificar->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(lneSubModificar);

        pbModificar = new QPushButton(gbModificar);
        pbModificar->setObjectName(QStringLiteral("pbModificar"));
        pbModificar->setFont(font2);
        pbModificar->setStyleSheet(QLatin1String("\n"
"background-color: rgb(120, 190, 151);"));

        horizontalLayout_2->addWidget(pbModificar);

        label = new QLabel(gbMain);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(1000, 30, 131, 131));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/tuIcone.png")));
        label->setScaledContents(true);
        pbOut2 = new QPushButton(gbMain);
        pbOut2->setObjectName(QStringLiteral("pbOut2"));
        pbOut2->setGeometry(QRect(840, 80, 131, 61));
        pbOut2->setFont(font2);
        pbOut2->setStyleSheet(QStringLiteral("background-color: rgb(120, 190, 151);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/door_out.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbOut2->setIcon(icon1);
        lbBackground = new QLabel(centralwidget);
        lbBackground->setObjectName(QStringLiteral("lbBackground"));
        lbBackground->setGeometry(QRect(0, 0, 1375, 700));
        lbBackground->setScaledContents(true);
        CrudSubespecie->setCentralWidget(centralwidget);
        lbBackground->raise();
        gbMain->raise();

        retranslateUi(CrudSubespecie);
        QObject::connect(pbOut2, SIGNAL(clicked()), CrudSubespecie, SLOT(close()));

        QMetaObject::connectSlotsByName(CrudSubespecie);
    } // setupUi

    void retranslateUi(QMainWindow *CrudSubespecie)
    {
        CrudSubespecie->setWindowTitle(QApplication::translate("CrudSubespecie", "Administraci\303\263n de subespecies", nullptr));
        gbMain->setTitle(QString());
        gbActivity->setTitle(QApplication::translate("CrudSubespecie", "Control de subespecies", nullptr));
        rbAltas->setText(QApplication::translate("CrudSubespecie", "Altas", nullptr));
        rbBusqueda->setText(QApplication::translate("CrudSubespecie", "Buscar", nullptr));
        rbModificar->setText(QApplication::translate("CrudSubespecie", "Modificar", nullptr));
        gbAltas->setTitle(QApplication::translate("CrudSubespecie", "Altas", nullptr));
        lbSubespecie->setText(QApplication::translate("CrudSubespecie", "Subespcie", nullptr));
        lbIdSubespecie->setText(QApplication::translate("CrudSubespecie", "Id Subespcie", nullptr));
        pbAgregar->setText(QApplication::translate("CrudSubespecie", "Agregar", nullptr));
        gbBuscar->setTitle(QApplication::translate("CrudSubespecie", "Buscar", nullptr));
        lbSubQuery->setText(QApplication::translate("CrudSubespecie", "Subespecie", nullptr));
        gbModificar->setTitle(QApplication::translate("CrudSubespecie", "Modificar", nullptr));
        lbIdSubModificar->setText(QApplication::translate("CrudSubespecie", "Id Subespcie", nullptr));
        pbBuscar->setText(QApplication::translate("CrudSubespecie", "Buscar", nullptr));
        lbSubModificar->setText(QApplication::translate("CrudSubespecie", "Subespcie", nullptr));
        pbModificar->setText(QApplication::translate("CrudSubespecie", "Modificar", nullptr));
        label->setText(QString());
        pbOut2->setText(QApplication::translate("CrudSubespecie", "Salir", nullptr));
        lbBackground->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CrudSubespecie: public Ui_CrudSubespecie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRUDSUBESPECIE_H
