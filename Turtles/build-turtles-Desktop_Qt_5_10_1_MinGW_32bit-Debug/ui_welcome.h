/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QProgressBar *prbProgreso;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName(QStringLiteral("Welcome"));
        Welcome->resize(982, 635);
        Welcome->setMaximumSize(QSize(1942, 1942));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/if_Turtle_204384.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Welcome->setWindowIcon(icon);
        centralwidget = new QWidget(Welcome);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/Tortugas-Marinas.jpg")));
        label->setScaledContents(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        prbProgreso = new QProgressBar(centralwidget);
        prbProgreso->setObjectName(QStringLiteral("prbProgreso"));
        prbProgreso->setValue(0);
        prbProgreso->setAlignment(Qt::AlignCenter);
        prbProgreso->setTextVisible(true);
        prbProgreso->setInvertedAppearance(false);
        prbProgreso->setTextDirection(QProgressBar::TopToBottom);

        gridLayout->addWidget(prbProgreso, 1, 0, 1, 1);

        Welcome->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Welcome);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 982, 21));
        Welcome->setMenuBar(menubar);
        statusbar = new QStatusBar(Welcome);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Welcome->setStatusBar(statusbar);

        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QMainWindow *Welcome)
    {
        Welcome->setWindowTitle(QApplication::translate("Welcome", "Monitoreo de tortugas v1.0", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
