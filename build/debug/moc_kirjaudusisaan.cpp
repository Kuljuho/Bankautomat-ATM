/****************************************************************************
** Meta object code from reading C++ file 'kirjaudusisaan.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../bank-automat/kirjaudusisaan.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kirjaudusisaan.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_kirjauduSisaan_t {
    uint offsetsAndSizes[14];
    char stringdata0[15];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[13];
    char stringdata5[15];
    char stringdata6[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_kirjauduSisaan_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_kirjauduSisaan_t qt_meta_stringdata_kirjauduSisaan = {
    {
        QT_MOC_LITERAL(0, 14),  // "kirjauduSisaan"
        QT_MOC_LITERAL(15, 24),  // "on_nappiKirjaudu_clicked"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 17),  // "on_numero_clicked"
        QT_MOC_LITERAL(59, 12),  // "kirjauduSlot"
        QT_MOC_LITERAL(72, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(87, 5)   // "reply"
    },
    "kirjauduSisaan",
    "on_nappiKirjaudu_clicked",
    "",
    "on_numero_clicked",
    "kirjauduSlot",
    "QNetworkReply*",
    "reply"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_kirjauduSisaan[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    1,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

Q_CONSTINIT const QMetaObject kirjauduSisaan::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_kirjauduSisaan.offsetsAndSizes,
    qt_meta_data_kirjauduSisaan,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_kirjauduSisaan_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<kirjauduSisaan, std::true_type>,
        // method 'on_nappiKirjaudu_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_numero_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'kirjauduSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>
    >,
    nullptr
} };

void kirjauduSisaan::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<kirjauduSisaan *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_nappiKirjaudu_clicked(); break;
        case 1: _t->on_numero_clicked(); break;
        case 2: _t->kirjauduSlot((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *kirjauduSisaan::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *kirjauduSisaan::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_kirjauduSisaan.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int kirjauduSisaan::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
