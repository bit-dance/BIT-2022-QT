/****************************************************************************
** Meta object code from reading C++ file 'login.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../QuickTalk_Client/login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Login_t {
    QByteArrayData data[17];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Login_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Login_t qt_meta_stringdata_Login = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Login"
QT_MOC_LITERAL(1, 6, 8), // "SetLogin"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 16), // "on_login_clicked"
QT_MOC_LITERAL(4, 33, 16), // "on_close_clicked"
QT_MOC_LITERAL(5, 50, 17), // "on_enroll_clicked"
QT_MOC_LITERAL(6, 68, 7), // "success"
QT_MOC_LITERAL(7, 76, 7), // "failure"
QT_MOC_LITERAL(8, 84, 7), // "no_name"
QT_MOC_LITERAL(9, 92, 9), // "havelogin"
QT_MOC_LITERAL(10, 102, 7), // "receive"
QT_MOC_LITERAL(11, 110, 8), // "suername"
QT_MOC_LITERAL(12, 119, 8), // "passward"
QT_MOC_LITERAL(13, 128, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(14, 148, 26), // "on_name_currentTextChanged"
QT_MOC_LITERAL(15, 175, 4), // "arg1"
QT_MOC_LITERAL(16, 180, 15) // "on_hide_clicked"

    },
    "Login\0SetLogin\0\0on_login_clicked\0"
    "on_close_clicked\0on_enroll_clicked\0"
    "success\0failure\0no_name\0havelogin\0"
    "receive\0suername\0passward\0on_checkBox_clicked\0"
    "on_name_currentTextChanged\0arg1\0"
    "on_hide_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Login[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       3,    0,   77,    2, 0x08 /* Private */,
       4,    0,   78,    2, 0x08 /* Private */,
       5,    0,   79,    2, 0x08 /* Private */,
       6,    0,   80,    2, 0x08 /* Private */,
       7,    0,   81,    2, 0x08 /* Private */,
       8,    0,   82,    2, 0x08 /* Private */,
       9,    0,   83,    2, 0x08 /* Private */,
      10,    2,   84,    2, 0x08 /* Private */,
      13,    0,   89,    2, 0x08 /* Private */,
      14,    1,   90,    2, 0x08 /* Private */,
      16,    0,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,

       0        // eod
};

void Login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Login *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetLogin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_login_clicked(); break;
        case 2: _t->on_close_clicked(); break;
        case 3: _t->on_enroll_clicked(); break;
        case 4: _t->success(); break;
        case 5: _t->failure(); break;
        case 6: _t->no_name(); break;
        case 7: _t->havelogin(); break;
        case 8: _t->receive((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->on_checkBox_clicked(); break;
        case 10: _t->on_name_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_hide_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Login::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Login.data,
    qt_meta_data_Login,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Login::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Login.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
