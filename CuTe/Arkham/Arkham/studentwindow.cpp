//-------------------------------------------------
//
// https://github.com/foreverlz1111/Arkham
//
//-------------------------------------------------
#include "studentwindow.h"
#include "ui_studentwindow.h"
#include <QDateTime>
#include <QTimer>
#include<QSqlQuery>
#include<QDebug>
#include<QButtonGroup>
#include<QMessageBox>

#pragma execution_character_set("utf-8")

StudentWindow::StudentWindow(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::StudentWindow) {
    ui->setupUi(this);
    this->setWindowFlag(Qt::FramelessWindowHint);//无标题栏
    ui->tabWidget->setCurrentIndex(0);//默认开屏
    QTimer *timer_systime = new QTimer(this);//创建一个新的定时器
    connect(timer_systime, SIGNAL(timeout()), this, SLOT(time_update()));
    timer_systime->start(1000);//1秒更新一次时间

    //setWindowState(Qt::WindowMaximized);//全屏
    QString str = "题目&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目"
                  "&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目"
                  "&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目&题目";
    ui->textEdit->setText(str);

    ui->label_error_tips->hide();
    ui->pushButton_question_20->hide();
    ui->radioButton_empty->hide();
    m_move = false;
}

StudentWindow::~StudentWindow() {
    delete ui;

}

void StudentWindow::update_1() {
    QString str;
    str.append("考生：【");
    str.append(get_stu_name());
    str.append("】同学");
    ui->label_2->setText(str);
    ui->label_start_time->setText("开考时间：" + start_time);
    ui->label_start_course_name->setText("考试科目：" + course_name);
}

void StudentWindow::on_close_button_clicked() {
    QMessageBox customMsgBox;
    customMsgBox.setWindowTitle("退出");
    QPushButton *lockButton = customMsgBox.addButton(tr("确定"), QMessageBox::ActionRole);
    QPushButton *unlockButton = customMsgBox.addButton(tr("取消"), QMessageBox::ActionRole);

    customMsgBox.setText(tr("你确定退出吗？"));
    customMsgBox.exec();
    if (customMsgBox.clickedButton() == lockButton) {
        QApplication::quit();
    }

    if (customMsgBox.clickedButton() == unlockButton) {

    }
    // this->window()->close();
}

void StudentWindow::on_mini_button_clicked() {
    this->window()->showMinimized();
}

void StudentWindow::time_update() {
    // QDateTime time;

    QDateTime time = QDateTime::currentDateTime();
    QTime time1 = QTime::currentTime();
    //这里的 \t跳格  \n  换行

    QString text = time.toString("yyyy年MM月dd日  \nhh:mm:ss");           //年-月-日 时:分:秒

    //每隔一秒就将“:” 显示为空格
    if (time1.second() % 2 == 0)
        text[19] = ' ';
    //将处理后的日期时间写入
    //ui->label_2->show();

    ui->label_18->setText(text);


    if (time1.second() % 5 == 0) {
        update_start_time_left();
    } else {

    }
}

void StudentWindow::update_start_time_left() {
    QSqlQuery query_start_time_left;
    query_start_time_left.prepare(
            "select to_number((sysdate - to_date(:start_time,'YYYY-MM-DD HH24:MI:SS'))*24*60)from dual");

    query_start_time_left.bindValue(":start_time", start_time);
    query_start_time_left.exec();
    query_start_time_left.next();
    //qDebug()<<"当前剩余："<<int(query_start_time_left.value(0).toDouble());
    if (int(query_start_time_left.value(0).toDouble()) >= -20 && int(query_start_time_left.value(0).toDouble()) < 1) {
        ui->label_4->setText("现在可以进入考试");
        ui->pushButton_37->setEnabled(true);
    } else {
        ui->label_4->setText(
                "*可提前20分钟可以进入系统,当前剩余：" + QString::number(-int(query_start_time_left.value(0).toDouble()) - 20) + "分钟");
        ui->pushButton_37->setEnabled(false);
    }

}

void StudentWindow::on_pushButton_37_clicked() {

    //start exam

    QSqlQuery query_is_entered;
    query_is_entered.prepare("select * from system.stu_grade where stu_code = :stu_code");
    query_is_entered.bindValue(":stu_code", stu_code);
    query_is_entered.exec();
    query_is_entered.next();
    if (query_is_entered.value(0).toString() != "") {

        QMessageBox::information(this, "继续作答", tr("已为你恢复之前考试进度。"));

        for (int i = 0; i < exam_question_number; i++) {
            student_question_id.push_back(query_is_entered.value(1).toString().mid(i * 4, 4));
            student_answer.push_back(query_is_entered.value(2).toString().mid(i, 1));
        }
        QSqlQuery query_question_by_id;
        for (int j = 0; j < exam_question_number; j++) {
            query_question_by_id.prepare("select question,answer_a,answer_b,answer_c,answer_d from system.question"
                                         "where question_id = :question_id ");
            query_question_by_id.bindValue(":question_id", class_id + "0105" + student_question_id[j]);
            query_question_by_id.exec();
            query_question_by_id.next();

            question.push_back(query_question_by_id.value(0).toString());
            answer_a.push_back(query_question_by_id.value(1).toString().length() > 80 ? query_question_by_id.value(
                    1).toString().insert(80, "\n") : query_question_by_id.value(1).toString());
            answer_b.push_back(query_question_by_id.value(2).toString().length() > 80 ? query_question_by_id.value(
                    2).toString().insert(80, "\n") : query_question_by_id.value(2).toString());
            answer_c.push_back(query_question_by_id.value(3).toString().length() > 80 ? query_question_by_id.value(
                    3).toString().insert(80, "\n") : query_question_by_id.value(3).toString());
            answer_d.push_back(query_question_by_id.value(4).toString().length() > 80 ? query_question_by_id.value(
                    4).toString().insert(80, "\n") : query_question_by_id.value(4).toString());

        }
        ui->textEdit->setText(question[0]);
        ui->radioButton_a->setText(answer_a[0]);
        ui->radioButton_b->setText(answer_b[0]);
        ui->radioButton_c->setText(answer_c[0]);
        ui->radioButton_d->setText(answer_d[0]);

        question_number = 0;
        ui->label_question_number->setText(QString::number(question_number + 1));

//            QString style_str = "QPushButton{border:1px solid rgb(0,0,0);border-radius:5px;background-color: rgb(150, 150, 150);}QPushButton:hover{background-color: rgb(250, 250, 250);border:1px solid rgb(0,0,0);}";
//            if(student_answer[0]!="n"){ui->pushButton_question_1->setStyleSheet(style_str);}


    } else {
        QSqlQuery query_questions;
        query_questions.prepare(
                "select question_id,question,answer_a,answer_b,answer_c,answer_d from(select * from system.question "
                "where regexp_like(question_id,:question_id) "
                "and class_id = :class_id order by DBMS_RANDOM.RANDOM() )"
                " where ROWNUM  <= :exam_question_number");
        query_questions.bindValue(":question_id", class_id + "0105" + "....");
        query_questions.bindValue(":class_id", class_id);
        query_questions.bindValue(":exam_question_number", exam_question_number);
        query_questions.exec();

        QString student_question_id_str;
        for (int i = 0; i < exam_question_number; i++) {
            query_questions.next();
            student_question_id.push_back(query_questions.value(0).toString().mid(16));
            student_question_id_str.append(query_questions.value(0).toString().mid(16));

            student_answer.push_back("n");

            question.push_back(query_questions.value(1).toString());
            answer_a.push_back(
                    query_questions.value(2).toString().length() > 80 ? query_questions.value(2).toString().insert(80,
                                                                                                                   "\n")
                                                                      : query_questions.value(2).toString());
            answer_b.push_back(
                    query_questions.value(3).toString().length() > 80 ? query_questions.value(3).toString().insert(80,
                                                                                                                   "\n")
                                                                      : query_questions.value(3).toString());
            answer_c.push_back(
                    query_questions.value(4).toString().length() > 80 ? query_questions.value(4).toString().insert(80,
                                                                                                                   "\n")
                                                                      : query_questions.value(4).toString());
            answer_d.push_back(
                    query_questions.value(5).toString().length() > 80 ? query_questions.value(5).toString().insert(80,
                                                                                                                   "\n")
                                                                      : query_questions.value(5).toString());

        }

        QSqlQuery query_save_student_question_id;
        query_save_student_question_id.prepare(
                "insert into system.stu_grade (stu_question,stu_code,stu_name,class_id,test_id)"
                "values(:stu_question,:stu_code,:stu_name,:class_id,:test_id)");
        query_save_student_question_id.bindValue(":stu_question", student_question_id_str);
        query_save_student_question_id.bindValue(":stu_code", stu_code);
        query_save_student_question_id.bindValue(":stu_name", stu_name);
        query_save_student_question_id.bindValue(":class_id", class_id);
        query_save_student_question_id.bindValue(":test_id", class_id + "1");
        query_save_student_question_id.exec();

        auto_save_answer();

        ui->textEdit->setText(question[0]);
        ui->radioButton_a->setText(answer_a[0]);
        ui->radioButton_b->setText(answer_b[0]);
        ui->radioButton_c->setText(answer_c[0]);
        ui->radioButton_d->setText(answer_d[0]);

        question_number = 0;
        ui->label_question_number->setText(QString::number(question_number + 1));
    }

    QSqlQuery query_exam_left_time;
    query_exam_left_time.prepare(
            "select to_number (to_date(:exam_left_time,'YYYY-MM-DD HH24:MI:SS') - sysdate )*24*60*60 from dual");
    query_exam_left_time.bindValue(":exam_left_time", (QDateTime::fromString(start_time, "yyyy-MM-dd hh:mm:ss").addSecs(
            60 * exam_time)).toString("yyyy-MM-dd hh:mm:ss"));
    query_exam_left_time.exec();
    query_exam_left_time.next();
    exam_time_left_insec = int(query_exam_left_time.value(0).toDouble());


    QTimer *timer_exam_time_left = new QTimer(this);//创建一个新的定时器
    connect(timer_exam_time_left, SIGNAL(timeout()), this, SLOT(update_exam_time_left()));
    timer_exam_time_left->start(1000);//1秒更新一次时间
    ui->tabWidget->setCurrentIndex(1);

}

void StudentWindow::update_exam_time_left() {


    exam_time_left_insec--;

    int hh_tmp = 0;
    int mm_tmp = 0;
    int ss_tmp = 0;
    hh_tmp = exam_time_left_insec / 60 / 60;
    mm_tmp = exam_time_left_insec / 60 - hh_tmp * 60;
    ss_tmp = exam_time_left_insec - hh_tmp * 60 * 60 - mm_tmp * 60;
    //qDebug()<<exam_time_left_insec<<hh_tmp<<mm_tmp<<ss_tmp;
    exam_left_time.setHMS(hh_tmp, mm_tmp, ss_tmp);
    //qDebug()<<"exam_left_time"<<exam_left_time.toString("hh:mm:ss");


    //qDebug()<<"exam_left_time_tostring"<<exam_left_time_tostring;

    ui->label_time_left->setText(exam_left_time.toString("hh:mm:ss"));


}

void StudentWindow::set_stu_code(QString code) {
    stu_code = code;
}

QString StudentWindow::get_stu_code() {
    return stu_code;
}

void StudentWindow::set_stu_name(QString name) {
    stu_name = name;
}

QString StudentWindow::get_stu_name() {
    return stu_name;
}

void StudentWindow::set_course_name(QString code) {
    course_name = code;
}

QString StudentWindow::get_course_name() {
    return stu_code;
}

void StudentWindow::set_class_id(QString code) {
    class_id = code;
}

QString StudentWindow::get_class_id() {
    return class_id;
}

void StudentWindow::set_start_time(QString code) {
    start_time = code;
}

QString StudentWindow::get_start_time() {
    return start_time;
}

void StudentWindow::set_exam_time(int code) {
    exam_time = code;
}

int StudentWindow::get_exam_time() {
    return exam_time;
}

void StudentWindow::set_exam_question_number(int code) {
    exam_question_number = code;
}

int StudentWindow::get_exam_question_number() {
    return exam_question_number;
}

void StudentWindow::on_pushButton_22_clicked() {
    //save question

}

void StudentWindow::auto_save_answer() {
    QSqlQuery query_auto_save_answer;
    QString student_answer_str;
    for (int i = 0; i < exam_question_number; i++) {
        student_answer_str.append(student_answer[i]);
    }
    query_auto_save_answer.prepare("update system.stu_grade set stu_answer = :stu_answer where stu_code = :stu_code");
    query_auto_save_answer.bindValue(":stu_answer", student_answer_str);
    query_auto_save_answer.bindValue(":stu_code", stu_code);
    if (query_auto_save_answer.exec()) {
        ui->label_error_tips->clear();
        //ui->label_error_tips->setStyleSheet("QLabel{color: rgb(0, 0, 0);}");
        ui->label_error_tips->setText("答题进度已自动保存");
        ui->label_error_tips->show();
        QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));
    }
}

void StudentWindow::set_question_buttons() {
    QString style_str = "QPushButton{border:1px solid rgb(0,0,0);border-radius:5px;background-color: rgb(150, 150, 150);}QPushButton:hover{background-color: rgb(250, 250, 250);border:1px solid rgb(0,0,0);}";
    //ui->pushButton_question_11->setStyleSheet(style_str);
    switch (question_number) {
        case 0:
            ui->pushButton_question_1->setStyleSheet(style_str);
            qDebug() << "button1";
            break;
        case 1:
            ui->pushButton_question_2->setStyleSheet(style_str);
            qDebug() << "button2";
            break;
        case 2:
            ui->pushButton_question_3->setStyleSheet(style_str);
            qDebug() << "button3";
            break;
        case 3:
            ui->pushButton_question_4->setStyleSheet(style_str);
            qDebug() << "button4";
            break;
        case 4:
            ui->pushButton_question_5->setStyleSheet(style_str);
            qDebug() << "button5";
            break;
        case 5:
            ui->pushButton_question_6->setStyleSheet(style_str);
            qDebug() << "button6";
            break;
        case 6:
            ui->pushButton_question_7->setStyleSheet(style_str);
            qDebug() << "button7";
            break;
        case 7:
            ui->pushButton_question_8->setStyleSheet(style_str);
            qDebug() << "button8";
            break;
        case 8:
            ui->pushButton_question_9->setStyleSheet(style_str);
            qDebug() << "button9";
            break;
        case 9:
            ui->pushButton_question_10->setStyleSheet(style_str);
            qDebug() << "button10";
            break;
    }
}

void StudentWindow::on_pushButton_next_clicked() {

    if (question_number >= 0 && question_number < exam_question_number - 1) {

        if (ui->radioButton_a->isChecked()) {
            if (student_answer[question_number] != "a") {
                student_answer[question_number] = "a";
                auto_save_answer();
            }
            else { student_answer[question_number] = "a"; }
            set_question_buttons();
            question_number++;
            //ui->radioButton_empty->setChecked(true);

        } else if (ui->radioButton_b->isChecked()) {
            if (student_answer[question_number] != "b") {
                student_answer[question_number] = "b";
                auto_save_answer();
            }
            else { student_answer[question_number] = "b"; }
            set_question_buttons();
            question_number++;
            //ui->radioButton_empty->setChecked(true);

        } else if (ui->radioButton_c->isChecked()) {
            if (student_answer[question_number] != "c") {
                student_answer[question_number] = "c";
                auto_save_answer();
            }
            else { student_answer[question_number] = "c"; }
            set_question_buttons();
            question_number++;
            //ui->radioButton_empty->setChecked(true);

        } else if (ui->radioButton_d->isChecked()) {

            if (student_answer[question_number] != "d") {
                student_answer[question_number] = "d";
                auto_save_answer();
            }
            else { student_answer[question_number] = "d"; }
            set_question_buttons();
            question_number++;
            //ui->radioButton_empty->setChecked(true);

        } else {
            ui->label_error_tips->clear();
            //ui->label_error_tips->setStyleSheet("QLabel{color: rgb(0, 0, 0);}");
            ui->label_error_tips->setText("请选择一个选项");
            ui->label_error_tips->show();
            QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));
        }
        if (student_answer[question_number] == "n") {
            ui->radioButton_empty->setChecked(true);
        } else {
            set_radio_button_checked();
        }
        ui->label_question_number->setText(QString::number(question_number + 1));
        ui->textEdit->setText(question[question_number]);
        ui->radioButton_a->setText(answer_a[question_number]);
        ui->radioButton_b->setText(answer_b[question_number]);
        ui->radioButton_c->setText(answer_c[question_number]);
        ui->radioButton_d->setText(answer_d[question_number]);
    } else if (question_number == exam_question_number - 1) {
        if (ui->radioButton_a->isChecked()) {
            if (student_answer[question_number] != "a") {
                student_answer[question_number] = "a";
                auto_save_answer();
            }
            else { student_answer[question_number] = "a"; }
            set_question_buttons();
            //question_number ++;
            //ui->radioButton_empty->setChecked(true);

        } else if (ui->radioButton_b->isChecked()) {
            if (student_answer[question_number] != "b") {
                student_answer[question_number] = "b";
                auto_save_answer();
            }
            else { student_answer[question_number] = "b"; }
            set_question_buttons();
            //question_number ++;
            //ui->radioButton_empty->setChecked(true);

        } else if (ui->radioButton_c->isChecked()) {
            if (student_answer[question_number] != "c") {
                student_answer[question_number] = "c";
                auto_save_answer();
            }
            else { student_answer[question_number] = "c"; }
            set_question_buttons();
            //question_number ++;
            //ui->radioButton_empty->setChecked(true);

        } else if (ui->radioButton_d->isChecked()) {

            if (student_answer[question_number] != "d") {
                student_answer[question_number] = "d";
                auto_save_answer();
            }
            else { student_answer[question_number] = "d"; }
            set_question_buttons();
            //question_number ++;
            //ui->radioButton_empty->setChecked(true);

        } else if (ui->radioButton_empty->isChecked()) {
            ui->label_error_tips->clear();
            //ui->label_error_tips->setStyleSheet("QLabel{color: rgb(0, 0, 0);}");
            ui->label_error_tips->setText("请选择一个选项");
            ui->label_error_tips->show();
            QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));
        }
        ui->label_error_tips->clear();
        //ui->label_error_tips->setStyleSheet("QLabel{color: rgb(0, 0, 0);}");
        ui->label_error_tips->setText("这是最后一题，请交卷");
        ui->label_error_tips->show();
        QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));

    }
}

void StudentWindow::slot_hide_tips() {
    ui->label_error_tips->hide();

}

void StudentWindow::set_radio_button_checked() {

    //Qstringlist
    if (student_answer[question_number] == "a") {
        ui->radioButton_a->setChecked(true);
    } else if (student_answer[question_number] == "b") {
        ui->radioButton_b->setChecked(true);
    } else if (student_answer[question_number] == "c") {
        ui->radioButton_c->setChecked(true);
    } else if (student_answer[question_number] == "d") {
        ui->radioButton_d->setChecked(true);
    }
}

void StudentWindow::on_pushButton_previous_clicked() {
    //3 2
    if (question_number >= 1 && question_number < exam_question_number) {

        if (ui->radioButton_a->isChecked()) {
            if (student_answer[question_number] != "a") {
                student_answer[question_number] = "a";
                auto_save_answer();
            }
            else { student_answer[question_number] = "a"; }
            question_number--;
            set_radio_button_checked();
            set_question_buttons();
            //ui->radioButton_empty->setChecked(true);

        } else if (ui->radioButton_b->isChecked()) {
            if (student_answer[question_number] != "b") {
                student_answer[question_number] = "b";
                auto_save_answer();
            }
            else { student_answer[question_number] = "b"; }

            question_number--;
            set_radio_button_checked();
            set_question_buttons();
            //ui->radioButton_empty->setChecked(true);

        } else if (ui->radioButton_c->isChecked()) {
            if (student_answer[question_number] != "c") {
                student_answer[question_number] = "c";
                auto_save_answer();
            }
            else { student_answer[question_number] = "c"; }

            question_number--;
            set_radio_button_checked();
            set_question_buttons();
            //ui->radioButton_empty->setChecked(true);

        } else if (ui->radioButton_d->isChecked()) {

            if (student_answer[question_number] != "d") {
                student_answer[question_number] = "d";
                auto_save_answer();
            }
            else { student_answer[question_number] = "d"; }

            question_number--;
            set_radio_button_checked();

            set_question_buttons();
            //ui->radioButton_empty->setChecked(true);

        } else if (ui->radioButton_empty->isChecked()) {
//            ui->label_error_tips->clear();
//            //ui->label_error_tips->setStyleSheet("QLabel{color: rgb(0, 0, 0);}");
//            ui->label_error_tips->setText("请选择一个选项");
//            ui->label_error_tips->show();
//            QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));

            question_number--;
            set_radio_button_checked();

        }
        ui->label_question_number->setText(QString::number(question_number + 1));
        ui->textEdit->setText(question[question_number]);
        ui->radioButton_a->setText(answer_a[question_number]);
        ui->radioButton_b->setText(answer_b[question_number]);
        ui->radioButton_c->setText(answer_c[question_number]);
        ui->radioButton_d->setText(answer_d[question_number]);

    }
}

void StudentWindow::on_pushButton_23_clicked() {
    QMessageBox customMsgBox;
    customMsgBox.setWindowTitle("提交试卷");
    QPushButton *lockButton = customMsgBox.addButton(tr("确定"), QMessageBox::ActionRole);
    QPushButton *unlockButton = customMsgBox.addButton(tr("取消"), QMessageBox::ActionRole);

    customMsgBox.setText(tr("你确定交卷吗？"));

    if (question_number == exam_question_number - 1) {
        if (ui->radioButton_a->isChecked()) {
            if (student_answer[question_number] != "a") {
                student_answer[question_number] = "a";
                auto_save_answer();
            }
            else { student_answer[question_number] = "a"; }
            set_question_buttons();
            //question_number ++;
            //ui->radioButton_empty->setChecked(true);
            customMsgBox.exec();
        } else if (ui->radioButton_b->isChecked()) {
            if (student_answer[question_number] != "b") {
                student_answer[question_number] = "b";
                auto_save_answer();
            }
            else { student_answer[question_number] = "b"; }
            set_question_buttons();
            //question_number ++;
            //ui->radioButton_empty->setChecked(true);
            customMsgBox.exec();
        } else if (ui->radioButton_c->isChecked()) {
            if (student_answer[question_number] != "c") {
                student_answer[question_number] = "c";
                auto_save_answer();
            }
            else { student_answer[question_number] = "c"; }
            set_question_buttons();
            //question_number ++;
            //ui->radioButton_empty->setChecked(true);
            customMsgBox.exec();
        } else if (ui->radioButton_d->isChecked()) {

            if (student_answer[question_number] != "d") {
                student_answer[question_number] = "d";
                auto_save_answer();
            }
            else { student_answer[question_number] = "d"; }
            set_question_buttons();
            //question_number ++;
            //ui->radioButton_empty->setChecked(true);
            customMsgBox.exec();
        } else if (ui->radioButton_empty->isChecked()) {
            ui->label_error_tips->clear();
            //ui->label_error_tips->setStyleSheet("QLabel{color: rgb(0, 0, 0);}");
            ui->label_error_tips->setText("请选择一个选项");
            ui->label_error_tips->show();
            QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));
        }
//      ui->label_error_tips->clear();
//      //ui->label_error_tips->setStyleSheet("QLabel{color: rgb(0, 0, 0);}");
//      ui->label_error_tips->setText("这是最后一题，请交卷");
//      ui->label_error_tips->show();
//      QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));

    }


    if (customMsgBox.clickedButton() == lockButton) {
        count_stu_grade();
    }

    if (customMsgBox.clickedButton() == unlockButton) {

    }
}

void StudentWindow::count_stu_grade() {
    int score = 0;
    QSqlQuery query_single_answer_right;
    for (int i = 0; i < question_number; i++) {
        query_single_answer_right.prepare("select answer_right from system.question where question_id = :question_id");
        query_single_answer_right.bindValue(":question_id", class_id + "0105" + student_question_id[i]);
        query_single_answer_right.exec();
        query_single_answer_right.next();
        if (student_answer[i] == query_single_answer_right.value(0).toString()) {
            score += 5;
        }
    }
    QSqlQuery query_update_student_score;
    query_update_student_score.prepare("update system.stu_grade set stu_grade = :stu_grade where stu_code = :stu_code");
    query_update_student_score.bindValue(":stu_grade", score);
    query_update_student_score.bindValue(":stu_code", stu_code);
    query_update_student_score.exec();

    if (query_update_student_score.exec()) {
        ui->tabWidget->setCurrentIndex(2);
    } else {
        ui->label_error_tips->clear();
        //ui->label_error_tips->setStyleSheet("QLabel{color: rgb(0, 0, 0);}");
        ui->label_error_tips->setText("NET-ERROR;CAN NOT SUBMIT");
        ui->label_error_tips->show();
        QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));
    }

}

void StudentWindow::mousePressEvent(QMouseEvent *event) {
    /*当鼠标左键点击时.*/
    if (event->button() == Qt::LeftButton) {
        m_move = true;
        /*记录鼠标的世界坐标.*/
        m_startPoint = event->globalPos();
        //qDebug()<<"m_startPoint"<<m_startPoint;
        /*记录窗体的世界坐标.*/
        m_windowPoint = this->frameGeometry().topLeft();

        //qDebug()<<"m_windowPoint"<<m_windowPoint;
    }
}

void StudentWindow::mouseMoveEvent(QMouseEvent *event) {
    if (event->buttons() & Qt::LeftButton) {
        /*移动中的鼠标位置相对于初始位置的相对位置.*/
        QPoint relativePos = event->globalPos() - m_startPoint;
        //qDebug()<<"relativePos"<<relativePos;
//        qDebug()<<"ui->frame_3->x()"<<ui->frame_3->width();
//        qDebug()<<"ui->frame_3->y()"<<ui->frame_3->height();
        /*然后移动窗体即可.*/
        if (m_windowPoint.x() + ui->frame_3->width() > m_startPoint.x() &&
            m_windowPoint.y() + ui->frame_3->height() > m_startPoint.y()) {
            this->move(m_windowPoint + relativePos);
        }

    }
}

void StudentWindow::mouseReleaseEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        /*改变移动状态.*/
        m_move = false;
    }
}
