/********************************************************************************
** Form generated from reading UI file 'menuprincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPRINCIPAL_H
#define UI_MENUPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuPrincipal
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MenuPrincipal)
    {
        if (MenuPrincipal->objectName().isEmpty())
            MenuPrincipal->setObjectName(QStringLiteral("MenuPrincipal"));
        MenuPrincipal->resize(800, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/if_Turtle_204384.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MenuPrincipal->setWindowIcon(icon);
        centralwidget = new QWidget(MenuPrincipal);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MenuPrincipal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MenuPrincipal);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MenuPrincipal->setMenuBar(menubar);
        statusbar = new QStatusBar(MenuPrincipal);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MenuPrincipal->setStatusBar(statusbar);

        retranslateUi(MenuPrincipal);

        QMetaObject::connectSlotsByName(MenuPrincipal);
    } // setupUi

    void retranslateUi(QMainWindow *MenuPrincipal)
    {
        MenuPrincipal->setWindowTitle(QApplication::translate("MenuPrincipal", "Monitoreo de tortugas v1.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuPrincipal: public Ui_MenuPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPRINCIPAL_H
