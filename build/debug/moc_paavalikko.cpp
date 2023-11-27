/****************************************************************************
** Meta object code from reading C++ file 'paavalikko.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../bank-automat/paavalikko.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paavalikko.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_paaValikko_t {
    uint offsetsAndSizes[20];
    char stringdata0[11];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[27];
    char stringdata5[22];
    char stringdata6[9];
    char stringdata7[15];
    char stringdata8[6];
    char stringdata9[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_paaValikko_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_paaValikko_t qt_meta_stringdata_paaValikko = {
    {
        QT_MOC_LITERAL(0, 10),  // "paaValikko"
        QT_MOC_LITERAL(11, 21),  // "on_nostoNappi_clicked"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 25),  // "on_lahjoitusNappi_clicked"
        QT_MOC_LITERAL(60, 26),  // "on_tapahtumatNappi_clicked"
        QT_MOC_LITERAL(87, 21),  // "on_saldoNappi_clicked"
        QT_MOC_LITERAL(109, 8),  // "haeSaldo"
        QT_MOC_LITERAL(118, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(133, 5),  // "reply"
        QT_MOC_LITERAL(139, 17)   // "haeTilitapahtumat"
    },
    "paaValikko",
    "on_nostoNappi_clicked",
    "",
    "on_lahjoitusNappi_clicked",
    "on_tapahtumatNappi_clicked",
    "on_saldoNappi_clicked",
    "haeSaldo",
    "QNetworkReply*",
    "reply",
    "haeTilitapahtumat"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_paaValikko[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    1,   54,    2, 0x08,    5 /* Private */,
       9,    1,   57,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject paaValikko::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_paaValikko.offsetsAndSizes,
    qt_meta_data_paaValikko,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_paaValikko_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<paaValikko, std::true_type>,
        // method 'on_nostoNappi_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_lahjoitusNappi_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_tapahtumatNappi_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saldoNappi_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'haeSaldo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'haeTilitapahtumat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>
    >,
    nullptr
} };

void paaValikko::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<paaValikko *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_nostoNappi_clicked(); break;
        case 1: _t->on_lahjoitusNappi_clicked(); break;
        case 2: _t->on_tapahtumatNappi_clicked(); break;
        case 3: _t->on_saldoNappi_clicked(); break;
        case 4: _t->haeSaldo((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 5: _t->haeTilitapahtumat((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *paaValikko::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *paaValikko::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_paaValikko.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int paaValikko::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
