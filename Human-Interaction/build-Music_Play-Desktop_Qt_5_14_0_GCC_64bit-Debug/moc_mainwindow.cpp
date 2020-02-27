/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Music_Play/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[32];
    char stringdata0[376];
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
QT_MOC_LITERAL(7, 96, 19), // "AlreadyGetHotSerach"
QT_MOC_LITERAL(8, 116, 4), // "Init"
QT_MOC_LITERAL(9, 121, 5), // "Login"
QT_MOC_LITERAL(10, 127, 5), // "Phone"
QT_MOC_LITERAL(11, 133, 6), // "Passwd"
QT_MOC_LITERAL(12, 140, 19), // "GetSerachByKeywords"
QT_MOC_LITERAL(13, 160, 7), // "keyword"
QT_MOC_LITERAL(14, 168, 4), // "page"
QT_MOC_LITERAL(15, 173, 15), // "GetLinkBySongId"
QT_MOC_LITERAL(16, 189, 6), // "SongId"
QT_MOC_LITERAL(17, 196, 16), // "GetLyricBySongId"
QT_MOC_LITERAL(18, 213, 18), // "AddMusicInPlayList"
QT_MOC_LITERAL(19, 232, 8), // "SongInfo"
QT_MOC_LITERAL(20, 241, 13), // "GetSingerInfo"
QT_MOC_LITERAL(21, 255, 22), // "QPair<QString,QString>"
QT_MOC_LITERAL(22, 278, 5), // "array"
QT_MOC_LITERAL(23, 284, 11), // "resolve_lrc"
QT_MOC_LITERAL(24, 296, 2), // "ly"
QT_MOC_LITERAL(25, 299, 10), // "UpdateTime"
QT_MOC_LITERAL(26, 310, 4), // "time"
QT_MOC_LITERAL(27, 315, 16), // "total_time_value"
QT_MOC_LITERAL(28, 332, 9), // "ShowLyric"
QT_MOC_LITERAL(29, 342, 12), // "GetHotSerach"
QT_MOC_LITERAL(30, 355, 9), // "AddListen"
QT_MOC_LITERAL(31, 365, 10) // "CheckMusic"

    },
    "MainWindow\0AlreadyGetLink\0\0AlreadyGetLyric\0"
    "AlreadyGetKeyword\0AlreadyToPlay\0"
    "AlreadyGetSuggestion\0AlreadyGetHotSerach\0"
    "Init\0Login\0Phone\0Passwd\0GetSerachByKeywords\0"
    "keyword\0page\0GetLinkBySongId\0SongId\0"
    "GetLyricBySongId\0AddMusicInPlayList\0"
    "SongInfo\0GetSingerInfo\0QPair<QString,QString>\0"
    "array\0resolve_lrc\0ly\0UpdateTime\0time\0"
    "total_time_value\0ShowLyric\0GetHotSerach\0"
    "AddListen\0CheckMusic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    0,  110,    2, 0x06 /* Public */,
       4,    0,  111,    2, 0x06 /* Public */,
       5,    0,  112,    2, 0x06 /* Public */,
       6,    0,  113,    2, 0x06 /* Public */,
       7,    0,  114,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    0,  115,    2, 0x02 /* Public */,
       9,    2,  116,    2, 0x02 /* Public */,
      12,    2,  121,    2, 0x02 /* Public */,
      15,    1,  126,    2, 0x02 /* Public */,
      17,    1,  129,    2, 0x02 /* Public */,
      18,    2,  132,    2, 0x02 /* Public */,
      20,    1,  137,    2, 0x02 /* Public */,
      23,    1,  140,    2, 0x02 /* Public */,
      25,    2,  143,    2, 0x02 /* Public */,
      28,    0,  148,    2, 0x02 /* Public */,
      29,    0,  149,    2, 0x02 /* Public */,
      30,    0,  150,    2, 0x02 /* Public */,
      31,    1,  151,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   13,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   19,   16,
    0x80000000 | 21, QMetaType::QJsonArray,   22,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   26,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   16,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AlreadyGetLink(); break;
        case 1: _t->AlreadyGetLyric(); break;
        case 2: _t->AlreadyGetKeyword(); break;
        case 3: _t->AlreadyToPlay(); break;
        case 4: _t->AlreadyGetSuggestion(); break;
        case 5: _t->AlreadyGetHotSerach(); break;
        case 6: _t->Init(); break;
        case 7: _t->Login((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->GetSerachByKeywords((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->GetLinkBySongId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->GetLyricBySongId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->AddMusicInPlayList((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 12: { QPair<QString,QString> _r = _t->GetSingerInfo((*reinterpret_cast< QJsonArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPair<QString,QString>*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->resolve_lrc((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->UpdateTime((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 15: _t->ShowLyric(); break;
        case 16: _t->GetHotSerach(); break;
        case 17: _t->AddListen(); break;
        case 18: { bool _r = _t->CheckMusic((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
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
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::AlreadyGetHotSerach)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


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
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
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

// SIGNAL 5
void MainWindow::AlreadyGetHotSerach()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
