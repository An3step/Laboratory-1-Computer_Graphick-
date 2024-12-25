/****************************************************************************
** Meta object code from reading C++ file 'accurate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Color_change/accurate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accurate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Accurate_t {
    QByteArrayData data[16];
    char stringdata0[284];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Accurate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Accurate_t qt_meta_stringdata_Accurate = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Accurate"
QT_MOC_LITERAL(1, 9, 13), // "ColorChanging"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 1), // "h"
QT_MOC_LITERAL(4, 26, 20), // "on_RedS_valueChanged"
QT_MOC_LITERAL(5, 47, 8), // "argument"
QT_MOC_LITERAL(6, 56, 21), // "on_BlueS_valueChanged"
QT_MOC_LITERAL(7, 78, 22), // "on_GreenS_valueChanged"
QT_MOC_LITERAL(8, 101, 21), // "on_CyanS_valueChanged"
QT_MOC_LITERAL(9, 123, 24), // "on_MagentaS_valueChanged"
QT_MOC_LITERAL(10, 148, 23), // "on_YellowS_valueChanged"
QT_MOC_LITERAL(11, 172, 22), // "on_BlackS_valueChanged"
QT_MOC_LITERAL(12, 195, 20), // "on_HueS_valueChanged"
QT_MOC_LITERAL(13, 216, 27), // "on_SaturationS_valueChanged"
QT_MOC_LITERAL(14, 244, 22), // "on_ValueS_valueChanged"
QT_MOC_LITERAL(15, 267, 16) // "InitialiseColors"

    },
    "Accurate\0ColorChanging\0\0h\0"
    "on_RedS_valueChanged\0argument\0"
    "on_BlueS_valueChanged\0on_GreenS_valueChanged\0"
    "on_CyanS_valueChanged\0on_MagentaS_valueChanged\0"
    "on_YellowS_valueChanged\0on_BlackS_valueChanged\0"
    "on_HueS_valueChanged\0on_SaturationS_valueChanged\0"
    "on_ValueS_valueChanged\0InitialiseColors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Accurate[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       1,    0,   82,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   83,    2, 0x08 /* Private */,
       6,    1,   86,    2, 0x08 /* Private */,
       7,    1,   89,    2, 0x08 /* Private */,
       8,    1,   92,    2, 0x08 /* Private */,
       9,    1,   95,    2, 0x08 /* Private */,
      10,    1,   98,    2, 0x08 /* Private */,
      11,    1,  101,    2, 0x08 /* Private */,
      12,    1,  104,    2, 0x08 /* Private */,
      13,    1,  107,    2, 0x08 /* Private */,
      14,    1,  110,    2, 0x08 /* Private */,
      15,    0,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,

       0        // eod
};

void Accurate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Accurate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ColorChanging((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->ColorChanging(); break;
        case 2: _t->on_RedS_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_BlueS_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_GreenS_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_CyanS_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_MagentaS_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_YellowS_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_BlackS_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_HueS_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_SaturationS_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_ValueS_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->InitialiseColors(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Accurate::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Accurate::ColorChanging)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Accurate::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Accurate.data,
    qt_meta_data_Accurate,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Accurate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Accurate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Accurate.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Accurate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Accurate::ColorChanging(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
