/****************************************************************************
** Meta object code from reading C++ file 'displayresult.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Music_Play/displayresult.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'displayresult.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DisplayResult_t {
    QByteArrayData data[7];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DisplayResult_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DisplayResult_t qt_meta_stringdata_DisplayResult = {
    {
QT_MOC_LITERAL(0, 0, 13), // "DisplayResult"
QT_MOC_LITERAL(1, 14, 15), // "AlreadGetSongId"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 19), // "AlreadyAddLikeMusic"
QT_MOC_LITERAL(4, 51, 15), // "RemoveLikeMusic"
QT_MOC_LITERAL(5, 67, 13), // "AddInPlayList"
QT_MOC_LITERAL(6, 81, 14) // "AddInLikeMusic"

    },
    "DisplayResult\0AlreadGetSongId\0\0"
    "AlreadyAddLikeMusic\0RemoveLikeMusic\0"
    "AddInPlayList\0AddInLikeMusic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DisplayResult[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DisplayResult::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DisplayResult *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AlreadGetSongId(); break;
        case 1: _t->AlreadyAddLikeMusic(); break;
        case 2: _t->RemoveLikeMusic(); break;
        case 3: _t->AddInPlayList(); break;
        case 4: _t->AddInLikeMusic(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DisplayResult::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DisplayResult::AlreadGetSongId)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DisplayResult::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DisplayResult::AlreadyAddLikeMusic)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DisplayResult::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DisplayResult::RemoveLikeMusic)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DisplayResult::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_DisplayResult.data,
    qt_meta_data_DisplayResult,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DisplayResult::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DisplayResult::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DisplayResult.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DisplayResult::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void DisplayResult::AlreadGetSongId()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DisplayResult::AlreadyAddLikeMusic()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DisplayResult::RemoveLikeMusic()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
