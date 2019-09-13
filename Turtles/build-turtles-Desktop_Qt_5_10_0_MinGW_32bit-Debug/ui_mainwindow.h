/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *lblTitulo;
    QLabel *backgroundLB;
    QPushButton *psbRegistrarse;
    QLineEdit *ledUsuario;
    QLabel *lblPassword;
    QPushButton *psbEntrar;
    QLabel *lblUsuario;
    QLineEdit *ledPassword;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(301, 274);
        MainWindow->setMinimumSize(QSize(301, 274));
        MainWindow->setMaximumSize(QSize(301, 274));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/if_Turtle_204384.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lblTitulo = new QLabel(centralWidget);
        lblTitulo->setObjectName(QStringLiteral("lblTitulo"));
        lblTitulo->setGeometry(QRect(10, 20, 291, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        lblTitulo->setFont(font);
        lblTitulo->setAlignment(Qt::AlignCenter);
        backgroundLB = new QLabel(centralWidget);
        backgroundLB->setObjectName(QStringLiteral("backgroundLB"));
        backgroundLB->setGeometry(QRect(0, 0, 301, 274));
        psbRegistrarse = new QPushButton(centralWidget);
        psbRegistrarse->setObjectName(QStringLiteral("psbRegistrarse"));
        psbRegistrarse->setGeometry(QRect(0, 200, 301, 23));
        QFont font1;
        font1.setBold(true);
        font1.setUnderline(true);
        font1.setWeight(75);
        psbRegistrarse->setFont(font1);
        psbRegistrarse->setCursor(QCursor(Qt::PointingHandCursor));
        psbRegistrarse->setMouseTracking(false);
        ledUsuario = new QLineEdit(centralWidget);
        ledUsuario->setObjectName(QStringLiteral("ledUsuario"));
        ledUsuario->setGeometry(QRect(30, 100, 241, 20));
        ledUsuario->setStyleSheet(QLatin1String("border-radius: 10px; \n"
"border-color: rgb(147, 255, 88);"));
        ledUsuario->setMaxLength(16);
        ledUsuario->setAlignment(Qt::AlignCenter);
        ledUsuario->setDragEnabled(false);
        lblPassword = new QLabel(centralWidget);
        lblPassword->setObjectName(QStringLiteral("lblPassword"));
        lblPassword->setGeometry(QRect(90, 122, 121, 16));
        lblPassword->setAlignment(Qt::AlignCenter);
        psbEntrar = new QPushButton(centralWidget);
        psbEntrar->setObjectName(QStringLiteral("psbEntrar"));
        psbEntrar->setGeometry(QRect(112, 165, 75, 23));
        lblUsuario = new QLabel(centralWidget);
        lblUsuario->setObjectName(QStringLiteral("lblUsuario"));
        lblUsuario->setGeometry(QRect(90, 81, 121, 16));
        lblUsuario->setAlignment(Qt::AlignCenter);
        ledPassword = new QLineEdit(centralWidget);
        ledPassword->setObjectName(QStringLiteral("ledPassword"));
        ledPassword->setGeometry(QRect(30, 141, 241, 20));
        ledPassword->setStyleSheet(QLatin1String("border-radius: 10px; \n"
"border-color: rgb(147, 255, 88);"));
        ledPassword->setMaxLength(16);
        ledPassword->setEchoMode(QLineEdit::Password);
        ledPassword->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        backgroundLB->raise();
        lblTitulo->raise();
        psbRegistrarse->raise();
        ledUsuario->raise();
        lblPassword->raise();
        psbEntrar->raise();
        lblUsuario->raise();
        ledPassword->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 301, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        QWidget::setTabOrder(ledUsuario, ledPassword);
        QWidget::setTabOrder(ledPassword, psbEntrar);
        QWidget::setTabOrder(psbEntrar, psbRegistrarse);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Ingreso al sistema", nullptr));
        lblTitulo->setText(QApplication::translate("MainWindow", "Monitoreo de tortugas", nullptr));
        backgroundLB->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        psbRegistrarse->setText(QApplication::translate("MainWindow", "\302\277No tienes una cuenta? Registrate aqu\303\255", nullptr));
        lblPassword->setText(QApplication::translate("MainWindow", "Contrase\303\261a", nullptr));
        psbEntrar->setText(QApplication::translate("MainWindow", "Entrar", nullptr));
        lblUsuario->setText(QApplication::translate("MainWindow", "Usuario", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
