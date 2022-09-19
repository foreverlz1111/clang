//-------------------------------------------------
//
// https://github.com/foreverlz1111/Arkham
//
//-------------------------------------------------
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QLabel"
#include <QDateTime>
#include <QTimer>
#include<QDebug>
#include<QDate>
#include<QSqlQuery>
#include<QMessageBox>
#include <QSqlRelationalDelegate>

#pragma execution_character_set("utf-8")

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow) {
    ui->setupUi(this);
    tab1_hide();
    tab3_hide();

    QDateTime datetimes;
    ui->label_tips->hide();
    ui->label_tips_database->hide();
    QTimer *timer = new QTimer(this);//创建一个新的定时器
    connect(timer, SIGNAL(timeout()), this, SLOT(time_update()));
    timer->start(1000);//1秒更新一次时间
    this->setWindowFlag(Qt::FramelessWindowHint);//无标题栏
    ui->tabWidget->setCurrentIndex(0);
    ui->splitter->handle(1)->setDisabled(true);
    ui->splitter->handle(2)->setDisabled(true);
    ui->splitter->handle(3)->setDisabled(true);
    db = QSqlDatabase::addDatabase("QOCI");
    db.setHostName("192.168.196.132");
    db.setPort(1521);
    db.setDatabaseName("lzy");


    //ui->comboBox_5->addItem(QString("2021-A"));
    ui->comboBox_4->clear();
    ui->comboBox_5->clear();
    QDate get_year_time = QDate::currentDate();
    ui->comboBox_4->addItem("选择年份");
    ui->comboBox_4->addItem(QString::number(get_year_time.year()));
    ui->comboBox_4->addItem(QString::number(get_year_time.year() - 1));
    ui->comboBox_4->addItem(QString::number(get_year_time.year() - 2));
    ui->comboBox_5->addItem("选择年份");
    ui->comboBox_5->addItem(QString::number(get_year_time.year()));
    ui->comboBox_5->addItem(QString::number(get_year_time.year() - 1));
    ui->comboBox_5->addItem(QString::number(get_year_time.year() - 2));

    ui->pushButton_question_lock->hide();
    ui->label_tips_input->hide();
    ui->label_tips_lock->hide();
    m_move = false;
}

void MainWindow::time_update() {
    // QDateTime time;
    QDateTime time = QDateTime::currentDateTime();
    QString text = time.toString("yyyy年MM月dd日 \nhh:mm:ss");           //年-月-日 时:分:秒
    QTime time1 = QTime::currentTime();
    if (time1.second() % 2 == 0)
        text[18] = ' ';
    ui->label_18->setText(text);
    //这里的 \t跳格  \n  换行
    //QString str = time.toString("\tyyyy-MM-dd \n\thh:mm:ss dddd");    //年-月-日 时:分:秒 周几
    //每隔一秒就将“:” 显示为空格

    //将处理后的日期时间写入
    //ui->label_2->show();

}

void MainWindow::tab1_hide() {
    ui->pushButton_38->setEnabled(false);
    ui->pushButton_39->setEnabled(false);
    ui->label_4->hide();
    ui->pushButton_2->hide();
    ui->pushButton_3->hide();
    ui->pushButton_4->hide();
    ui->pushButton_5->hide();
    ui->pushButton_6->hide();
    ui->pushButton_7->hide();
    ui->pushButton_8->hide();
    ui->pushButton_9->hide();
}

void MainWindow::tab3_hide() {
    ui->label_13->hide();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_close_button_clicked() {
    //退出程序
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

}

void MainWindow::on_mini_button_clicked() {
    //最小化
    this->window()->showMinimized();
}

void MainWindow::on_pushButton_38_clicked() {
    //成绩复查
    ui->tabWidget->setCurrentIndex(5);
}


void MainWindow::on_pushButton_2_clicked() {
    //【课程名1】点击事件

    //qDebug()<<selected;

    //ui->pushButton_39->setEnabled(true);
    current_class_id = ui->pushButton_2->text().left(12);
    qDebug() << ui->pushButton_2->text();
    current_course_name = ui->pushButton_2->text().mid(13, -1);
    //if(selected == 0){
    ui->tabWidget->setCurrentIndex(1);
    selected = 1;

    ui->pushButton_39->setEnabled(true);
    ui->pushButton_38->setEnabled(true);
    QString str;
    str.append("正在管理【");
    str.append(current_class_id);
    str.append("】\n");
    str.append("2020年  【");
    str.append(current_course_name);
    str.append("】");
    ui->label_4->setText(str);
    ui->label_4->show();
    // }
    update_student_table();
}

void MainWindow::update_student_table() {
    open_database();
    student_model = new QSqlQueryModel(this);
    QSqlQuery query_student;
    query_student.prepare("select stu_code,stu_name from system.class where class_id = :class_id");
    query_student.bindValue(":class_id", current_class_id);

    query_student.exec();

    student_model->setQuery(query_student);
    student_model->setHeaderData(0, Qt::Horizontal, tr("学号"));
    student_model->setHeaderData(1, Qt::Horizontal, tr("姓名"));
    query_student.last();
    qDebug() << query_student.at();
    QString str = "-当前课程学生名单：";
    str.append("(共" + QString::number(query_student.at() + 1) + "名选课学生)");
    ui->label_8->setText(str);
    ui->tableView_2->verticalHeader()->hide();
    ui->tableView_2->setModel(student_model);
    ui->tableView_2->setColumnWidth(0, ui->tableView_2->width() / 2 - 1);
    ui->tableView_2->setColumnWidth(1, ui->tableView_2->width() / 2);


}

void MainWindow::on_pushButton_37_clicked() {
    //【所选班级】按钮
//    qDebug()<<selected;
    if (selected == 0) {
        ui->tabWidget->setCurrentIndex(0);
    } else if (selected == 1) {
        ui->tabWidget->setCurrentIndex(1);
    }
    ui->comboBox_5->setCurrentIndex(0);
    on_comboBox_5_activated("选择年份");
}

void MainWindow::on_pushButton_40_clicked() {
    //【重新选择班级】按钮
    selected = 0;
    ui->tabWidget->setCurrentIndex(0);
    ui->comboBox_5->setCurrentIndex(0);

    tab1_hide();
}

void MainWindow::on_pushButton_10_clicked() {
    //【管理考试】按钮
    QSqlQuery query_exam;
    query_exam.prepare("select * from system.exam where test_id = :test_id");
    query_exam.bindValue(":test_id", current_class_id + "1");
    query_exam.exec();
    query_exam.next();
    if (query_exam.value(0).toString() != "") {

//        QTime times;
//        times.setHMS();
//        QDate dates;
//        dates.setDate();
        //DateTime exam_datetime ;
        QString exam_datetime_text = query_exam.value(1).toString().trimmed();
        qDebug() << exam_datetime_text;
        ui->dateTimeEdit->setDateTime(QDateTime::fromString(exam_datetime_text, "yyyy-MM-dd hh:mm:ss"));
        ui->spinBox_examtime->setValue(query_exam.value(2).toInt());
        ui->spinBox_exam_question_number->setValue(query_exam.value(4).toInt());

        update_course_table();
    } else {
        QSqlQuery query_exam_add;
        query_exam_add.prepare(
                "insert into system.exam values(:test_id,:datetext,:exam_time,:class_id,:exam_question_number)");
        query_exam_add.bindValue(":test_id", current_class_id + "1");
        QDateTime current_time = QDateTime::currentDateTime();

        QString current_time_text = current_time.toString("yyyy-MM-dd hh:mm:ss");
        //qDebug()<<current_class_id+"1"<<current_time_text<<current_class_id;
        query_exam_add.bindValue(":datetext", current_time_text);
        query_exam_add.bindValue(":exam_time", 30);
        query_exam_add.bindValue(":class_id", current_class_id);
        query_exam_add.bindValue(":exam_question_number", 20);
        ui->dateTimeEdit->setDateTime(current_time);
        qDebug() << query_exam_add.exec();

    }

    ui->tabWidget->setCurrentIndex(2);

}

void MainWindow::update_course_table() {
    question_model = new QSqlTableModel(this);

    question_model->setTable("SYSTEM.QUESTION");
    question_model->setFilter(QObject::tr("class_id = '%1' order by question_id ASC").arg(current_class_id));
    //question_model->setFilter(QObject::tr("order by question_id ASC"));
    question_model->select();

//     question_model->removeColumn(0);
//     question_model->removeColumn(5);
//     question_model->removeColumn(5);
//     question_model->removeColumn(6);
//     question_model->removeColumn(6);

    question_model->setHeaderData(0, Qt::Horizontal, tr("题目号"));
    question_model->setHeaderData(1, Qt::Horizontal, tr("题干"));
    question_model->setHeaderData(2, Qt::Horizontal, tr("答案a"));
    question_model->setHeaderData(3, Qt::Horizontal, tr("答案b"));
    question_model->setHeaderData(4, Qt::Horizontal, tr("答案c"));
    question_model->setHeaderData(5, Qt::Horizontal, tr("答案d"));
    question_model->setHeaderData(8, Qt::Horizontal, tr("正确答案"));
    question_model->setHeaderData(9, Qt::Horizontal, tr("难度"));

    //question_model->setHeaderData(7, Qt::Horizontal, tr("班级"));
    question_model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableView_3->setModel(question_model);

    ui->tableView_3->setColumnHidden(0, true);
    ui->tableView_3->setColumnHidden(6, true);
    ui->tableView_3->setColumnHidden(7, true);
    //ui->tableView_3->setColumnHidden(9,true);
    ui->tableView_3->setColumnHidden(10, true);
    ui->tableView_3->setColumnHidden(11, true);

    //ui->tableView_3->verticalHeader()->hide();

    ui->tableView_3->setColumnWidth(1, 280);
    ui->tableView_3->setColumnWidth(2, (ui->tableView_3->width() - 300) / 5);
    ui->tableView_3->setColumnWidth(3, (ui->tableView_3->width() - 300) / 5);
    ui->tableView_3->setColumnWidth(4, (ui->tableView_3->width() - 300) / 5);
    ui->tableView_3->setColumnWidth(5, (ui->tableView_3->width() - 300) / 5);
    ui->tableView_3->setColumnWidth(8, (ui->tableView_3->width() - 300) / 10);
    ui->tableView_3->setColumnWidth(9, (ui->tableView_3->width() - 300) / 10);
}

void MainWindow::on_pushButton_39_clicked() {
    //【管理考试】按钮
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_11_clicked() {
    //【查看成绩】

    update_student_grade_table();


    ui->tabWidget->setCurrentIndex(4);
}

void MainWindow::update_student_grade_table() {

    open_database();
    student_grade_model = new QSqlTableModel();


    QSqlQuery query_grade_student;
    query_grade_student.prepare("select stu_code,stu_name,stu_grade from system.stu_grade where class_id = :class_id");
    query_grade_student.bindValue(":class_id", current_class_id);

    query_grade_student.exec();

    student_grade_model->setQuery(query_grade_student);

    student_grade_model->setHeaderData(0, Qt::Horizontal, tr("学号"));
    student_grade_model->setHeaderData(1, Qt::Horizontal, tr("姓名"));
    student_grade_model->setHeaderData(2, Qt::Horizontal, tr("成绩"));


    ui->tableView_4->verticalHeader()->hide();
    ui->tableView_4->setModel(student_grade_model);
    ui->tableView_4->setColumnWidth(0, ui->tableView_4->width() / 3 - 2);
    ui->tableView_4->setColumnWidth(1, ui->tableView_4->width() / 3 - 2);
    ui->tableView_4->setColumnWidth(2, ui->tableView_4->width() / 3 - 2);

}

void MainWindow::on_pushButton_45_clicked() {
    //返回所选班级管理
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_46_clicked() {
    //返回所选班级管理
    ui->tabWidget->setCurrentIndex(1);

}

void MainWindow::set_teacher_code(QString code) {
    teacher_code = code;
}

QString MainWindow::get_teacher_code() {
    return teacher_code;
}

void MainWindow::set_teacher_name(QString name) {
    teacher_name = name;
}

QString MainWindow::get_teacher_name() {
    return teacher_name;
}

void MainWindow::update_title_name() {
    QString str;
    str.append("欢迎!  " + get_teacher_name() + " 老师\n");
    str.append("账号:【" + get_teacher_code() + "】");
    ui->label_2->setText(str);
}


void MainWindow::on_comboBox_5_activated(const QString &arg1) {
    if (arg1 == "选择年份") {
        ui->pushButton_2->hide();
        ui->pushButton_3->hide();
        ui->pushButton_4->hide();
        ui->pushButton_5->hide();
        ui->pushButton_6->hide();
        ui->pushButton_7->hide();
        ui->pushButton_8->hide();

    } else {
        open_database();

        QSqlQuery query;

        //and regexp_like(class_id,'||:year||........')
        query.prepare(
                "select distinct class_id,course_name from system.class where teacher_code = :teacher_code and  regexp_like(class_id,:year)");
        query.bindValue(":teacher_code", teacher_code);
        query.bindValue(":year", arg1 + "........");

        query.exec();
        query.next();

        QString str;
        if (query.value(0).toString() != "") {
            str = query.value(0).toString();
            str.append("\n");
            str.append(query.value(1).toString());
            ui->pushButton_2->setText(str);
            ui->pushButton_2->show();
            str.clear();
        } else {
            ui->pushButton_2->hide();
        }
        query.next();

        if (query.value(0).toString() != "") {
            str = query.value(0).toString();
            str.append("\n");
            str.append(query.value(1).toString());
            ui->pushButton_3->setText(str);
            ui->pushButton_3->show();
            str.clear();
        } else {
            ui->pushButton_3->hide();
        }
        query.next();
        if (query.value(0).toString() != "") {

            str = query.value(0).toString();
            str.append("\n");
            str.append(query.value(1).toString());
            ui->pushButton_4->setText(str);
            ui->pushButton_4->show();
            str.clear();
        } else {
            ui->pushButton_4->hide();
        }
        query.next();
        if (query.value(0) != "") {

        } else {

        }
        query.next();
        if (query.value(0) != "") {

        } else {

        }
        query.clear();
    }

}

void MainWindow::on_pushButton_47_clicked() {
    QString datetime_text = ui->dateTimeEdit->dateTime().toString("yyyy-MM-dd hh:mm:ss");
    int examtime_text = ui->spinBox_examtime->value();
    int exam_question_number = ui->spinBox_exam_question_number->value();
    qDebug() << datetime_text << examtime_text << exam_question_number;
    QSqlQuery update_exam_info;
    update_exam_info.prepare(
            "update system.exam set exam_date = :exam_date ,exam_time = :exam_time,exam_question_number =:exam_question_number where test_id =:test_id");
    update_exam_info.bindValue(":exam_date", datetime_text);
    update_exam_info.bindValue(":exam_time", examtime_text);
    update_exam_info.bindValue(":test_id", current_class_id + "1");

    update_exam_info.bindValue(":exam_question_number", exam_question_number);

    if (update_exam_info.exec()) {
        QMessageBox::information(this, "消息", tr("更新成功！"));
    }
}

void MainWindow::on_pushButton_41_clicked() {

    //qDebug()<<ui->textEdit_question->toPlainText();
    bool question_text_input = false;
    bool answer_click = false;
    bool answer_input = false;
    if (ui->textEdit_question->toPlainText() != "") {
        question_text_input = true;
    }
    if (ui->radioButton_a->isChecked() || ui->radioButton_b->isChecked() ||
        ui->radioButton_c->isChecked() || ui->radioButton_d->isChecked()) {
        answer_click = true;
    }
    if (ui->lineEdit_a->text() != "" && ui->lineEdit_b->text() != "" &&
        ui->lineEdit_c->text() != "" && ui->lineEdit_d->text() != "") {
        answer_input = true;
    }
    if (question_text_input && answer_click && answer_input) {
        open_database();

        int question_number;
        QString question_number_in_str;
        if (question_model->rowCount() == 0) {
            question_number_in_str = "0001";
        } else {
            question_number = question_model->rowCount();
            qDebug() << "question_model->rowCount()" << question_model->rowCount();
            question_number--;

            question_number_in_str = question_model->index(question_number, 0).data().toString();

            qDebug() << "row:Data " << question_number_in_str;


            question_number = question_number_in_str.right(4).toUInt() + 1;

            qDebug() << "this quesnum " << question_number;

            if (question_number < 10) {
                question_number_in_str.clear();
                question_number_in_str.append("000" + QString::number(question_number));
                qDebug() << "this quesnum str" << question_number_in_str;
            } else if (question_number >= 10 && question_number < 99) {
                question_number_in_str.clear();
                question_number_in_str.append("00" + QString::number(question_number));
                qDebug() << "this quesnum str" << question_number_in_str;
            } else if (question_number >= 100 && question_number < 999) {
                question_number_in_str.clear();
                question_number_in_str.append("0" + QString::number(question_number));
                qDebug() << "this quesnum str" << question_number_in_str;
            } else if (question_number >= 1000 && question_number < 9999) {
                question_number_in_str.clear();
                question_number_in_str.append(QString::number(question_number));
                qDebug() << "this quesnum str" << question_number_in_str;
            }
        }

        QString right_answer_str;
        if (ui->radioButton_a->isChecked())
            right_answer_str = "a";
        if (ui->radioButton_b->isChecked())
            right_answer_str = "b";
        if (ui->radioButton_c->isChecked())
            right_answer_str = "c";
        if (ui->radioButton_d->isChecked())
            right_answer_str = "d";

        QString question_hard;
        question_hard = QString::number(ui->spinBox_hard->value());

        QString str_question_id;

        str_question_id.append(
                current_class_id + "01" + "0" + QString::number(ui->spinBox_score->value()) + question_number_in_str);

        QSqlQuery insert_query;
        insert_query.prepare("insert into system.question(question_id,question,answer_a,answer_b,answer_c,answer_d,"
                             "answer_right,class_id,test_id,question_hard)values(:question_id,:question,:answer_a,:answer_b,:answer_c,:answer_d,"
                             ":answer_right,:class_id,:test_id,:question_hard)");
        insert_query.bindValue(":question_id", str_question_id);
        insert_query.bindValue(":question", ui->textEdit_question->toPlainText().trimmed());
        insert_query.bindValue(":answer_a", ui->lineEdit_a->text().trimmed());
        insert_query.bindValue(":answer_b", ui->lineEdit_b->text().trimmed());
        insert_query.bindValue(":answer_c", ui->lineEdit_c->text().trimmed());
        insert_query.bindValue(":answer_d", ui->lineEdit_d->text().trimmed());
        insert_query.bindValue(":answer_right", right_answer_str);
        insert_query.bindValue(":class_id", current_class_id);
        insert_query.bindValue(":test_id", current_class_id + "1");
        insert_query.bindValue(":question_hard", question_hard);
        qDebug() << str_question_id << ui->textEdit_question->toPlainText() <<
                 ui->lineEdit_a->text() << ui->lineEdit_b->text() << ui->lineEdit_c->text() << ui->lineEdit_d->text()
                 << right_answer_str
                 << question_hard;
        if (insert_query.exec()) {
            ui->label_tips->clear();
            ui->label_tips->setStyleSheet("QLabel{color: rgb(0, 0, 0);}");
            ui->label_tips->setText("添加成功！");
            ui->label_tips->show();
            QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));
            update_course_table();
        } else {
            ui->label_tips->clear();
            ui->label_tips->setStyleSheet("QLabel{color: rgb(170, 0, 0);}");
            ui->label_tips->setText("添加失败！");
            ui->label_tips->show();
            QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));
            update_course_table();

        }
    } else {
        ui->label_tips->clear();
        ui->label_tips->setStyleSheet("QLabel{color: rgb(170, 170, 0);}");
        ui->label_tips->setText("-请输入所有题目信息");
        ui->label_tips->show();
        QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));
    }
//        ui->label_tips->clear();
//        ui->label_tips->setText("not null");
//        ui->label_tips->show();
//        QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));

}

void MainWindow::slot_hide_tips() {
    ui->label_tips->hide();
    ui->label_tips_input->hide();
    ui->label_tips_database->hide();
}

void MainWindow::open_database() {
    db.setUserName("teacher");
    db.setPassword("teacher");
    if (!db.isOpen()) {
        db.open();
    }
}

void MainWindow::on_pushButton_clear_input_clicked() {


    QMessageBox customMsgBox;
    customMsgBox.setWindowTitle("清空");
    QPushButton *lockButton = customMsgBox.addButton(tr("确定"), QMessageBox::ActionRole);
    QPushButton *unlockButton = customMsgBox.addButton(tr("取消"), QMessageBox::ActionRole);

    customMsgBox.setText(tr("你确定清空输入？"));
    customMsgBox.exec();

    if (customMsgBox.clickedButton() == lockButton) {
        clear_input();
    }

    if (customMsgBox.clickedButton() == unlockButton) {

    }

}

void MainWindow::clear_input() {
    ui->textEdit_question->clear();
    ui->radioButton_a->setChecked(false);
    ui->radioButton_b->setChecked(false);
    ui->radioButton_c->setChecked(false);
    ui->radioButton_d->setChecked(false);
    ui->lineEdit_a->clear();
    ui->lineEdit_b->clear();
    ui->lineEdit_c->clear();
    ui->lineEdit_d->clear();
}

void MainWindow::on_pushButton_14_clicked() {
    update_course_table();
}

void MainWindow::on_pushButton_delete_one_clicked() {
    open_database();
    int current_row = ui->tableView_3->currentIndex().row();
//    QString str = ui->tableView_3->indexAt(QPoint(0,current_row)).data().toString();
//    qDebug()<<str;
    QMessageBox customMsgBox;
    customMsgBox.setWindowTitle("删除");
    QPushButton *lockButton = customMsgBox.addButton(tr("确定"), QMessageBox::ActionRole);
    QPushButton *unlockButton = customMsgBox.addButton(tr("取消"), QMessageBox::ActionRole);

    customMsgBox.setText(tr("你确定删除该条题目数据？"));
    customMsgBox.exec();

    if (customMsgBox.clickedButton() == lockButton) {
        question_model->database().transaction();
        question_model->removeRow(current_row);
        if (question_model->submitAll()) {
            question_model->database().commit();
            ui->label_tips_database->clear();
            ui->label_tips_database->setStyleSheet("QLabel{color: rgb(0, 0, 0);}");
            ui->label_tips_database->setText("删除成功！");
            ui->label_tips_database->show();
            QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));
        } else {
            question_model->database().rollback();
            ui->label_tips_database->clear();
            ui->label_tips_database->setStyleSheet("QLabel{color: rgb(170, 0, 0);}");
            ui->label_tips_database->setText("删除失败！");
            ui->label_tips_database->show();
            QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));
        }
    }

    update_course_table();
}

void MainWindow::on_pushButton_undo_clicked() {
    QMessageBox customMsgBox;
    customMsgBox.setWindowTitle("撤销编辑");
    QPushButton *lockButton = customMsgBox.addButton(tr("确定"), QMessageBox::ActionRole);
    QPushButton *unlockButton = customMsgBox.addButton(tr("取消"), QMessageBox::ActionRole);

    customMsgBox.setText(tr("未保存数据将会丢失"));
    customMsgBox.exec();

    if (customMsgBox.clickedButton() == lockButton) {
        question_model->revertAll();
        question_model->database().commit();
        ui->label_tips_database->clear();
        ui->label_tips_database->setStyleSheet("QLabel{color: rgb(0, 0, 0);}");
        ui->label_tips_database->setText("-编辑已撤销");
        ui->label_tips_database->show();
        QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));
    }
}

void MainWindow::on_pushButton_saveall_clicked() {
    //question_model->submitAll();
    QMessageBox customMsgBox;
    customMsgBox.setWindowTitle("保存");
    QPushButton *lockButton = customMsgBox.addButton(tr("确定"), QMessageBox::ActionRole);
    QPushButton *unlockButton = customMsgBox.addButton(tr("取消"), QMessageBox::ActionRole);

    customMsgBox.setText(tr("保存当前题目数据？"));
    customMsgBox.exec();

    if (customMsgBox.clickedButton() == lockButton) {
        question_model->database().transaction();
        if (question_model->submitAll()) {
            question_model->database().commit();
            ui->label_tips_database->clear();
            ui->label_tips_database->setStyleSheet("QLabel{color: rgb(0, 0, 0);}");
            ui->label_tips_database->setText("保存成功！");
            ui->label_tips_database->show();
            QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));
        } else {
            question_model->database().rollback();
            ui->label_tips_database->clear();
            ui->label_tips_database->setStyleSheet("QLabel{color: rgb(170, 0, 0);}");
            ui->label_tips_database->setText("保存失败！");
            ui->label_tips_database->show();
            QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));
        }
    }

    if (customMsgBox.clickedButton() == unlockButton) {

    }
}

void MainWindow::on_pushButton_48_clicked() {
    //返回所选班级管理
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_12_clicked() {
    //编辑试题
    ui->tabWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_question_lock_clicked() {
    //0lock and unlock
    if (question_lock == 0) {
        question_lock = 1;

        ui->tableView_3->setEnabled(true);
        ui->label_tips_database->clear();
        ui->label_tips_database->setStyleSheet("QLabel{color: rgb(0, 0, 0);}");
        ui->label_tips_database->setText("试卷已解锁!");
        ui->label_tips_database->show();

        QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));
        ui->pushButton_question_lock->setIcon(QIcon(":/img/img/unlock.ico"));
    } else if (question_lock == 1) {
        question_lock = 0;

        ui->tableView_3->setEnabled(true);
        ui->label_tips_database->clear();
        ui->label_tips_database->setStyleSheet("QLabel{color: rgb(0, 0, 0);}");
        ui->label_tips_database->setText("试卷已锁!");
        ui->label_tips_database->show();

        ui->tableView_3->setEnabled(false);
        ui->pushButton_question_lock->setIcon(QIcon(":/img/img/lock.ico"));
    }
}

void MainWindow::on_comboBox_question_class_activated(const QString &arg1) {
    if (arg1 == "选择题") {
        ui->radioButton_a->show();
        ui->radioButton_b->show();
        ui->radioButton_c->show();
        ui->radioButton_d->show();

        ui->lineEdit_a->show();
        ui->lineEdit_b->show();
        ui->lineEdit_c->show();
        ui->lineEdit_d->show();
    } else if (arg1 == "主观题") {
        ui->radioButton_a->hide();
        ui->radioButton_b->hide();
        ui->radioButton_c->hide();
        ui->radioButton_d->hide();

        ui->lineEdit_a->hide();
        ui->lineEdit_b->hide();
        ui->lineEdit_c->hide();
        ui->lineEdit_d->hide();
    }
}

void MainWindow::on_pushButton_42_clicked() {
    ui->tabWidget->setCurrentIndex(3);
    ui->tableView_5->setModel(question_model);
    ui->tableView_6->setModel(question_model);
}

void MainWindow::on_tableView_5_clicked(const QModelIndex &index) {
    ui->pushButton_down->setEnabled(true);

}

void MainWindow::on_pushButton_down_clicked() {
    QMessageBox customMsgBox;
    customMsgBox.setWindowTitle("撤销编辑");
    QPushButton *lockButton = customMsgBox.addButton(tr("确定"), QMessageBox::ActionRole);
    QPushButton *unlockButton = customMsgBox.addButton(tr("取消"), QMessageBox::ActionRole);

    customMsgBox.setText(tr("是否添加到本班题库？"));
    customMsgBox.exec();

    if (customMsgBox.clickedButton() == lockButton) {
//            question_model->revertAll();
//            question_model->database().commit();
//            ui->label_tips_database->clear();
//            ui->label_tips_database->setStyleSheet("QLabel{color: rgb(0, 0, 0);}");
//            ui->label_tips_database->setText("-编辑已撤销");
//            ui->label_tips_database->show();
//            QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));
    }
}

void MainWindow::mousePressEvent(QMouseEvent *event) {
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

void MainWindow::mouseMoveEvent(QMouseEvent *event) {

    if (event->buttons() & Qt::LeftButton) {
        /*移动中的鼠标位置相对于初始位置的相对位置.*/
        QPoint relativePos = event->globalPos() - m_startPoint;
        /*然后移动窗体即可.*/
        if (m_windowPoint.x() + ui->frame_3->width() > m_startPoint.x() &&
            m_windowPoint.y() + ui->frame_3->height() > m_startPoint.y()) {
            this->move(m_windowPoint + relativePos);
        }

    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        /*改变移动状态.*/
        m_move = false;
    }
}

void MainWindow::on_pushButton_clicked() {
    QString user_input_studentcode = ui->user_input->text();
    QString user_input_courseid = ui->user_input_2->text();
    QString user_input_year = ui->comboBox_4->currentText();
    if (user_input_studentcode != "" && user_input_courseid != "" && user_input_year != "选择年份") {
        open_database();
        student_grade_model = new QSqlTableModel();


        QSqlQuery query_grade_student;
        query_grade_student.prepare(
                "select stu_code,stu_name,stu_grade from system.stu_grade where class_id = :class_id and stu_code = :stu_code");
        query_grade_student.bindValue(":class_id", user_input_year + user_input_courseid + teacher_code.right(3));
        query_grade_student.bindValue(":stu_code", user_input_studentcode);

        query_grade_student.exec();

        student_grade_model->setQuery(query_grade_student);

        student_grade_model->setHeaderData(0, Qt::Horizontal, tr("学号"));
        student_grade_model->setHeaderData(1, Qt::Horizontal, tr("姓名"));
        student_grade_model->setHeaderData(2, Qt::Horizontal, tr("成绩"));


        ui->tableView->verticalHeader()->hide();
        ui->tableView->setModel(student_grade_model);
        ui->tableView->setColumnWidth(0, ui->tableView_4->width() / 3 - 2);
        ui->tableView->setColumnWidth(1, ui->tableView_4->width() / 3 - 2);
        ui->tableView->setColumnWidth(2, ui->tableView_4->width() / 3 - 2);
        if (ui->tableView->indexAt(QPoint(0, 0)).data() == "") {
            ui->label_13->show();
            student_grade_model->clear();
        }
    } else {
        student_grade_model->clear();
        ui->label_tips_input->clear();
        ui->label_tips_input->setStyleSheet("QLabel{color: rgb(170, 170, 0);}");
        ui->label_tips_input->setText("-请输入所有信息");
        ui->label_tips_input->show();
        QTimer::singleShot(3000, this, SLOT(slot_hide_tips()));
    }
}
