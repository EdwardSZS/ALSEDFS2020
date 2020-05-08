/****************************************************************************
** Meta object code from reading C++ file 'inicio_o_crear_usr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../inicio_o_crear_usr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inicio_o_crear_usr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_inicio_o_crear_usr_t {
    QByteArrayData data[8];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_inicio_o_crear_usr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_inicio_o_crear_usr_t qt_meta_stringdata_inicio_o_crear_usr = {
    {
QT_MOC_LITERAL(0, 0, 18), // "inicio_o_crear_usr"
QT_MOC_LITERAL(1, 19, 11), // "pasardatosa"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "click"
QT_MOC_LITERAL(4, 38, 11), // "con_recibir"
QT_MOC_LITERAL(5, 50, 2), // "cx"
QT_MOC_LITERAL(6, 53, 19), // "on_inicio_s_clicked"
QT_MOC_LITERAL(7, 73, 18) // "on_crear_s_clicked"

    },
    "inicio_o_crear_usr\0pasardatosa\0\0click\0"
    "con_recibir\0cx\0on_inicio_s_clicked\0"
    "on_crear_s_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_inicio_o_crear_usr[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x0a /* Public */,
       6,    0,   40,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void inicio_o_crear_usr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        inicio_o_crear_usr *_t = static_cast<inicio_o_crear_usr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pasardatosa((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->con_recibir((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_inicio_s_clicked(); break;
        case 3: _t->on_crear_s_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (inicio_o_crear_usr::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&inicio_o_crear_usr::pasardatosa)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject inicio_o_crear_usr::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_inicio_o_crear_usr.data,
      qt_meta_data_inicio_o_crear_usr,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *inicio_o_crear_usr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *inicio_o_crear_usr::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_inicio_o_crear_usr.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int inicio_o_crear_usr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void inicio_o_crear_usr::pasardatosa(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
