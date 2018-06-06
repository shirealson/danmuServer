/****************************************************************************
** Meta object code from reading C++ file 'controlBox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../controlBox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controlBox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_controlBox_t {
    QByteArrayData data[9];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_controlBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_controlBox_t qt_meta_stringdata_controlBox = {
    {
QT_MOC_LITERAL(0, 0, 10), // "controlBox"
QT_MOC_LITERAL(1, 11, 16), // "SGchangePlayTime"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 5), // "value"
QT_MOC_LITERAL(4, 35, 13), // "SGchangeFrame"
QT_MOC_LITERAL(5, 49, 4), // "exit"
QT_MOC_LITERAL(6, 54, 25), // "on_changePlayTime_clicked"
QT_MOC_LITERAL(7, 80, 22), // "on_changeFrame_clicked"
QT_MOC_LITERAL(8, 103, 15) // "on_exit_clicked"

    },
    "controlBox\0SGchangePlayTime\0\0value\0"
    "SGchangeFrame\0exit\0on_changePlayTime_clicked\0"
    "on_changeFrame_clicked\0on_exit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_controlBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    0,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   51,    2, 0x08 /* Private */,
       7,    0,   52,    2, 0x08 /* Private */,
       8,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void controlBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        controlBox *_t = static_cast<controlBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SGchangePlayTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SGchangeFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->exit(); break;
        case 3: _t->on_changePlayTime_clicked(); break;
        case 4: _t->on_changeFrame_clicked(); break;
        case 5: _t->on_exit_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (controlBox::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&controlBox::SGchangePlayTime)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (controlBox::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&controlBox::SGchangeFrame)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (controlBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&controlBox::exit)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject controlBox::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_controlBox.data,
      qt_meta_data_controlBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *controlBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *controlBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_controlBox.stringdata0))
        return static_cast<void*>(const_cast< controlBox*>(this));
    return QDialog::qt_metacast(_clname);
}

int controlBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void controlBox::SGchangePlayTime(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void controlBox::SGchangeFrame(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void controlBox::exit()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
