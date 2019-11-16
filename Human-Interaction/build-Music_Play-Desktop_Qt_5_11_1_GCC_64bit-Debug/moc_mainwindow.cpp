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
    QByteArrayData data[21];
    char stringdata0[264];
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
QT_MOC_LITERAL(7, 96, 9), // "IWantKnow"
QT_MOC_LITERAL(8, 106, 10), // "Init_Reply"
QT_MOC_LITERAL(9, 117, 23), // "GetSuggestionByKeywords"
QT_MOC_LITERAL(10, 141, 7), // "keyword"
QT_MOC_LITERAL(11, 149, 15), // "GetLinkBySongId"
QT_MOC_LITERAL(12, 165, 6), // "SongId"
QT_MOC_LITERAL(13, 172, 16), // "GetLyricBySongId"
QT_MOC_LITERAL(14, 189, 18), // "AddMusicInPlayList"
QT_MOC_LITERAL(15, 208, 8), // "SongInfo"
QT_MOC_LITERAL(16, 217, 14), // "ShowSuggestion"
QT_MOC_LITERAL(17, 232, 8), // "SongName"
QT_MOC_LITERAL(18, 241, 6), // "Singer"
QT_MOC_LITERAL(19, 248, 9), // "GetSinger"
QT_MOC_LITERAL(20, 258, 5) // "array"

    },
    "MainWindow\0AlreadyGetLink\0\0AlreadyGetLyric\0"
    "AlreadyGetKeyword\0AlreadyToPlay\0"
    "AlreadyGetSuggestion\0IWantKnow\0"
    "Init_Reply\0GetSuggestionByKeywords\0"
    "keyword\0GetLinkBySongId\0SongId\0"
    "GetLyricBySongId\0AddMusicInPlayList\0"
    "SongInfo\0ShowSuggestion\0SongName\0"
    "Singer\0GetSinger\0array"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    0,   80,    2, 0x06 /* Public */,
       4,    0,   81,    2, 0x06 /* Public */,
       5,    0,   82,    2, 0x06 /* Public */,
       6,    0,   83,    2, 0x06 /* Public */,
       7,    0,   84,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       8,    0,   85,    2, 0x02 /* Public */,
       9,    1,   86,    2, 0x02 /* Public */,
      11,    1,   89,    2, 0x02 /* Public */,
      13,    1,   92,    2, 0x02 /* Public */,
      14,    2,   95,    2, 0x02 /* Public */,
      16,    3,  100,    2, 0x02 /* Public */,
      19,    1,  107,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   15,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   17,   18,   12,
    QMetaType::QString, QMetaType::QJsonArray,   20,

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
        case 5: _t->IWantKnow(); break;
        case 6: _t->Init_Reply(); break;
        case 7: _t->GetSuggestionByKeywords((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->GetLinkBySongId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->GetLyricBySongId((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->AddMusicInPlayList((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: _t->ShowSuggestion((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 12: { QString _r = _t->GetSinger((*reinterpret_cast< QJsonArray(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::IWantKnow)) {
                *result = 5;
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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
void MainWindow::IWantKnow()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
