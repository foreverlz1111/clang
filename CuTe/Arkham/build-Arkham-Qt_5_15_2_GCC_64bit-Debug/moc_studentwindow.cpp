/****************************************************************************
** Meta object code from reading C++ file 'studentwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Arkham/studentwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'studentwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StudentWindow_t {
    QByteArrayData data[17];
    char stringdata0[346];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StudentWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StudentWindow_t qt_meta_stringdata_StudentWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "StudentWindow"
QT_MOC_LITERAL(1, 14, 23), // "on_close_button_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 22), // "on_mini_button_clicked"
QT_MOC_LITERAL(4, 62, 11), // "time_update"
QT_MOC_LITERAL(5, 74, 24), // "on_pushButton_37_clicked"
QT_MOC_LITERAL(6, 99, 22), // "update_start_time_left"
QT_MOC_LITERAL(7, 122, 24), // "on_pushButton_22_clicked"
QT_MOC_LITERAL(8, 147, 21), // "update_exam_time_left"
QT_MOC_LITERAL(9, 169, 26), // "on_pushButton_next_clicked"
QT_MOC_LITERAL(10, 196, 14), // "slot_hide_tips"
QT_MOC_LITERAL(11, 211, 16), // "auto_save_answer"
QT_MOC_LITERAL(12, 228, 20), // "set_question_buttons"
QT_MOC_LITERAL(13, 249, 30), // "on_pushButton_previous_clicked"
QT_MOC_LITERAL(14, 280, 24), // "set_radio_button_checked"
QT_MOC_LITERAL(15, 305, 24), // "on_pushButton_23_clicked"
QT_MOC_LITERAL(16, 330, 15) // "count_stu_grade"

    },
    "StudentWindow\0on_close_button_clicked\0"
    "\0on_mini_button_clicked\0time_update\0"
    "on_pushButton_37_clicked\0"
    "update_start_time_left\0on_pushButton_22_clicked\0"
    "update_exam_time_left\0on_pushButton_next_clicked\0"
    "slot_hide_tips\0auto_save_answer\0"
    "set_question_buttons\0"
    "on_pushButton_previous_clicked\0"
    "set_radio_button_checked\0"
    "on_pushButton_23_clicked\0count_stu_grade"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StudentWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StudentWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StudentWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_close_button_clicked(); break;
        case 1: _t->on_mini_button_clicked(); break;
        case 2: _t->time_update(); break;
        case 3: _t->on_pushButton_37_clicked(); break;
        case 4: _t->update_start_time_left(); break;
        case 5: _t->on_pushButton_22_clicked(); break;
        case 6: _t->update_exam_time_left(); break;
        case 7: _t->on_pushButton_next_clicked(); break;
        case 8: _t->slot_hide_tips(); break;
        case 9: _t->auto_save_answer(); break;
        case 10: _t->set_question_buttons(); break;
        case 11: _t->on_pushButton_previous_clicked(); break;
        case 12: _t->set_radio_button_checked(); break;
        case 13: _t->on_pushButton_23_clicked(); break;
        case 14: _t->count_stu_grade(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StudentWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_StudentWindow.data,
    qt_meta_data_StudentWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StudentWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StudentWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StudentWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int StudentWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
