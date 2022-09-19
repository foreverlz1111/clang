//-------------------------------------------------
//
// https://github.com/foreverlz1111/Arkham
//
//-------------------------------------------------
#ifndef LOGINSECTION_H
#define LOGINSECTION_H

#include <QDialog>
#include<QtSql/QSqlDatabase>


#include <QMouseEvent>

namespace Ui {
    class LoginSection;
}

class LoginSection : public QDialog {
    Q_OBJECT

public:
    explicit LoginSection(QWidget *parent = nullptr);

    ~LoginSection();

    QString check;
    QString stu_code;
    QString stu_name;
    QString teacher_code;
    QString teacher_name;

    int exam_time;
    QString course_name;
    QString class_id;
    QString start_time;

    int exam_question_number;
private slots:
    void on_close_button_clicked();

    void on_mini_button_clicked();

    void on_pushButton_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

protected:
    void mousePressEvent(QMouseEvent *event);

    void mouseMoveEvent(QMouseEvent *event);

    void mouseReleaseEvent(QMouseEvent *event);

private:
    Ui::LoginSection *ui;
    QSqlDatabase db;

    bool m_move;
    QPoint m_startPoint;
    QPoint m_windowPoint;
};

#endif // LOGINSECTION_H
//-------------------------------------------------
//
// https://github.com/foreverlz1111/Arkham
//
//-------------------------------------------------
