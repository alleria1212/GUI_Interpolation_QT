/****************************************************************************
** Meta object code from reading C++ file 'interpolationcontrol.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interpolation/interpolationcontrol.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interpolationcontrol.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InterpolationControl_t {
    QByteArrayData data[8];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InterpolationControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InterpolationControl_t qt_meta_stringdata_InterpolationControl = {
    {
QT_MOC_LITERAL(0, 0, 20), // "InterpolationControl"
QT_MOC_LITERAL(1, 21, 20), // "interpolationChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 21), // "interpolationComplete"
QT_MOC_LITERAL(4, 65, 17), // "changeActiveModel"
QT_MOC_LITERAL(5, 83, 22), // "calculateInterpolation"
QT_MOC_LITERAL(6, 106, 15), // "QVector<double>"
QT_MOC_LITERAL(7, 122, 16) // "QVector<double>&"

    },
    "InterpolationControl\0interpolationChanged\0"
    "\0interpolationComplete\0changeActiveModel\0"
    "calculateInterpolation\0QVector<double>\0"
    "QVector<double>&"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InterpolationControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       3,    0,   44,    2, 0x06 /* Public */,
       1,    0,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   46,    2, 0x0a /* Public */,
       5,    4,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 7, 0x80000000 | 7,    2,    2,    2,    2,

       0        // eod
};

void InterpolationControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InterpolationControl *_t = static_cast<InterpolationControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->interpolationChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->interpolationComplete(); break;
        case 2: _t->interpolationChanged(); break;
        case 3: _t->changeActiveModel((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->calculateInterpolation((*reinterpret_cast< const QVector<double>(*)>(_a[1])),(*reinterpret_cast< const QVector<double>(*)>(_a[2])),(*reinterpret_cast< QVector<double>(*)>(_a[3])),(*reinterpret_cast< QVector<double>(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InterpolationControl::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InterpolationControl::interpolationChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (InterpolationControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InterpolationControl::interpolationComplete)) {
                *result = 1;
            }
        }
        {
            typedef void (InterpolationControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InterpolationControl::interpolationChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject InterpolationControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InterpolationControl.data,
      qt_meta_data_InterpolationControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *InterpolationControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InterpolationControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_InterpolationControl.stringdata0))
        return static_cast<void*>(const_cast< InterpolationControl*>(this));
    return QWidget::qt_metacast(_clname);
}

int InterpolationControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void InterpolationControl::interpolationChanged(QString _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InterpolationControl::interpolationComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void InterpolationControl::interpolationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
