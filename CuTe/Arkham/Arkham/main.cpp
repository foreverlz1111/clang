//-------------------------------------------------
//
// https://github.com/foreverlz1111/Arkham
//
//-------------------------------------------------
#include "mainwindow.h"
#include <QApplication>

#include<loginsection.h>
#include<studentwindow.h>

#include<QtGui>
#include<QDesktopWidget>

#pragma execution_character_set("utf-8")

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    LoginSection l;
    StudentWindow s;
    //l.show();//登陆
    //w.show();//教师
    //s.show();//学生
    if (l.exec() == QDialog::Accepted) {
        if (l.check == "stu") {
            s.set_stu_code(l.stu_code);
            s.set_stu_name(l.stu_name);
            s.set_class_id(l.class_id);
            s.set_course_name(l.course_name);
            s.set_exam_time(l.exam_time);
            s.set_start_time(l.start_time);
            s.set_exam_question_number(l.exam_question_number);
            s.show();
            s.update_1();
            return a.exec();
        } else if (l.check == "teacher") {
            w.set_teacher_code(l.teacher_code);
            w.set_teacher_name(l.teacher_name);
            w.show();
            w.update_title_name();
            return a.exec();
        }
    }
}
