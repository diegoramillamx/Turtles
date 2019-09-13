/****************************************************************************
** Meta object code from reading C++ file 'crudzone.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../turtles/crudzone.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'crudzone.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CrudZone_t {
    QByteArrayData data[8];
    char stringdata0[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CrudZone_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CrudZone_t qt_meta_stringdata_CrudZone = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CrudZone"
QT_MOC_LITERAL(1, 9, 19), // "on_pbActive_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 30), // "on_cboState_currentTextChanged"
QT_MOC_LITERAL(4, 61, 4), // "arg1"
QT_MOC_LITERAL(5, 66, 19), // "on_pbInsert_clicked"
QT_MOC_LITERAL(6, 86, 22), // "on_lnQuery_textChanged"
QT_MOC_LITERAL(7, 109, 24) // "on_pbActiveQuery_clicked"

    },
    "CrudZone\0on_pbActive_clicked\0\0"
    "on_cboState_currentTextChanged\0arg1\0"
    "on_pbInsert_clicked\0on_lnQuery_textChanged\0"
    "on_pbActiveQuery_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CrudZone[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    1,   40,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       7,    0,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

       0        // eod
};

void CrudZone::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CrudZone *_t = static_cast<CrudZone *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pbActive_clicked(); break;
        case 1: _t->on_cboState_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_pbInsert_clicked(); break;
        case 3: _t->on_lnQuery_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_pbActiveQuery_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CrudZone::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CrudZone.data,
      qt_meta_data_CrudZone,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CrudZone::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CrudZone::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CrudZone.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CrudZone::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
