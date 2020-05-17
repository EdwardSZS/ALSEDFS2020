/****************************************************************************
** Meta object code from reading C++ file 'juego.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Proyecto3/juego.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'juego.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_juego_t {
    QByteArrayData data[16];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_juego_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_juego_t qt_meta_stringdata_juego = {
    {
QT_MOC_LITERAL(0, 0, 5), // "juego"
QT_MOC_LITERAL(1, 6, 10), // "mecanismoA"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 6), // "ontime"
QT_MOC_LITERAL(4, 25, 18), // "on_push30s_clicked"
QT_MOC_LITERAL(5, 44, 19), // "on_push1min_clicked"
QT_MOC_LITERAL(6, 64, 19), // "on_push5min_clicked"
QT_MOC_LITERAL(7, 84, 17), // "on_pushok_clicked"
QT_MOC_LITERAL(8, 102, 13), // "on_b1_clicked"
QT_MOC_LITERAL(9, 116, 13), // "on_b2_clicked"
QT_MOC_LITERAL(10, 130, 13), // "on_b3_clicked"
QT_MOC_LITERAL(11, 144, 13), // "on_b4_clicked"
QT_MOC_LITERAL(12, 158, 13), // "on_b5_clicked"
QT_MOC_LITERAL(13, 172, 13), // "on_b6_clicked"
QT_MOC_LITERAL(14, 186, 13), // "on_b7_clicked"
QT_MOC_LITERAL(15, 200, 13) // "on_b8_clicked"

    },
    "juego\0mecanismoA\0\0ontime\0on_push30s_clicked\0"
    "on_push1min_clicked\0on_push5min_clicked\0"
    "on_pushok_clicked\0on_b1_clicked\0"
    "on_b2_clicked\0on_b3_clicked\0on_b4_clicked\0"
    "on_b5_clicked\0on_b6_clicked\0on_b7_clicked\0"
    "on_b8_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_juego[] = {

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
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void juego::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        juego *_t = static_cast<juego *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mecanismoA(); break;
        case 1: _t->ontime(); break;
        case 2: _t->on_push30s_clicked(); break;
        case 3: _t->on_push1min_clicked(); break;
        case 4: _t->on_push5min_clicked(); break;
        case 5: _t->on_pushok_clicked(); break;
        case 6: _t->on_b1_clicked(); break;
        case 7: _t->on_b2_clicked(); break;
        case 8: _t->on_b3_clicked(); break;
        case 9: _t->on_b4_clicked(); break;
        case 10: _t->on_b5_clicked(); break;
        case 11: _t->on_b6_clicked(); break;
        case 12: _t->on_b7_clicked(); break;
        case 13: _t->on_b8_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject juego::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_juego.data,
      qt_meta_data_juego,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *juego::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *juego::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_juego.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int juego::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
