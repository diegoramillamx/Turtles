/****************************************************************************
** Meta object code from reading C++ file 'register.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../turtles/register.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'register.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Register_t {
    QByteArrayData data[12];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Register_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Register_t qt_meta_stringdata_Register = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Register"
QT_MOC_LITERAL(1, 9, 21), // "on_psbAgregar_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 25), // "on_lneUsuario_textChanged"
QT_MOC_LITERAL(4, 58, 4), // "arg1"
QT_MOC_LITERAL(5, 63, 26), // "on_lneNombre_returnPressed"
QT_MOC_LITERAL(6, 90, 30), // "on_lnePassword_2_returnPressed"
QT_MOC_LITERAL(7, 121, 23), // "on_lneApp_returnPressed"
QT_MOC_LITERAL(8, 145, 23), // "on_lneApm_returnPressed"
QT_MOC_LITERAL(9, 169, 28), // "on_lnePassword_returnPressed"
QT_MOC_LITERAL(10, 198, 21), // "on_psbAgregar_pressed"
QT_MOC_LITERAL(11, 220, 27) // "on_lneUsuario_returnPressed"

    },
    "Register\0on_psbAgregar_clicked\0\0"
    "on_lneUsuario_textChanged\0arg1\0"
    "on_lneNombre_returnPressed\0"
    "on_lnePassword_2_returnPressed\0"
    "on_lneApp_returnPressed\0on_lneApm_returnPressed\0"
    "on_lnePassword_returnPressed\0"
    "on_psbAgregar_pressed\0on_lneUsuario_returnPressed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Register[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    0,   68,    2, 0x08 /* Private */,
      11,    0,   69,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Register::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Register *_t = static_cast<Register *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_psbAgregar_clicked(); break;
        case 1: _t->on_lneUsuario_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_lneNombre_returnPressed(); break;
        case 3: _t->on_lnePassword_2_returnPressed(); break;
        case 4: _t->on_lneApp_returnPressed(); break;
        case 5: _t->on_lneApm_returnPressed(); break;
        case 6: _t->on_lnePassword_returnPressed(); break;
        case 7: _t->on_psbAgregar_pressed(); break;
        case 8: _t->on_lneUsuario_returnPressed(); break;
        default: ;
        }
    }
}

const QMetaObject Register::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Register.data,
      qt_meta_data_Register,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Register::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Register::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Register.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Register::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
