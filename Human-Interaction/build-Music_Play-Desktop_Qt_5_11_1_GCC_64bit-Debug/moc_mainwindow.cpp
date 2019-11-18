/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Music_Play/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[27];
    char stringdata0[339];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "AlreadyGetLink"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "AlreadyGetLyric"
QT_MOC_LITERAL(4, 43, 17), // "AlreadyGetKeyword"
QT_MOC_LITERAL(5, 61, 13), // "AlreadyToPlay"
QT_MOC_LITERAL(6, 75, 20), // "AlreadyGetSuggestion"
QT_MOC_LITERAL(7, 96, 10), // "Init_Reply"
QT_MOC_LITERAL(8, 107, 19), // "GetSerachByKeywords"
QT_MOC_LITERAL(9, 127, 7), // "keyword"
QT_MOC_LITERAL(10, 135, 15), // "GetLinkBySongId"
QT_MOC_LITERAL(11, 151, 6), // "SongId"
QT_MOC_LITERAL(12, 158, 16), // "GetLyricBySongId"
QT_MOC_LITERAL(13, 175, 18), // "AddMusicInPlayList"
QT_MOC_LITERAL(14, 194, 8), // "SongInfo"
QT_MOC_LITERAL(15, 203, 14), // "ShowSuggestion"
QT_MOC_LITERAL(16, 218, 8), // "SongName"
QT_MOC_LITERAL(17, 227, 22), // "QPair<QString,QString>"
QT_MOC_LITERAL(18, 250, 10), // "SingerInfo"
QT_MOC_LITERAL(19, 261, 13), // "GetSingerInfo"
QT_MOC_LITERAL(20, 275, 5), // "array"
QT_MOC_LITERAL(21, 281, 11), // "resolve_lrc"
QT_MOC_LITERAL(22, 293, 2), // "ly"
QT_MOC_LITERAL(23, 296, 10), // "UpdateTime"
QT_MOC_LITERAL(24, 307, 4), // "time"
QT_MOC_LITERAL(25, 312, 16), // "total_time_value"
QT_MOC_LITERAL(26, 329, 9) // "ShowLyric"

    },
    "MainWindow\0AlreadyGetLink\0\0AlreadyGetLyric\0"
    "AlreadyGetKeyword\0AlreadyToPlay\0"
    "AlreadyGetSuggestion\0Init_Reply\0"
    "GetSerachByKeywords\0keyword\0GetLinkBySongId\0"
    "SongId\0GetLyricBySongId\0AddMusicInPlayList\0"
    "SongInfo\0ShowSuggestion\0SongName\0"
    "QPair<QString,QString>\0SingerInfo\0"
    "GetSingerInfo\0array\0resolve_lrc\0ly\0"
    "UpdateTime\0time\0total_time_value\0"
    "ShowLyric"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    0,   91,    2, 0x06 /* Public */,
       5,    0,   92,    2, 0x06 /* Public */,
       6,    0,   93,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    0,   94,    2, 0x02 /* Public */,
       8,    1,   95,    2, 0x02 /* Public */,
      10,    1,   98,    2, 0x02 /* Public */,
      12,    1,  101,    2, 0x02 /* Public */,
      13,    2,  104,    2, 0x02 /* Public */,
      15,    3,  109,    2, 0x02 /* Public */,
      19,    1,  116,    2, 0x02 /* Public */,
      21,    1,  119,    2, 0x02 /* Public */,
      23,    2,  122,    2, 0x02 /* Public */,
      26,    0,  127,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   14,   11,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 17, QMetaType::QString,   16,   18,   11,
    0x80000000 | 17, QMetaType::QJsonArray,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   24,   25,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AlreadyGetLink(); break;
        case 1: _t->AlreadyGetLyric(); break;
        case 2: _t->AlreadyGetKeyword(); break;
        case 3: _t->AlreadyToPlay(); break;
        case 4: _t->AlreadyGetSuggestion(); break;
        case 5: _t->Init_Reply(); break;
        case 6: _t->GetSerachByKeywords((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->GetLinkBySongId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->GetLyricBySongId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->AddMusicInPlayList((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->ShowSuggestion((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QPair<QString,QString>(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 11: { QPair<QString,QString> _r = _t->GetSingerInfo((*reinterpret_cast< QJsonArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPair<QString,QString>*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->resolve_lrc((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->UpdateTime((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 14: _t->ShowLyric(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::AlreadyGetLink)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::AlreadyGetLyric)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::AlreadyGetKeyword)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::AlreadyToPlay)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::AlreadyGetSuggestion)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::AlreadyGetLink()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::AlreadyGetLyric()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::AlreadyGetKeyword()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MainWindow::AlreadyToPlay()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainWindow::AlreadyGetSuggestion()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
