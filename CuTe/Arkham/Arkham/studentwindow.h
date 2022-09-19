//-------------------------------------------------
//
// https://github.com/foreverlz1111/Arkham
//
//-------------------------------------------------
#ifndef STUDENTWINDOW_H
#define STUDENTWINDOW_H

#include <QDialog>
#include<QtSql/QSqlDatabase>
#include<QTime>

#include <QMouseEvent>

namespace Ui {
    class StudentWindow;
}

class StudentWindow : public QDialog {
    Q_OBJECT

public:
    explicit StudentWindow(QWidget *parent = nullptr);

    ~StudentWindow();

    void set_stu_code(QString stu_code);

    QString get_stu_code();

    void set_stu_name(QString stu_name);

    QString get_stu_name();

    void set_course_name(QString course_name);

    QString get_course_name();

    void set_class_id(QString class_id);

    QString get_class_id();

    void set_start_time(QString start_time);

    QString get_start_time();

    void set_exam_time(int exam_time);

    int get_exam_time();

    void set_exam_question_number(int exam_question_number);

    int get_exam_question_number();

    void update_1();

private
    slots:
            void on_close_button_clicked();

    void on_mini_button_clicked();

    void time_update();

    void on_pushButton_37_clicked();

    void update_start_time_left();

    void on_pushButton_22_clicked();

    void update_exam_time_left();

    void on_pushButton_next_clicked();

    void slot_hide_tips();

    void auto_save_answer();

    void set_question_buttons();

    void on_pushButton_previous_clicked();

    void set_radio_button_checked();

    void on_pushButton_23_clicked();

    void count_stu_grade();

protected:
    void mousePressEvent(QMouseEvent *event);

    void mouseMoveEvent(QMouseEvent *event);

    void mouseReleaseEvent(QMouseEvent *event);

private:

    Ui::StudentWindow *ui;
    QSqlDatabase db;
    QString stu_code;
    QString stu_name;

    int exam_time;
    QString course_name;
    // QString test_id;
    QString class_id;
    QString start_time;

    QTime exam_left_time;

    int exam_question_number;


    QVector <QString> student_question_id;

    QVector <QString> student_answer;

    QVector <QString> question;
    QVector <QString> answer_a;
    QVector <QString> answer_b;
    QVector <QString> answer_c;
    QVector <QString> answer_d;

    int question_number;

    int exam_time_left_insec;


    bool m_move;
    QPoint m_startPoint;
    QPoint m_windowPoint;
};

#endif // STUDENTWINDOW_H
