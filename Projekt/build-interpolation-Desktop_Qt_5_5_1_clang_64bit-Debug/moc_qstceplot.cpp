/****************************************************************************
** Meta object code from reading C++ file 'qstceplot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../interpolation/qStcePlot/qstceplot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qstceplot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QStcePlot_t {
    QByteArrayData data[10];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QStcePlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QStcePlot_t qt_meta_stringdata_QStcePlot = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QStcePlot"
QT_MOC_LITERAL(1, 10, 16), // "plotOnClickEvent"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "xVal"
QT_MOC_LITERAL(4, 33, 4), // "yVal"
QT_MOC_LITERAL(5, 38, 15), // "Qt::MouseButton"
QT_MOC_LITERAL(6, 54, 3), // "btn"
QT_MOC_LITERAL(7, 58, 14), // "mouseClickRecv"
QT_MOC_LITERAL(8, 73, 12), // "QMouseEvent*"
QT_MOC_LITERAL(9, 86, 5) // "event"

    },
    "QStcePlot\0plotOnClickEvent\0\0xVal\0yVal\0"
    "Qt::MouseButton\0btn\0mouseClickRecv\0"
    "QMouseEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QStcePlot[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   31,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, 0x80000000 | 5,    3,    4,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void QStcePlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QStcePlot *_t = static_cast<QStcePlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->plotOnClickEvent((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< Qt::MouseButton(*)>(_a[3]))); break;
        case 1: _t->mouseClickRecv((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QStcePlot::*_t)(double , double , Qt::MouseButton );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QStcePlot::plotOnClickEvent)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QStcePlot::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QStcePlot.data,
      qt_meta_data_QStcePlot,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QStcePlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QStcePlot::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QStcePlot.stringdata0))
        return static_cast<void*>(const_cast< QStcePlot*>(this));
    return QWidget::qt_metacast(_clname);
}

int QStcePlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QStcePlot::plotOnClickEvent(double _t1, double _t2, Qt::MouseButton _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
