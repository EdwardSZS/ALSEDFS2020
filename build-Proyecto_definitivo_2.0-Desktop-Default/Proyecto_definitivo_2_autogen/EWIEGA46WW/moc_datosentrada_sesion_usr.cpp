/****************************************************************************
** Meta object code from reading C++ file 'datosentrada_sesion_usr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Proyecto_definitivo_2.0/datosentrada_sesion_usr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datosentrada_sesion_usr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_datosentrada_sesion_usr_t {
    QByteArrayData data[7];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_datosentrada_sesion_usr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_datosentrada_sesion_usr_t qt_meta_stringdata_datosentrada_sesion_usr = {
    {
QT_MOC_LITERAL(0, 0, 23), // "datosentrada_sesion_usr"
QT_MOC_LITERAL(1, 24, 10), // "pasardatos"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 4), // "clik"
QT_MOC_LITERAL(4, 41, 21), // "on_Registrar2_clicked"
QT_MOC_LITERAL(5, 63, 13), // "on_ir_clicked"
QT_MOC_LITERAL(6, 77, 14) // "conect_ventana"

    },
    "datosentrada_sesion_usr\0pasardatos\0\0"
    "clik\0on_Registrar2_clicked\0on_ir_clicked\0"
    "conect_ventana"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_datosentrada_sesion_usr[] = {

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
       4,    0,   37,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void datosentrada_sesion_usr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        datosentrada_sesion_usr *_t = static_cast<datosentrada_sesion_usr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pasardatos((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_Registrar2_clicked(); break;
        case 2: _t->on_ir_clicked(); break;
        case 3: _t->conect_ventana(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (datosentrada_sesion_usr::*_t)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&datosentrada_sesion_usr::pasardatos)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject datosentrada_sesion_usr::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_datosentrada_sesion_usr.data,
      qt_meta_data_datosentrada_sesion_usr,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *datosentrada_sesion_usr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *datosentrada_sesion_usr::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_datosentrada_sesion_usr.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int datosentrada_sesion_usr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void datosentrada_sesion_usr::pasardatos(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
