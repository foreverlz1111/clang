//-------------------------------------------------
//
// https://github.com/foreverlz1111/Arkham
//
//-------------------------------------------------
#include "loginsection.h"
#include "ui_loginsection.h"
#include"QMovie"
#include<QSqlQuery>
#include<QSqlDatabase>
#include<QDebug>

#pragma execution_character_set("utf-8")

LoginSection::LoginSection(QWidget *parent) :
        QDialog(parent),
        ui(new Ui::LoginSection) {
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);//使用无系统边框的窗口模式
    ui->user_input->setTextMargins(5, 0, 0, 0);//使输入框输入的字体位置观感舒服
    ui->password_input->setTextMargins(5, 0, 0, 0);//使输入框输入的字体位置观感舒服
    ui->label_2->hide();
    ui->loading->hide();
    db = QSqlDatabase::addDatabase("QOCI");
    db.setHostName("192.168.196.132");
    db.setPort(1521);
    db.setDatabaseName("user");
//-------------------------------------------------
//  db.setUserName("system");//登陆数据库用户名
//  db.setPassword("manager");//登陆数据库密码
//  db.open();//根据设置用户名和密码打开数据库
//-------------------------------------------------
    m_move = false;

}

LoginSection::~LoginSection() {
    delete ui;
}

void LoginSection::on_close_button_clicked() {
    QApplication::quit();
    // this->window()->close();
}

void LoginSection::on_mini_button_clicked() {
    this->window()->showMinimized();
}

void LoginSection::on_pushButton_clicked() {
    ui->label_2->show();
    QMovie *movie = new QMovie(":/img/img/ajax-loader.gif");
    ui->loading->setMovie(movie);
    movie->start();

    if (ui->radioButton->isChecked()) {
        ui->loading->show();
        db.setUserName("student");
        db.setPassword("student");
        db.open();
        QSqlQuery query;
        //like '%' :password '%'
        query.prepare("select * from system.student where  stu_code = :id and regexp_like(stu_idcode,:password)");
        QString user_input_1 = ui->user_input->text();
        QString user_input_2 = ui->password_input->text();
        query.bindValue(":id", user_input_1);
        query.bindValue(":password", "............" + user_input_2);
        query.exec();
        query.next();
        ui->loading->hide();
        if (query.value(0).toString() != "") {
            check = "stu";
            stu_code = user_input_1;
            stu_name = query.value(1).toString();
            qDebug() << check << stu_code;
            movie->stop();
            //accept();
            QSqlQuery query_exam;
            query_exam.prepare(
                    "select * from system.exam where class_id "
                    "=(select class_id from  system.class where stu_code = :stu_code)"
                    "and to_date(exam_date,'YYYY-MM-DD HH24:MI:SS') > sysdate  order by exam_date ASC");
            query_exam.bindValue(":stu_code", stu_code);
            query_exam.exec();
            query_exam.next();
            if (query_exam.value(0).toString() != "") {
                start_time = query_exam.value(1).toString();
                qDebug() << "start_time:" << start_time;
                QSqlQuery query_exam_time;
                query_exam_time.prepare(
                        "select (to_number ((sysdate - to_date(:start_time,'YYYY-MM-DD HH24:MI:SS'))*24*60)) from dual");
                query_exam_time.bindValue(":start_time", start_time);
                query_exam_time.exec();
                query_exam_time.next();
                if (query_exam_time.value(0).toString() != "") {
                    //qDebug() << "exam_start_time_left:" << int(query_exam_time.value(0).toDouble());
                    if (int(query_exam_time.value(0).toDouble()) < 30 &&
                        int(query_exam_time.value(0).toDouble()) > -30) {
                        exam_time = query_exam.value(2).toInt();
                        //qDebug() << "total time" << exam_time;
                        class_id = query_exam.value(3).toString();
                        start_time = query_exam.value(1).toString();
                        //qDebug() << "class_id" << class_id;
                        exam_question_number = query_exam.value(4).toInt();
                        //qDebug() << "exam_question_number" << exam_question_number;
                        QSqlQuery query_course_name;
                        query_course_name.prepare(
                                "select course_name from system.class where stu_code = :stu_code and class_id = :class_id");
                        query_course_name.bindValue(":stu_code", stu_code);
                        query_course_name.bindValue(":class_id", class_id);
                        query_course_name.exec();
                        query_course_name.next();
                        course_name = query_course_name.value(0).toString();
                        //qDebug() << "course_name" << course_name;
                        accept();
                    }
                }
            } else {
                ui->label_2->setText("你还没有考试!");
            }
        }
    } else if (ui->radioButton_2->isChecked()) {
        ui->loading->show();
        db.setUserName("teacher");
        db.setPassword("teacher");
        db.open();
        QSqlQuery query;
        //like '%' :password '%'不成立
        query.prepare(
                "select * from system.teacher where "
                "teacher_code = :id and regexp_like(teacher_idcode,'............||:password||')");
        QString user_input_1 = ui->user_input->text();
        QString user_input_2 = ui->password_input->text();
        query.bindValue(":id", user_input_1);
        query.bindValue(":password", user_input_2);
        //qDebug() << user_input_1;
        query.exec();
        query.next();
        ui->loading->hide();
        if (query.value(0).toString() != "") {
            check = "teacher";
            teacher_code = user_input_1;
            teacher_name = query.value(1).toString();
            //qDebug() << check;
            movie->stop();
            accept();
        }
    }
}

void LoginSection::on_radioButton_clicked() {
    ui->user_input->setText("8888");
}

void LoginSection::on_radioButton_2_clicked() {
    ui->user_input->setText("8888");
}

void LoginSection::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        m_move = true;
        m_startPoint = event->globalPos();
        m_windowPoint = this->frameGeometry().topLeft();
    }
}
void LoginSection::mouseMoveEvent(QMouseEvent *event) {
    if (event->buttons() & Qt::LeftButton) {
        QPoint relativePos = event->globalPos() - m_startPoint;
        this->move(m_windowPoint + relativePos);
    }
}
void LoginSection::mouseReleaseEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        m_move = false;
    }
}
