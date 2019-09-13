/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QLineEdit *ledPassword;
    QPushButton *psbEntrar;
    QLabel *lblUsuario;
    QPushButton *psbRegistrarse;
    QLineEdit *ledUsuario;
    QLabel *lblPassword;
    QLabel *lblTitulo;
    QLabel *lbImage;
    QLabel *lbBack;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1375, 700);
        MainWindow->setMinimumSize(QSize(571, 510));
        MainWindow->setMaximumSize(QSize(1375, 700));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/if_Turtle_204384.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(57, 134, 137);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 50, 1250, 600));
        groupBox->setMinimumSize(QSize(0, 0));
        groupBox->setMaximumSize(QSize(1250, 600));
        groupBox->setStyleSheet(QLatin1String("background-color: rgb(167, 221, 167);\n"
""));
        ledPassword = new QLineEdit(groupBox);
        ledPassword->setObjectName(QStringLiteral("ledPassword"));
        ledPassword->setGeometry(QRect(140, 320, 380, 20));
        ledPassword->setMaximumSize(QSize(380, 20));
        QFont font;
        font.setFamily(QStringLiteral("Raleway"));
        ledPassword->setFont(font);
        ledPassword->setStyleSheet(QLatin1String("border-radius: 10px; \n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(147, 255, 88);"));
        ledPassword->setMaxLength(16);
        ledPassword->setEchoMode(QLineEdit::Password);
        ledPassword->setAlignment(Qt::AlignCenter);
        psbEntrar = new QPushButton(groupBox);
        psbEntrar->setObjectName(QStringLiteral("psbEntrar"));
        psbEntrar->setGeometry(QRect(250, 380, 161, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Raleway"));
        font1.setPointSize(13);
        font1.setBold(true);
        font1.setWeight(75);
        psbEntrar->setFont(font1);
        psbEntrar->setStyleSheet(QLatin1String(" QPushButton#psbEntrar {\n"
"background-color: rgb(120, 190, 151);\n"
" }\n"
"\n"
" QPushButton#psbEntrar:hover {\n"
"background-color: rgb(56, 134, 136);\n"
"color:  rgb(255, 255, 255);\n"
" }"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/door_in.ico"), QSize(), QIcon::Normal, QIcon::Off);
        psbEntrar->setIcon(icon1);
        psbEntrar->setIconSize(QSize(190, 50));
        lblUsuario = new QLabel(groupBox);
        lblUsuario->setObjectName(QStringLiteral("lblUsuario"));
        lblUsuario->setGeometry(QRect(270, 160, 131, 21));
        lblUsuario->setFont(font1);
        lblUsuario->setStyleSheet(QLatin1String("background: transparent;\n"
"color: rgb(0, 73, 107);"));
        lblUsuario->setAlignment(Qt::AlignCenter);
        psbRegistrarse = new QPushButton(groupBox);
        psbRegistrarse->setObjectName(QStringLiteral("psbRegistrarse"));
        psbRegistrarse->setGeometry(QRect(160, 510, 351, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Raleway"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        psbRegistrarse->setFont(font2);
        psbRegistrarse->setCursor(QCursor(Qt::PointingHandCursor));
        psbRegistrarse->setMouseTracking(true);
        psbRegistrarse->setStyleSheet(QLatin1String(" QPushButton#psbRegistrarse {\n"
"color: rgb(0, 73, 107);\n"
"background-color: rgb(120, 190, 151);\n"
"background: transparent;\n"
" }\n"
"\n"
" QPushButton#psbRegistrarse:hover {\n"
"color:  rgb(193, 161, 96);\n"
"background: transparent;\n"
" }"));
        psbRegistrarse->setAutoDefault(false);
        ledUsuario = new QLineEdit(groupBox);
        ledUsuario->setObjectName(QStringLiteral("ledUsuario"));
        ledUsuario->setGeometry(QRect(140, 210, 380, 20));
        ledUsuario->setMaximumSize(QSize(380, 20));
        QFont font3;
        font3.setFamily(QStringLiteral("Raleway"));
        font3.setPointSize(10);
        ledUsuario->setFont(font3);
        ledUsuario->setStyleSheet(QLatin1String("border-radius: 10px; \n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgb(147, 255, 88);"));
        ledUsuario->setMaxLength(16);
        ledUsuario->setAlignment(Qt::AlignCenter);
        ledUsuario->setDragEnabled(false);
        lblPassword = new QLabel(groupBox);
        lblPassword->setObjectName(QStringLiteral("lblPassword"));
        lblPassword->setGeometry(QRect(270, 260, 121, 31));
        lblPassword->setFont(font1);
        lblPassword->setStyleSheet(QLatin1String("background: transparent;\n"
"color: rgb(0, 73, 107);"));
        lblPassword->setAlignment(Qt::AlignCenter);
        lblTitulo = new QLabel(groupBox);
        lblTitulo->setObjectName(QStringLiteral("lblTitulo"));
        lblTitulo->setGeometry(QRect(90, 70, 485, 50));
        lblTitulo->setMinimumSize(QSize(485, 41));
        lblTitulo->setMaximumSize(QSize(485, 50));
        QFont font4;
        font4.setFamily(QStringLiteral("Raleway"));
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setWeight(75);
        lblTitulo->setFont(font4);
        lblTitulo->setAlignment(Qt::AlignCenter);
        lbImage = new QLabel(groupBox);
        lbImage->setObjectName(QStringLiteral("lbImage"));
        lbImage->setGeometry(QRect(700, 90, 441, 441));
        lbImage->setPixmap(QPixmap(QString::fromUtf8(":/Images/Turtli.png")));
        lbImage->setScaledContents(true);
        lblTitulo->raise();
        lbImage->raise();
        ledPassword->raise();
        psbEntrar->raise();
        lblUsuario->raise();
        psbRegistrarse->raise();
        ledUsuario->raise();
        lblPassword->raise();
        lbBack = new QLabel(centralWidget);
        lbBack->setObjectName(QStringLiteral("lbBack"));
        lbBack->setGeometry(QRect(0, 2, 1371, 701));
        lbBack->setScaledContents(true);
        MainWindow->setCentralWidget(centralWidget);
        lbBack->raise();
        groupBox->raise();
        QWidget::setTabOrder(ledUsuario, ledPassword);
        QWidget::setTabOrder(ledPassword, psbEntrar);
        QWidget::setTabOrder(psbEntrar, psbRegistrarse);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Ingreso al sistema", nullptr));
        groupBox->setTitle(QString());
        psbEntrar->setText(QApplication::translate("MainWindow", "   Entrar", nullptr));
        lblUsuario->setText(QApplication::translate("MainWindow", "Usuario", nullptr));
        psbRegistrarse->setText(QApplication::translate("MainWindow", "\302\277No tienes una cuenta? Registrate aqu\303\255", nullptr));
        lblPassword->setText(QApplication::translate("MainWindow", "Contrase\303\261a", nullptr));
        lblTitulo->setText(QApplication::translate("MainWindow", "Turtles Finder", nullptr));
        lbImage->setText(QString());
        lbBack->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
