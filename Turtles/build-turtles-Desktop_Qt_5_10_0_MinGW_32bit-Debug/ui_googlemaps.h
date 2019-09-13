/********************************************************************************
** Form generated from reading UI file 'googlemaps.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOOGLEMAPS_H
#define UI_GOOGLEMAPS_H

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

class Ui_googlemaps
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *googlemaps)
    {
        if (googlemaps->objectName().isEmpty())
            googlemaps->setObjectName(QStringLiteral("googlemaps"));
        googlemaps->resize(800, 600);
        menubar = new QMenuBar(googlemaps);
        menubar->setObjectName(QStringLiteral("menubar"));
        googlemaps->setMenuBar(menubar);
        centralwidget = new QWidget(googlemaps);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        googlemaps->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(googlemaps);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        googlemaps->setStatusBar(statusbar);

        retranslateUi(googlemaps);

        QMetaObject::connectSlotsByName(googlemaps);
    } // setupUi

    void retranslateUi(QMainWindow *googlemaps)
    {
        googlemaps->setWindowTitle(QApplication::translate("googlemaps", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class googlemaps: public Ui_googlemaps {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOGLEMAPS_H
