/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *centralwidget;
    QGroupBox *gpbUsuario;
    QLineEdit *lneApm;
    QLineEdit *lneApp;
    QLabel *lblApp;
    QLineEdit *lneNombre;
    QLabel *lblNombre;
    QLabel *lblApm;
    QLineEdit *lnePassword_2;
    QLabel *lblPassword_2;
    QLineEdit *lneUsuario;
    QLabel *lblUsuario;
    QLineEdit *lnePassword;
    QLabel *lblPassword;
    QLabel *lblTipo;
    QDateEdit *dteNacimiento;
    QLabel *lblCump;
    QComboBox *cboTipo;
    QPushButton *psbAgregar;
    QPushButton *pbOut;
    QLabel *lbImage;
    QLabel *lbDescription;

    void setupUi(QMainWindow *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(1042, 588);
        Register->setMinimumSize(QSize(1042, 588));
        Register->setMaximumSize(QSize(1042, 588));
        QFont font;
        font.setFamily(QStringLiteral("Raleway Black"));
        Register->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/if_Turtle_204384.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Register->setWindowIcon(icon);
        Register->setStyleSheet(QStringLiteral("background-color: rgb(206, 241, 158);"));
        centralwidget = new QWidget(Register);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gpbUsuario = new QGroupBox(centralwidget);
        gpbUsuario->setObjectName(QStringLiteral("gpbUsuario"));
        gpbUsuario->setGeometry(QRect(30, 20, 981, 550));
        gpbUsuario->setMinimumSize(QSize(981, 550));
        gpbUsuario->setMaximumSize(QSize(981, 550));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        gpbUsuario->setFont(font1);
        gpbUsuario->setStyleSheet(QStringLiteral("background-color: rgb(241, 241, 241);"));
        lneApm = new QLineEdit(gpbUsuario);
        lneApm->setObjectName(QStringLiteral("lneApm"));
        lneApm->setGeometry(QRect(749, 300, 140, 20));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        font2.setPointSize(11);
        lneApm->setFont(font2);
        lneApm->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        lneApm->setMaxLength(30);
        lneApp = new QLineEdit(gpbUsuario);
        lneApp->setObjectName(QStringLiteral("lneApp"));
        lneApp->setGeometry(QRect(470, 300, 140, 20));
        lneApp->setMinimumSize(QSize(0, 0));
        lneApp->setFont(font2);
        lneApp->setTabletTracking(false);
        lneApp->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneApp->setMaxLength(30);
        lblApp = new QLabel(gpbUsuario);
        lblApp->setObjectName(QStringLiteral("lblApp"));
        lblApp->setGeometry(QRect(341, 300, 123, 18));
        QFont font3;
        font3.setFamily(QStringLiteral("Raleway"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        lblApp->setFont(font3);
        lneNombre = new QLineEdit(gpbUsuario);
        lneNombre->setObjectName(QStringLiteral("lneNombre"));
        lneNombre->setGeometry(QRect(116, 300, 211, 20));
        lneNombre->setFont(font2);
        lneNombre->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneNombre->setMaxLength(30);
        lblNombre = new QLabel(gpbUsuario);
        lblNombre->setObjectName(QStringLiteral("lblNombre"));
        lblNombre->setGeometry(QRect(51, 300, 59, 18));
        lblNombre->setFont(font3);
        lblNombre->setTextFormat(Qt::PlainText);
        lblNombre->setScaledContents(false);
        lblApm = new QLabel(gpbUsuario);
        lblApm->setObjectName(QStringLiteral("lblApm"));
        lblApm->setGeometry(QRect(616, 300, 127, 18));
        lblApm->setFont(font3);
        lnePassword_2 = new QLineEdit(gpbUsuario);
        lnePassword_2->setObjectName(QStringLiteral("lnePassword_2"));
        lnePassword_2->setGeometry(QRect(720, 340, 171, 20));
        lnePassword_2->setFont(font2);
        lnePassword_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lnePassword_2->setMaxLength(16);
        lnePassword_2->setEchoMode(QLineEdit::Password);
        lblPassword_2 = new QLabel(gpbUsuario);
        lblPassword_2->setObjectName(QStringLiteral("lblPassword_2"));
        lblPassword_2->setGeometry(QRect(550, 340, 161, 20));
        lblPassword_2->setFont(font3);
        lneUsuario = new QLineEdit(gpbUsuario);
        lneUsuario->setObjectName(QStringLiteral("lneUsuario"));
        lneUsuario->setGeometry(QRect(116, 340, 140, 20));
        lneUsuario->setFont(font2);
        lneUsuario->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lneUsuario->setMaxLength(16);
        lblUsuario = new QLabel(gpbUsuario);
        lblUsuario->setObjectName(QStringLiteral("lblUsuario"));
        lblUsuario->setGeometry(QRect(52, 340, 58, 18));
        lblUsuario->setFont(font3);
        lnePassword = new QLineEdit(gpbUsuario);
        lnePassword->setObjectName(QStringLiteral("lnePassword"));
        lnePassword->setGeometry(QRect(370, 340, 171, 20));
        lnePassword->setFont(font2);
        lnePassword->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lnePassword->setMaxLength(16);
        lnePassword->setEchoMode(QLineEdit::Password);
        lblPassword = new QLabel(gpbUsuario);
        lblPassword->setObjectName(QStringLiteral("lblPassword"));
        lblPassword->setGeometry(QRect(270, 340, 85, 18));
        lblPassword->setFont(font3);
        lblTipo = new QLabel(gpbUsuario);
        lblTipo->setObjectName(QStringLiteral("lblTipo"));
        lblTipo->setGeometry(QRect(390, 380, 161, 18));
        lblTipo->setMinimumSize(QSize(100, 0));
        lblTipo->setMaximumSize(QSize(200, 16777215));
        lblTipo->setFont(font3);
        dteNacimiento = new QDateEdit(gpbUsuario);
        dteNacimiento->setObjectName(QStringLiteral("dteNacimiento"));
        dteNacimiento->setGeometry(QRect(185, 380, 111, 20));
        dteNacimiento->setFont(font2);
        dteNacimiento->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        dteNacimiento->setReadOnly(false);
        dteNacimiento->setDateTime(QDateTime(QDate(1998, 1, 1), QTime(0, 0, 0)));
        dteNacimiento->setMaximumDate(QDate(2018, 12, 31));
        dteNacimiento->setMinimumDate(QDate(1940, 1, 1));
        lblCump = new QLabel(gpbUsuario);
        lblCump->setObjectName(QStringLiteral("lblCump"));
        lblCump->setGeometry(QRect(49, 380, 130, 18));
        lblCump->setFont(font3);
        cboTipo = new QComboBox(gpbUsuario);
        cboTipo->setObjectName(QStringLiteral("cboTipo"));
        cboTipo->setGeometry(QRect(549, 380, 341, 20));
        cboTipo->setMinimumSize(QSize(300, 0));
        cboTipo->setFont(font2);
        cboTipo->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        psbAgregar = new QPushButton(gpbUsuario);
        psbAgregar->setObjectName(QStringLiteral("psbAgregar"));
        psbAgregar->setGeometry(QRect(230, 440, 170, 65));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(psbAgregar->sizePolicy().hasHeightForWidth());
        psbAgregar->setSizePolicy(sizePolicy);
        psbAgregar->setMinimumSize(QSize(65, 65));
        psbAgregar->setMaximumSize(QSize(170, 16777215));
        psbAgregar->setFont(font3);
        psbAgregar->setStyleSheet(QLatin1String(" QPushButton#psbAgregar {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#psbAgregar:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/user_add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        psbAgregar->setIcon(icon1);
        psbAgregar->setCheckable(false);
        pbOut = new QPushButton(gpbUsuario);
        pbOut->setObjectName(QStringLiteral("pbOut"));
        pbOut->setGeometry(QRect(520, 440, 170, 65));
        pbOut->setMinimumSize(QSize(65, 65));
        pbOut->setMaximumSize(QSize(170, 16777215));
        pbOut->setFont(font3);
        pbOut->setStyleSheet(QLatin1String(" QPushButton#pbOut {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#pbOut:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/door_out.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pbOut->setIcon(icon2);
        pbOut->setIconSize(QSize(25, 25));
        lbImage = new QLabel(gpbUsuario);
        lbImage->setObjectName(QStringLiteral("lbImage"));
        lbImage->setGeometry(QRect(50, 60, 561, 191));
        lbImage->setPixmap(QPixmap(QString::fromUtf8(":/cuidador.png")));
        lbDescription = new QLabel(gpbUsuario);
        lbDescription->setObjectName(QStringLiteral("lbDescription"));
        lbDescription->setGeometry(QRect(626, 70, 341, 171));
        lbDescription->setFont(font3);
        lbDescription->setAlignment(Qt::AlignCenter);
        Register->setCentralWidget(centralwidget);
        QWidget::setTabOrder(lneNombre, lneApp);
        QWidget::setTabOrder(lneApp, lneApm);
        QWidget::setTabOrder(lneApm, lneUsuario);
        QWidget::setTabOrder(lneUsuario, lnePassword);
        QWidget::setTabOrder(lnePassword, lnePassword_2);
        QWidget::setTabOrder(lnePassword_2, dteNacimiento);
        QWidget::setTabOrder(dteNacimiento, cboTipo);

        retranslateUi(Register);
        QObject::connect(pbOut, SIGNAL(clicked()), Register, SLOT(close()));

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QMainWindow *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Registro de investigadores", nullptr));
        gpbUsuario->setTitle(QApplication::translate("Register", "Registro de investigadores", nullptr));
        lblApp->setText(QApplication::translate("Register", "Apellido paterno", nullptr));
        lblNombre->setText(QApplication::translate("Register", "Nombre", nullptr));
        lblApm->setText(QApplication::translate("Register", "Apellido materno", nullptr));
        lblPassword_2->setText(QApplication::translate("Register", "Confirmar contrase\303\261a", nullptr));
        lblUsuario->setText(QApplication::translate("Register", "Usuario", nullptr));
        lblPassword->setText(QApplication::translate("Register", "Contrase\303\261a", nullptr));
        lblTipo->setText(QApplication::translate("Register", "Tipo de investigador", nullptr));
        dteNacimiento->setDisplayFormat(QApplication::translate("Register", "dd/MM/yyyy", nullptr));
        lblCump->setText(QApplication::translate("Register", "Fecha nacimiento", nullptr));
        psbAgregar->setText(QApplication::translate("Register", "Agregar", nullptr));
        pbOut->setText(QApplication::translate("Register", "  Salir", nullptr));
        lbImage->setText(QString());
        lbDescription->setText(QApplication::translate("Register", "Los investigadores son parte fundamental\n"
"en este proyecto, cuyo deber ser\303\241 llevar\n"
"un mayor control sobre el monitoreo\n"
"constante de las tortugas.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
