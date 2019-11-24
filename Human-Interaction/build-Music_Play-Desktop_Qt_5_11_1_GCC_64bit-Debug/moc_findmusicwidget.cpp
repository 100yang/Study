/****************************************************************************
** Meta object code from reading C++ file 'findmusicwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Music_Play/findmusicwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findmusicwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FindMusicWidget_t {
    QByteArrayData data[15];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FindMusicWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FindMusicWidget_t qt_meta_stringdata_FindMusicWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FindMusicWidget"
QT_MOC_LITERAL(1, 16, 22), // "AlreadyGetSerachResult"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 18), // "AlreadyGetSongInfo"
QT_MOC_LITERAL(4, 59, 24), // "AlreadyAddLikeMusic_Find"
QT_MOC_LITERAL(5, 84, 25), // "AlreadyGetRecommendResult"
QT_MOC_LITERAL(6, 110, 15), // "GetSerachResult"
QT_MOC_LITERAL(7, 126, 14), // "DisplayResult*"
QT_MOC_LITERAL(8, 141, 1), // "w"
QT_MOC_LITERAL(9, 143, 4), // "area"
QT_MOC_LITERAL(10, 148, 15), // "GetSingerResult"
QT_MOC_LITERAL(11, 164, 13), // "GetRankResult"
QT_MOC_LITERAL(12, 178, 18), // "GetSongTableResult"
QT_MOC_LITERAL(13, 197, 11), // "GetTVResult"
QT_MOC_LITERAL(14, 209, 18) // "GetRecommendResult"

    },
    "FindMusicWidget\0AlreadyGetSerachResult\0"
    "\0AlreadyGetSongInfo\0AlreadyAddLikeMusic_Find\0"
    "AlreadyGetRecommendResult\0GetSerachResult\0"
    "DisplayResult*\0w\0area\0GetSingerResult\0"
    "GetRankResult\0GetSongTableResult\0"
    "GetTVResult\0GetRecommendResult"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FindMusicWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    2,   68,    2, 0x02 /* Public */,
      10,    0,   73,    2, 0x02 /* Public */,
      11,    2,   74,    2, 0x02 /* Public */,
      12,    0,   79,    2, 0x02 /* Public */,
      13,    0,   80,    2, 0x02 /* Public */,
      14,    0,   81,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FindMusicWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FindMusicWidget *_t = static_cast<FindMusicWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AlreadyGetSerachResult(); break;
        case 1: _t->AlreadyGetSongInfo(); break;
        case 2: _t->AlreadyAddLikeMusic_Find(); break;
        case 3: _t->AlreadyGetRecommendResult(); break;
        case 4: _t->GetSerachResult((*reinterpret_cast< DisplayResult*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->GetSingerResult(); break;
        case 6: _t->GetRankResult((*reinterpret_cast< DisplayResult*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->GetSongTableResult(); break;
        case 8: _t->GetTVResult(); break;
        case 9: _t->GetRecommendResult(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DisplayResult* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< DisplayResult* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FindMusicWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FindMusicWidget::AlreadyGetSerachResult)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FindMusicWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FindMusicWidget::AlreadyGetSongInfo)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FindMusicWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FindMusicWidget::AlreadyAddLikeMusic_Find)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FindMusicWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FindMusicWidget::AlreadyGetRecommendResult)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FindMusicWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FindMusicWidget.data,
      qt_meta_data_FindMusicWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FindMusicWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FindMusicWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FindMusicWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FindMusicWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void FindMusicWidget::AlreadyGetSerachResult()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FindMusicWidget::AlreadyGetSongInfo()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FindMusicWidget::AlreadyAddLikeMusic_Find()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void FindMusicWidget::AlreadyGetRecommendResult()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
