/****************************************************************************
** Meta object code from reading C++ file 'tcpclientsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QuickTalk_Client/tcpclientsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpclientsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TcpClientSocket_t {
    QByteArrayData data[17];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TcpClientSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TcpClientSocket_t qt_meta_stringdata_TcpClientSocket = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TcpClientSocket"
QT_MOC_LITERAL(1, 16, 11), // "dealMessage"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 3), // "msg"
QT_MOC_LITERAL(4, 33, 13), // "login_no_name"
QT_MOC_LITERAL(5, 47, 13), // "login_success"
QT_MOC_LITERAL(6, 61, 13), // "login_failure"
QT_MOC_LITERAL(7, 75, 10), // "login_have"
QT_MOC_LITERAL(8, 86, 14), // "enroll_failure"
QT_MOC_LITERAL(9, 101, 14), // "enroll_success"
QT_MOC_LITERAL(10, 116, 18), // "enroll_name_exists"
QT_MOC_LITERAL(11, 135, 18), // "return_friend_list"
QT_MOC_LITERAL(12, 154, 10), // "friend_add"
QT_MOC_LITERAL(13, 165, 17), // "return_group_list"
QT_MOC_LITERAL(14, 183, 7), // "recvMsg"
QT_MOC_LITERAL(15, 191, 9), // "new_Group"
QT_MOC_LITERAL(16, 201, 14) // "receiveMessage"

    },
    "TcpClientSocket\0dealMessage\0\0msg\0"
    "login_no_name\0login_success\0login_failure\0"
    "login_have\0enroll_failure\0enroll_success\0"
    "enroll_name_exists\0return_friend_list\0"
    "friend_add\0return_group_list\0recvMsg\0"
    "new_Group\0receiveMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TcpClientSocket[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    0,   87,    2, 0x06 /* Public */,
       5,    0,   88,    2, 0x06 /* Public */,
       6,    0,   89,    2, 0x06 /* Public */,
       7,    0,   90,    2, 0x06 /* Public */,
       8,    0,   91,    2, 0x06 /* Public */,
       9,    0,   92,    2, 0x06 /* Public */,
      10,    0,   93,    2, 0x06 /* Public */,
      11,    1,   94,    2, 0x06 /* Public */,
      12,    1,   97,    2, 0x06 /* Public */,
      13,    1,  100,    2, 0x06 /* Public */,
      14,    1,  103,    2, 0x06 /* Public */,
      15,    1,  106,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  109,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void TcpClientSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TcpClientSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dealMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->login_no_name(); break;
        case 2: _t->login_success(); break;
        case 3: _t->login_failure(); break;
        case 4: _t->login_have(); break;
        case 5: _t->enroll_failure(); break;
        case 6: _t->enroll_success(); break;
        case 7: _t->enroll_name_exists(); break;
        case 8: _t->return_friend_list((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->friend_add((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->return_group_list((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->recvMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->new_Group((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->receiveMessage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TcpClientSocket::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpClientSocket::dealMessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TcpClientSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpClientSocket::login_no_name)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TcpClientSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpClientSocket::login_success)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TcpClientSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpClientSocket::login_failure)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TcpClientSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpClientSocket::login_have)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (TcpClientSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpClientSocket::enroll_failure)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (TcpClientSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpClientSocket::enroll_success)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (TcpClientSocket::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpClientSocket::enroll_name_exists)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (TcpClientSocket::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpClientSocket::return_friend_list)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (TcpClientSocket::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpClientSocket::friend_add)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (TcpClientSocket::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpClientSocket::return_group_list)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (TcpClientSocket::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpClientSocket::recvMsg)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (TcpClientSocket::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TcpClientSocket::new_Group)) {
                *result = 12;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TcpClientSocket::staticMetaObject = { {
    &QTcpSocket::staticMetaObject,
    qt_meta_stringdata_TcpClientSocket.data,
    qt_meta_data_TcpClientSocket,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TcpClientSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TcpClientSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TcpClientSocket.stringdata0))
        return static_cast<void*>(this);
    return QTcpSocket::qt_metacast(_clname);
}

int TcpClientSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpSocket::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void TcpClientSocket::dealMessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TcpClientSocket::login_no_name()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TcpClientSocket::login_success()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TcpClientSocket::login_failure()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TcpClientSocket::login_have()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TcpClientSocket::enroll_failure()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void TcpClientSocket::enroll_success()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void TcpClientSocket::enroll_name_exists()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void TcpClientSocket::return_friend_list(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void TcpClientSocket::friend_add(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void TcpClientSocket::return_group_list(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void TcpClientSocket::recvMsg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void TcpClientSocket::new_Group(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
