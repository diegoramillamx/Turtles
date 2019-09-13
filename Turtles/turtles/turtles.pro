#-------------------------------------------------
#
# Project created by QtCreator 2018-10-01T20:30:02
#
#-------------------------------------------------

QT       += core gui sql quickwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = turtles
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    register.cpp \
    investigador.cpp \
    welcome.cpp \
    menuprincipal.cpp \
    crudturtles.cpp \
    crudzone.cpp \
    zone.cpp \
    crudsubespecie.cpp \
    subspecies.cpp \
    mapsensor.cpp \
    ubicacion.cpp \
    estadosmun.cpp \
    reportes.cpp \
    reportetortuga.cpp \
    extrapolacion.cpp

HEADERS += \
        mainwindow.h \
    register.h \
    investigador.h \
    welcome.h \
    menuprincipal.h \
    crudturtles.h \
    crudzone.h \
    zone.h \
    crudsubespecie.h \
    subspecies.h \
    mapsensor.h \
    ubicacion.h \
    estadosmun.h \
    reportes.h \
    reportetortuga.h \
    extrapolacion.h

FORMS += \
        mainwindow.ui \
    register.ui \
    welcome.ui \
    menuprincipal.ui \
    crudturtles.ui \
    crudzone.ui \
    crudsubespecie.ui \
    mapsensor.ui \
    estadosmun.ui \
    reportes.ui \
    reportetortuga.ui \
    extrapolacion.ui

QMAKE_CXXFLAGS += -std=gnu++11

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc \
    gifsqrc.qrc \
    gifs.qrc \
    images2.qrc

DISTFILES +=
