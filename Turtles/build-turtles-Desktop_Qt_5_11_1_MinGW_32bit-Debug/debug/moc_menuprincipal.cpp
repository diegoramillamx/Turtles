/****************************************************************************
** Meta object code from reading C++ file 'menuprincipal.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../turtles/menuprincipal.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menuprincipal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MenuPrincipal_t {
    QByteArrayData data[12];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MenuPrincipal_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MenuPrincipal_t qt_meta_stringdata_MenuPrincipal = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MenuPrincipal"
QT_MOC_LITERAL(1, 14, 9), // "updateGif"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 18), // "on_psbMapa_clicked"
QT_MOC_LITERAL(4, 44, 20), // "on_pbTurtles_clicked"
QT_MOC_LITERAL(5, 65, 17), // "on_pbZone_clicked"
QT_MOC_LITERAL(6, 83, 16), // "on_pbSub_clicked"
QT_MOC_LITERAL(7, 100, 19), // "on_pbSensor_clicked"
QT_MOC_LITERAL(8, 120, 18), // "on_pbState_clicked"
QT_MOC_LITERAL(9, 139, 23), // "on_pbStadistics_clicked"
QT_MOC_LITERAL(10, 163, 19), // "on_pbReport_clicked"
QT_MOC_LITERAL(11, 183, 27) // "on_psbExtrapolacion_clicked"

    },
    "MenuPrincipal\0updateGif\0\0on_psbMapa_clicked\0"
    "on_pbTurtles_clicked\0on_pbZone_clicked\0"
    "on_pbSub_clicked\0on_pbSensor_clicked\0"
    "on_pbState_clicked\0on_pbStadistics_clicked\0"
    "on_pbReport_clicked\0on_psbExtrapolacion_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MenuPrincipal[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MenuPrincipal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MenuPrincipal *_t = static_cast<MenuPrincipal *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateGif(); break;
        case 1: _t->on_psbMapa_clicked(); break;
        case 2: _t->on_pbTurtles_clicked(); break;
        case 3: _t->on_pbZone_clicked(); break;
        case 4: _t->on_pbSub_clicked(); break;
        case 5: _t->on_pbSensor_clicked(); break;
        case 6: _t->on_pbState_clicked(); break;
        case 7: _t->on_pbStadistics_clicked(); break;
        case 8: _t->on_pbReport_clicked(); break;
        case 9: _t->on_psbExtrapolacion_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MenuPrincipal::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MenuPrincipal.data,
      qt_meta_data_MenuPrincipal,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MenuPrincipal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MenuPrincipal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MenuPrincipal.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MenuPrincipal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
