/****************************************************************************
** Meta object code from reading C++ file 'danmuServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../danmuServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'danmuServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_danmuServer_t {
    QByteArrayData data[9];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_danmuServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_danmuServer_t qt_meta_stringdata_danmuServer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "danmuServer"
QT_MOC_LITERAL(1, 12, 11), // "replayDanmu"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "pendingMessage"
QT_MOC_LITERAL(4, 40, 11), // "changeFrame"
QT_MOC_LITERAL(5, 52, 8), // "Newframe"
QT_MOC_LITERAL(6, 61, 13), // "changeSAFrame"
QT_MOC_LITERAL(7, 75, 16), // "changeSAPlayTime"
QT_MOC_LITERAL(8, 92, 7) // "newtime"

    },
    "danmuServer\0replayDanmu\0\0pendingMessage\0"
    "changeFrame\0Newframe\0changeSAFrame\0"
    "changeSAPlayTime\0newtime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_danmuServer[] = {

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
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       7,    1,   47,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void danmuServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        danmuServer *_t = static_cast<danmuServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->replayDanmu(); break;
        case 1: _t->pendingMessage(); break;
        case 2: _t->changeFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->changeSAFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->changeSAPlayTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject danmuServer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_danmuServer.data,
      qt_meta_data_danmuServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *danmuServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *danmuServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_danmuServer.stringdata0))
        return static_cast<void*>(const_cast< danmuServer*>(this));
    return QWidget::qt_metacast(_clname);
}

int danmuServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
