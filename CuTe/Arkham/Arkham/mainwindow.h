//-------------------------------------------------
//
// https://github.com/foreverlz1111/Arkham
//
//-------------------------------------------------
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include"QLabel"
#include <QMainWindow>
#include<QtSql/QSqlDatabase>
#include<QSqlTableModel>
#include<QSqlQueryModel>
#include<QTime>

#include <QMouseEvent>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

public
    slots:
            void time_update();

    void set_teacher_code(QString stu_code);

    QString get_teacher_code();

    void set_teacher_name(QString stu_name);

    QString get_teacher_name();

    void update_title_name();

private
    slots:
            void on_close_button_clicked();

    void on_mini_button_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_37_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_45_clicked();

    void on_pushButton_46_clicked();


    void on_comboBox_5_activated(const QString &arg1);

    void on_pushButton_47_clicked();

    void on_pushButton_41_clicked();

    void slot_hide_tips();

    void open_database();

    void on_pushButton_clear_input_clicked();

    void clear_input();

    void on_pushButton_14_clicked();

    void on_pushButton_delete_one_clicked();

    void on_pushButton_undo_clicked();

    void on_pushButton_saveall_clicked();

    void update_student_table();

    void on_pushButton_48_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_question_lock_clicked();

    void on_comboBox_question_class_activated(const QString &arg1);

    void on_pushButton_42_clicked();

    void on_tableView_5_clicked(const QModelIndex &index);

    void on_pushButton_down_clicked();

    void on_pushButton_clicked();

protected:
    void mousePressEvent(QMouseEvent *event);

    void mouseMoveEvent(QMouseEvent *event);

    void mouseReleaseEvent(QMouseEvent *event);

private:
    Ui::MainWindow *ui;

    void tab1_hide();

    void tab3_hide();

    int selected = 0;
    QSqlDatabase db;
    QString teacher_code;
    QString teacher_name;
    QString current_class_id;
    QString current_course_name;

    void update_course_table();

    QSqlTableModel *question_model;
    QSqlQueryModel *student_model;
    QSqlQueryModel *student_grade_model;

    void update_student_grade_table();

    int question_lock = 0;//0lock 1unlock

    bool m_move;
    QPoint m_startPoint;
    QPoint m_windowPoint;
};

#endif // MAINWINDOW_H
