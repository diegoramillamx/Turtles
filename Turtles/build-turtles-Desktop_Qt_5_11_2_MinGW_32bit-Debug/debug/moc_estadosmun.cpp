/****************************************************************************
** Meta object code from reading C++ file 'estadosmun.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../turtles/estadosmun.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'estadosmun.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_estadosMun_t {
    QByteArrayData data[17];
    char stringdata0[369];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_estadosMun_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_estadosMun_t qt_meta_stringdata_estadosMun = {
    {
QT_MOC_LITERAL(0, 0, 10), // "estadosMun"
QT_MOC_LITERAL(1, 11, 23), // "on_altaEstadoRB_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 25), // "on_buscarEstadoRB_clicked"
QT_MOC_LITERAL(4, 62, 22), // "on_modEstadoRB_clicked"
QT_MOC_LITERAL(5, 85, 20), // "on_pbAgregar_clicked"
QT_MOC_LITERAL(6, 106, 26), // "on_lneQueryEdo_textChanged"
QT_MOC_LITERAL(7, 133, 4), // "arg1"
QT_MOC_LITERAL(8, 138, 22), // "on_pbBuscarEdo_clicked"
QT_MOC_LITERAL(9, 161, 25), // "on_pbModificarEdo_clicked"
QT_MOC_LITERAL(10, 187, 26), // "on_altaMunicipioRB_clicked"
QT_MOC_LITERAL(11, 214, 28), // "on_buscarMunicipioRB_clicked"
QT_MOC_LITERAL(12, 243, 25), // "on_modMunicipioRB_clicked"
QT_MOC_LITERAL(13, 269, 23), // "on_pbAgregarMpo_clicked"
QT_MOC_LITERAL(14, 293, 26), // "on_lneQueryMpo_textChanged"
QT_MOC_LITERAL(15, 320, 22), // "on_pbBuscarMpo_clicked"
QT_MOC_LITERAL(16, 343, 25) // "on_pbModificarMpo_clicked"

    },
    "estadosMun\0on_altaEstadoRB_clicked\0\0"
    "on_buscarEstadoRB_clicked\0"
    "on_modEstadoRB_clicked\0on_pbAgregar_clicked\0"
    "on_lneQueryEdo_textChanged\0arg1\0"
    "on_pbBuscarEdo_clicked\0on_pbModificarEdo_clicked\0"
    "on_altaMunicipioRB_clicked\0"
    "on_buscarMunicipioRB_clicked\0"
    "on_modMunicipioRB_clicked\0"
    "on_pbAgregarMpo_clicked\0"
    "on_lneQueryMpo_textChanged\0"
    "on_pbBuscarMpo_clicked\0on_pbModificarMpo_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_estadosMun[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    1,   97,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void estadosMun::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        estadosMun *_t = static_cast<estadosMun *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_altaEstadoRB_clicked(); break;
        case 1: _t->on_buscarEstadoRB_clicked(); break;
        case 2: _t->on_modEstadoRB_clicked(); break;
        case 3: _t->on_pbAgregar_clicked(); break;
        case 4: _t->on_lneQueryEdo_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_pbBuscarEdo_clicked(); break;
        case 6: _t->on_pbModificarEdo_clicked(); break;
        case 7: _t->on_altaMunicipioRB_clicked(); break;
        case 8: _t->on_buscarMunicipioRB_clicked(); break;
        case 9: _t->on_modMunicipioRB_clicked(); break;
        case 10: _t->on_pbAgregarMpo_clicked(); break;
        case 11: _t->on_lneQueryMpo_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_pbBuscarMpo_clicked(); break;
        case 13: _t->on_pbModificarMpo_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject estadosMun::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_estadosMun.data,
      qt_meta_data_estadosMun,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *estadosMun::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *estadosMun::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_estadosMun.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int estadosMun::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
