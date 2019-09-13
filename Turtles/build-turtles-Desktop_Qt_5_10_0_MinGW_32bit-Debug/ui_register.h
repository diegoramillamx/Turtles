/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *psbAgregar;
    QGroupBox *gpbUsuario;
    QGridLayout *gridLayout_2;
    QLineEdit *lneApm;
    QLineEdit *lneApp;
    QLineEdit *lnePassword;
    QLabel *lblTipo;
    QLabel *lblCump;
    QLineEdit *lneNombre;
    QLineEdit *lneUsuario;
    QDateEdit *dteNacimiento;
    QLabel *lblApp;
    QLabel *lblNombre;
    QLineEdit *lnePassword_2;
    QLabel *lblApm;
    QLabel *lblPassword;
    QLabel *lblUsuario;
    QLabel *lblPassword_2;
    QComboBox *cboTipo;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(697, 275);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/if_Turtle_204384.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Register->setWindowIcon(icon);
        centralwidget = new QWidget(Register);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        psbAgregar = new QPushButton(centralwidget);
        psbAgregar->setObjectName(QStringLiteral("psbAgregar"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        psbAgregar->setIcon(icon1);
        psbAgregar->setCheckable(false);

        gridLayout->addWidget(psbAgregar, 1, 0, 1, 1, Qt::AlignHCenter);

        gpbUsuario = new QGroupBox(centralwidget);
        gpbUsuario->setObjectName(QStringLiteral("gpbUsuario"));
        gridLayout_2 = new QGridLayout(gpbUsuario);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lneApm = new QLineEdit(gpbUsuario);
        lneApm->setObjectName(QStringLiteral("lneApm"));

        gridLayout_2->addWidget(lneApm, 0, 11, 1, 1);

        lneApp = new QLineEdit(gpbUsuario);
        lneApp->setObjectName(QStringLiteral("lneApp"));
        lneApp->setTabletTracking(false);

        gridLayout_2->addWidget(lneApp, 0, 7, 1, 2);

        lnePassword = new QLineEdit(gpbUsuario);
        lnePassword->setObjectName(QStringLiteral("lnePassword"));
        lnePassword->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(lnePassword, 1, 5, 1, 3);

        lblTipo = new QLabel(gpbUsuario);
        lblTipo->setObjectName(QStringLiteral("lblTipo"));

        gridLayout_2->addWidget(lblTipo, 2, 4, 1, 2);

        lblCump = new QLabel(gpbUsuario);
        lblCump->setObjectName(QStringLiteral("lblCump"));

        gridLayout_2->addWidget(lblCump, 2, 0, 1, 2);

        lneNombre = new QLineEdit(gpbUsuario);
        lneNombre->setObjectName(QStringLiteral("lneNombre"));

        gridLayout_2->addWidget(lneNombre, 0, 1, 1, 2);

        lneUsuario = new QLineEdit(gpbUsuario);
        lneUsuario->setObjectName(QStringLiteral("lneUsuario"));

        gridLayout_2->addWidget(lneUsuario, 1, 1, 1, 2);

        dteNacimiento = new QDateEdit(gpbUsuario);
        dteNacimiento->setObjectName(QStringLiteral("dteNacimiento"));
        dteNacimiento->setReadOnly(false);
        dteNacimiento->setDateTime(QDateTime(QDate(1998, 1, 1), QTime(0, 0, 0)));
        dteNacimiento->setMaximumDate(QDate(2018, 12, 31));
        dteNacimiento->setMinimumDate(QDate(1940, 1, 1));

        gridLayout_2->addWidget(dteNacimiento, 2, 2, 1, 2);

        lblApp = new QLabel(gpbUsuario);
        lblApp->setObjectName(QStringLiteral("lblApp"));

        gridLayout_2->addWidget(lblApp, 0, 3, 1, 4);

        lblNombre = new QLabel(gpbUsuario);
        lblNombre->setObjectName(QStringLiteral("lblNombre"));
        lblNombre->setTextFormat(Qt::PlainText);
        lblNombre->setScaledContents(false);

        gridLayout_2->addWidget(lblNombre, 0, 0, 1, 1);

        lnePassword_2 = new QLineEdit(gpbUsuario);
        lnePassword_2->setObjectName(QStringLiteral("lnePassword_2"));
        lnePassword_2->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(lnePassword_2, 1, 10, 1, 2);

        lblApm = new QLabel(gpbUsuario);
        lblApm->setObjectName(QStringLiteral("lblApm"));

        gridLayout_2->addWidget(lblApm, 0, 9, 1, 2);

        lblPassword = new QLabel(gpbUsuario);
        lblPassword->setObjectName(QStringLiteral("lblPassword"));

        gridLayout_2->addWidget(lblPassword, 1, 3, 1, 2);

        lblUsuario = new QLabel(gpbUsuario);
        lblUsuario->setObjectName(QStringLiteral("lblUsuario"));

        gridLayout_2->addWidget(lblUsuario, 1, 0, 1, 1);

        lblPassword_2 = new QLabel(gpbUsuario);
        lblPassword_2->setObjectName(QStringLiteral("lblPassword_2"));

        gridLayout_2->addWidget(lblPassword_2, 1, 8, 1, 2);

        cboTipo = new QComboBox(gpbUsuario);
        cboTipo->setObjectName(QStringLiteral("cboTipo"));

        gridLayout_2->addWidget(cboTipo, 2, 6, 1, 4);


        gridLayout->addWidget(gpbUsuario, 0, 0, 1, 1);

        Register->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Register);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 697, 21));
        Register->setMenuBar(menubar);
        statusbar = new QStatusBar(Register);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Register->setStatusBar(statusbar);
        QWidget::setTabOrder(lneNombre, lneApp);
        QWidget::setTabOrder(lneApp, lneApm);
        QWidget::setTabOrder(lneApm, lneUsuario);
        QWidget::setTabOrder(lneUsuario, lnePassword);
        QWidget::setTabOrder(lnePassword, lnePassword_2);
        QWidget::setTabOrder(lnePassword_2, dteNacimiento);
        QWidget::setTabOrder(dteNacimiento, cboTipo);
        QWidget::setTabOrder(cboTipo, psbAgregar);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QMainWindow *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Registro de investigadores", nullptr));
        psbAgregar->setText(QApplication::translate("Register", "Agregar", nullptr));
        gpbUsuario->setTitle(QApplication::translate("Register", "Datos para registrar al usuario", nullptr));
        lblTipo->setText(QApplication::translate("Register", "Tipo", nullptr));
        lblCump->setText(QApplication::translate("Register", "Fecha nacimiento", nullptr));
        dteNacimiento->setDisplayFormat(QApplication::translate("Register", "dd/MM/yyyy", nullptr));
        lblApp->setText(QApplication::translate("Register", "Apellido paterno", nullptr));
        lblNombre->setText(QApplication::translate("Register", "Nombre", nullptr));
        lblApm->setText(QApplication::translate("Register", "Apellido materno", nullptr));
        lblPassword->setText(QApplication::translate("Register", "Contrase\303\261a", nullptr));
        lblUsuario->setText(QApplication::translate("Register", "Usuario", nullptr));
        lblPassword_2->setText(QApplication::translate("Register", "Confirmar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
