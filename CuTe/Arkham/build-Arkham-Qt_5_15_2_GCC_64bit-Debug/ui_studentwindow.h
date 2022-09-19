/********************************************************************************
** Form generated from reading UI file 'studentwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTWINDOW_H
#define UI_STUDENTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentWindow
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_start_time;
    QLabel *label_4;
    QPushButton *pushButton_37;
    QLabel *label_start_course_name;
    QLabel *label_2;
    QWidget *tab_2;
    QFrame *frame;
    QTextEdit *textEdit;
    QRadioButton *radioButton_a;
    QLabel *label_6;
    QRadioButton *radioButton_b;
    QLabel *label_7;
    QRadioButton *radioButton_c;
    QLabel *label_8;
    QRadioButton *radioButton_d;
    QLabel *label_9;
    QPushButton *pushButton_next;
    QLabel *label_question_number;
    QRadioButton *radioButton_empty;
    QPushButton *pushButton_previous;
    QLabel *label_error_tips;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QLabel *label_5;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_question_1;
    QPushButton *pushButton_question_2;
    QPushButton *pushButton_question_3;
    QPushButton *pushButton_question_4;
    QPushButton *pushButton_question_5;
    QPushButton *pushButton_question_6;
    QPushButton *pushButton_question_7;
    QPushButton *pushButton_question_8;
    QPushButton *pushButton_question_9;
    QPushButton *pushButton_question_10;
    QPushButton *pushButton_question_11;
    QPushButton *pushButton_question_12;
    QPushButton *pushButton_question_13;
    QPushButton *pushButton_question_14;
    QPushButton *pushButton_question_15;
    QPushButton *pushButton_question_16;
    QPushButton *pushButton_question_17;
    QPushButton *pushButton_question_18;
    QPushButton *pushButton_question_19;
    QPushButton *pushButton_question_20;
    QLabel *label_11;
    QLabel *label_time_left;
    QWidget *tab_3;
    QLabel *label_time_left_2;
    QFrame *frame_3;
    QLabel *label_17;
    QPushButton *close_button;
    QLabel *label_18;
    QPushButton *mini_button;

    void setupUi(QDialog *StudentWindow)
    {
        if (StudentWindow->objectName().isEmpty())
            StudentWindow->setObjectName(QString::fromUtf8("StudentWindow"));
        StudentWindow->resize(1317, 906);
        StudentWindow->setMinimumSize(QSize(1317, 906));
        StudentWindow->setMaximumSize(QSize(1317, 906));
        tabWidget = new QTabWidget(StudentWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 80, 1331, 831));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 110, 1141, 401));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(11);
        label->setFont(font1);
        label_start_time = new QLabel(tab);
        label_start_time->setObjectName(QString::fromUtf8("label_start_time"));
        label_start_time->setGeometry(QRect(540, 550, 521, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setBold(true);
        font2.setWeight(75);
        label_start_time->setFont(font2);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(540, 650, 561, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(9);
        label_4->setFont(font3);
        pushButton_37 = new QPushButton(tab);
        pushButton_37->setObjectName(QString::fromUtf8("pushButton_37"));
        pushButton_37->setEnabled(false);
        pushButton_37->setGeometry(QRect(540, 680, 211, 49));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font4.setPointSize(11);
        font4.setBold(false);
        font4.setWeight(50);
        pushButton_37->setFont(font4);
        pushButton_37->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_37->setAcceptDrops(true);
        pushButton_37->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:3px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/exam.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_37->setIcon(icon);
        pushButton_37->setIconSize(QSize(32, 32));
        label_start_course_name = new QLabel(tab);
        label_start_course_name->setObjectName(QString::fromUtf8("label_start_course_name"));
        label_start_course_name->setGeometry(QRect(540, 590, 491, 21));
        label_start_course_name->setFont(font2);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(540, 620, 501, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font5.setPointSize(9);
        font5.setBold(true);
        font5.setWeight(75);
        label_2->setFont(font5);
        label_2->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"\n"
"	color: rgb(79, 79, 79);\n"
"}\n"
""));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        frame = new QFrame(tab_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(280, 0, 1051, 811));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font6.setPointSize(12);
        frame->setFont(font6);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(1);
        frame->setMidLineWidth(0);
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(50, 70, 951, 271));
        textEdit->setFont(font1);
        textEdit->setReadOnly(true);
        radioButton_a = new QRadioButton(frame);
        radioButton_a->setObjectName(QString::fromUtf8("radioButton_a"));
        radioButton_a->setGeometry(QRect(100, 440, 911, 41));
        radioButton_a->setFont(font6);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(60, 430, 31, 61));
        label_6->setFont(font6);
        radioButton_b = new QRadioButton(frame);
        radioButton_b->setObjectName(QString::fromUtf8("radioButton_b"));
        radioButton_b->setGeometry(QRect(100, 500, 921, 41));
        radioButton_b->setFont(font6);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(60, 490, 31, 61));
        label_7->setFont(font6);
        radioButton_c = new QRadioButton(frame);
        radioButton_c->setObjectName(QString::fromUtf8("radioButton_c"));
        radioButton_c->setGeometry(QRect(100, 560, 921, 41));
        radioButton_c->setFont(font6);
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(60, 550, 31, 61));
        label_8->setFont(font6);
        radioButton_d = new QRadioButton(frame);
        radioButton_d->setObjectName(QString::fromUtf8("radioButton_d"));
        radioButton_d->setGeometry(QRect(100, 620, 921, 41));
        radioButton_d->setFont(font6);
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(60, 610, 31, 61));
        label_9->setFont(font6);
        pushButton_next = new QPushButton(frame);
        pushButton_next->setObjectName(QString::fromUtf8("pushButton_next"));
        pushButton_next->setGeometry(QRect(250, 710, 141, 51));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font7.setPointSize(13);
        pushButton_next->setFont(font7);
        pushButton_next->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_next->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_next->setIconSize(QSize(32, 32));
        label_question_number = new QLabel(frame);
        label_question_number->setObjectName(QString::fromUtf8("label_question_number"));
        label_question_number->setGeometry(QRect(50, 40, 91, 21));
        label_question_number->setFont(font);
        radioButton_empty = new QRadioButton(frame);
        radioButton_empty->setObjectName(QString::fromUtf8("radioButton_empty"));
        radioButton_empty->setGeometry(QRect(900, 720, 81, 41));
        radioButton_empty->setFont(font6);
        pushButton_previous = new QPushButton(frame);
        pushButton_previous->setObjectName(QString::fromUtf8("pushButton_previous"));
        pushButton_previous->setGeometry(QRect(60, 710, 141, 51));
        pushButton_previous->setFont(font7);
        pushButton_previous->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_previous->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_previous->setIconSize(QSize(32, 32));
        label_error_tips = new QLabel(frame);
        label_error_tips->setObjectName(QString::fromUtf8("label_error_tips"));
        label_error_tips->setGeometry(QRect(410, 710, 411, 51));
        QFont font8;
        font8.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font8.setPointSize(14);
        font8.setBold(false);
        font8.setWeight(50);
        label_error_tips->setFont(font8);
        pushButton_22 = new QPushButton(tab_2);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        pushButton_22->setEnabled(false);
        pushButton_22->setGeometry(QRect(50, 630, 181, 51));
        pushButton_22->setFont(font7);
        pushButton_22->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_22->setIconSize(QSize(32, 32));
        pushButton_23 = new QPushButton(tab_2);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        pushButton_23->setGeometry(QRect(50, 710, 181, 51));
        QFont font9;
        font9.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font9.setPointSize(13);
        font9.setBold(true);
        font9.setItalic(true);
        font9.setWeight(75);
        pushButton_23->setFont(font9);
        pushButton_23->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_23->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_23->setIconSize(QSize(32, 32));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 40, 201, 31));
        QFont font10;
        font10.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font10.setPointSize(10);
        label_5->setFont(font10);
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 70, 201, 241));
        layoutWidget->setFont(font);
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_question_1 = new QPushButton(layoutWidget);
        pushButton_question_1->setObjectName(QString::fromUtf8("pushButton_question_1"));
        pushButton_question_1->setFont(font7);
        pushButton_question_1->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_1->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_1, 0, 0, 1, 1);

        pushButton_question_2 = new QPushButton(layoutWidget);
        pushButton_question_2->setObjectName(QString::fromUtf8("pushButton_question_2"));
        pushButton_question_2->setFont(font7);
        pushButton_question_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_2->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_2, 0, 1, 1, 1);

        pushButton_question_3 = new QPushButton(layoutWidget);
        pushButton_question_3->setObjectName(QString::fromUtf8("pushButton_question_3"));
        pushButton_question_3->setFont(font7);
        pushButton_question_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_3->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_3, 0, 2, 1, 1);

        pushButton_question_4 = new QPushButton(layoutWidget);
        pushButton_question_4->setObjectName(QString::fromUtf8("pushButton_question_4"));
        pushButton_question_4->setFont(font7);
        pushButton_question_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_4->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_4, 0, 3, 1, 1);

        pushButton_question_5 = new QPushButton(layoutWidget);
        pushButton_question_5->setObjectName(QString::fromUtf8("pushButton_question_5"));
        pushButton_question_5->setFont(font7);
        pushButton_question_5->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_5->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_5, 0, 4, 1, 1);

        pushButton_question_6 = new QPushButton(layoutWidget);
        pushButton_question_6->setObjectName(QString::fromUtf8("pushButton_question_6"));
        pushButton_question_6->setFont(font7);
        pushButton_question_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_6->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_6, 1, 0, 1, 1);

        pushButton_question_7 = new QPushButton(layoutWidget);
        pushButton_question_7->setObjectName(QString::fromUtf8("pushButton_question_7"));
        pushButton_question_7->setFont(font7);
        pushButton_question_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_7->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_7, 1, 1, 1, 1);

        pushButton_question_8 = new QPushButton(layoutWidget);
        pushButton_question_8->setObjectName(QString::fromUtf8("pushButton_question_8"));
        pushButton_question_8->setFont(font7);
        pushButton_question_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_8->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_8->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_8, 1, 2, 1, 1);

        pushButton_question_9 = new QPushButton(layoutWidget);
        pushButton_question_9->setObjectName(QString::fromUtf8("pushButton_question_9"));
        pushButton_question_9->setFont(font7);
        pushButton_question_9->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_9->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_9->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_9, 1, 3, 1, 1);

        pushButton_question_10 = new QPushButton(layoutWidget);
        pushButton_question_10->setObjectName(QString::fromUtf8("pushButton_question_10"));
        pushButton_question_10->setFont(font7);
        pushButton_question_10->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_10->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_10->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_10, 1, 4, 1, 1);

        pushButton_question_11 = new QPushButton(layoutWidget);
        pushButton_question_11->setObjectName(QString::fromUtf8("pushButton_question_11"));
        pushButton_question_11->setEnabled(false);
        pushButton_question_11->setFont(font7);
        pushButton_question_11->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_11->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_11->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_11, 2, 0, 1, 1);

        pushButton_question_12 = new QPushButton(layoutWidget);
        pushButton_question_12->setObjectName(QString::fromUtf8("pushButton_question_12"));
        pushButton_question_12->setEnabled(false);
        pushButton_question_12->setFont(font7);
        pushButton_question_12->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_12->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_12->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_12, 2, 1, 1, 1);

        pushButton_question_13 = new QPushButton(layoutWidget);
        pushButton_question_13->setObjectName(QString::fromUtf8("pushButton_question_13"));
        pushButton_question_13->setEnabled(false);
        pushButton_question_13->setFont(font7);
        pushButton_question_13->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_13->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_13->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_13, 2, 2, 1, 1);

        pushButton_question_14 = new QPushButton(layoutWidget);
        pushButton_question_14->setObjectName(QString::fromUtf8("pushButton_question_14"));
        pushButton_question_14->setEnabled(false);
        pushButton_question_14->setFont(font7);
        pushButton_question_14->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_14->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_14->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_14, 2, 3, 1, 1);

        pushButton_question_15 = new QPushButton(layoutWidget);
        pushButton_question_15->setObjectName(QString::fromUtf8("pushButton_question_15"));
        pushButton_question_15->setEnabled(false);
        pushButton_question_15->setFont(font7);
        pushButton_question_15->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_15->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_15->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_15, 2, 4, 1, 1);

        pushButton_question_16 = new QPushButton(layoutWidget);
        pushButton_question_16->setObjectName(QString::fromUtf8("pushButton_question_16"));
        pushButton_question_16->setEnabled(false);
        pushButton_question_16->setFont(font7);
        pushButton_question_16->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_16->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_16->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_16, 3, 0, 1, 1);

        pushButton_question_17 = new QPushButton(layoutWidget);
        pushButton_question_17->setObjectName(QString::fromUtf8("pushButton_question_17"));
        pushButton_question_17->setEnabled(false);
        pushButton_question_17->setFont(font7);
        pushButton_question_17->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_17->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_17->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_17, 3, 1, 1, 1);

        pushButton_question_18 = new QPushButton(layoutWidget);
        pushButton_question_18->setObjectName(QString::fromUtf8("pushButton_question_18"));
        pushButton_question_18->setEnabled(false);
        pushButton_question_18->setFont(font7);
        pushButton_question_18->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_18->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_18->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_18, 3, 2, 1, 1);

        pushButton_question_19 = new QPushButton(layoutWidget);
        pushButton_question_19->setObjectName(QString::fromUtf8("pushButton_question_19"));
        pushButton_question_19->setEnabled(false);
        pushButton_question_19->setFont(font7);
        pushButton_question_19->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_19->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_19->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_19, 3, 3, 1, 1);

        pushButton_question_20 = new QPushButton(layoutWidget);
        pushButton_question_20->setObjectName(QString::fromUtf8("pushButton_question_20"));
        pushButton_question_20->setFont(font7);
        pushButton_question_20->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_20->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:5px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_question_20->setIconSize(QSize(32, 32));

        gridLayout->addWidget(pushButton_question_20, 3, 4, 1, 1);

        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(40, 330, 201, 31));
        QFont font11;
        font11.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font11.setPointSize(10);
        font11.setBold(false);
        font11.setWeight(50);
        label_11->setFont(font11);
        label_time_left = new QLabel(tab_2);
        label_time_left->setObjectName(QString::fromUtf8("label_time_left"));
        label_time_left->setGeometry(QRect(40, 370, 201, 61));
        QFont font12;
        font12.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font12.setPointSize(24);
        font12.setBold(true);
        font12.setUnderline(true);
        font12.setWeight(75);
        label_time_left->setFont(font12);
        label_time_left->setFrameShape(QFrame::StyledPanel);
        label_time_left->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        label_time_left_2 = new QLabel(tab_3);
        label_time_left_2->setObjectName(QString::fromUtf8("label_time_left_2"));
        label_time_left_2->setGeometry(QRect(380, 290, 521, 191));
        label_time_left_2->setFont(font12);
        label_time_left_2->setFrameShape(QFrame::StyledPanel);
        label_time_left_2->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_3, QString());
        frame_3 = new QFrame(StudentWindow);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 1331, 111));
        frame_3->setFont(font);
        frame_3->setAutoFillBackground(false);
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 191, 119);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_17 = new QLabel(StudentWindow);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(30, 10, 141, 91));
        QFont font13;
        font13.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font13.setPointSize(34);
        label_17->setFont(font13);
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        close_button = new QPushButton(StudentWindow);
        close_button->setObjectName(QString::fromUtf8("close_button"));
        close_button->setGeometry(QRect(1270, 0, 41, 31));
        close_button->setFont(font2);
        close_button->setAutoFillBackground(false);
        close_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:none;\n"
"	color: rgb(217, 241, 226);\n"
"background-color: rgb(74, 191, 119);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"background-color: rgb(74, 191, 119);\n"
"}\n"
""));
        close_button->setAutoRepeat(true);
        close_button->setAutoExclusive(true);
        close_button->setAutoDefault(true);
        label_18 = new QLabel(StudentWindow);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(1080, 60, 141, 41));
        label_18->setFont(font10);
        label_18->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"	\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QLabel{\n"
"color: rgb(217, 241, 226);\n"
"}"));
        mini_button = new QPushButton(StudentWindow);
        mini_button->setObjectName(QString::fromUtf8("mini_button"));
        mini_button->setGeometry(QRect(1230, 0, 41, 31));
        mini_button->setFont(font2);
        mini_button->setAutoFillBackground(false);
        mini_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:none;\n"
"	color: rgb(217, 241, 226);\n"
"background-color: rgb(74, 191, 119);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"background-color: rgb(74, 191, 119);\n"
"}\n"
""));
        mini_button->setAutoRepeat(true);
        mini_button->setAutoExclusive(true);
        mini_button->setAutoDefault(true);

        retranslateUi(StudentWindow);

        close_button->setDefault(true);
        mini_button->setDefault(true);


        QMetaObject::connectSlotsByName(StudentWindow);
    } // setupUi

    void retranslateUi(QDialog *StudentWindow)
    {
        StudentWindow->setWindowTitle(QCoreApplication::translate("StudentWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("StudentWindow", "\350\200\203\347\224\237\351\241\273\347\237\245\357\274\232\n"
"1.\350\200\203\347\224\237\345\272\224\346\220\272\345\270\246\346\234\254\344\272\272\345\207\206\350\200\203\350\257\201\345\222\214\346\234\211\346\225\210\350\272\253\344\273\275\350\257\201\344\273\266\345\217\202\345\212\240\350\200\203\350\257\225\343\200\202\n"
"\n"
"2.\350\200\203\347\224\237\345\272\224\345\234\250\350\200\203\345\211\21515\345\210\206\351\222\237\345\210\260\350\276\276\350\200\203\345\234\272\357\274\214\344\272\244\351\252\214\345\207\206\350\200\203\350\257\201\345\222\214\346\234\211\346\225\210\350\272\253\344\273\275\350\257\201\344\273\266\343\200\202\n"
"\n"
"3.\350\200\203\347\224\237\346\217\220\345\211\2155\345\210\206\351\222\237\345\234\250\350\200\203\350\257\225\347\263\273\347\273\237\344\270\255\350\276\223\345\205\245\350\207\252\345\267\261\347\232\204\345\207\206\350\200\203\350\257\201\345\217\267\357\274\214\345\271\266\346\240\270\345\257\271\345\261\217\345\271\225\346\230\276\347\244\272\347\232"
                        "\204\345\247\223\345\220\215\343\200\201\346\234\211\346\225\210\350\272\253\344\273\275\350\257\201\344\273\266\345\217\267\357\274\214\345\246\202\344\270\215\347\254\246\345\220\210\357\274\214\347\224\261\347\233\221\350\200\203\344\272\272\345\221\230\345\270\256\345\205\266\346\237\245\346\211\276\345\216\237\345\233\240\343\200\202\n"
"\350\200\203\347\224\237\344\277\241\346\201\257\344\273\245\346\212\245\345\220\215\345\272\223\345\222\214\350\200\203\347\224\237\347\255\276\345\255\227\347\232\204\343\200\212\350\200\203\347\224\237\346\212\245\345\220\215\347\231\273\350\256\260\350\241\250\343\200\213\344\277\241\346\201\257\344\270\272\345\207\206\357\274\214\344\270\215\345\276\227\346\233\264\346\224\271\346\212\245\345\220\215\344\277\241\346\201\257\345\222\214\347\231\273\345\275\225\344\277\241\346\201\257\343\200\202\n"
"\n"
"4.\350\200\203\350\257\225\345\274\200\345\247\213\345\220\216\357\274\214\350\277\237\345\210\260\350\200\203\347\224\237\347\246\201\346\255\242\345\205\245\345\234"
                        "\272\357\274\214\350\200\203\350\257\225\345\274\200\345\247\21315\345\210\206\351\222\237\345\220\216\350\200\203\347\224\237\346\211\215\350\203\275\344\272\244\345\215\267\345\271\266\347\246\273\345\274\200\350\200\203\345\234\272\343\200\202\n"
"\n"
"5.\345\234\250\347\263\273\347\273\237\346\225\205\351\232\234\343\200\201\346\255\273\346\234\272\343\200\201\346\255\273\345\276\252\347\216\257\343\200\201\344\276\233\347\224\265\346\225\205\351\232\234\347\255\211\347\211\271\346\256\212\346\203\205\345\206\265\346\227\266\357\274\214\350\200\203\347\224\237\344\270\276\346\211\213\347\224\261\347\233\221\350\200\203\344\272\272\345\221\230\345\210\244\346\226\255\345\216\237\345\233\240\343\200\202\n"
"\345\246\202\345\261\236\344\272\216\350\200\203\347\224\237\350\257\257\346\223\215\344\275\234\351\200\240\346\210\220\357\274\214\345\220\216\346\236\234\347\224\261\350\200\203\347\224\237\350\207\252\350\264\237\357\274\214\347\273\231\350\200\203\347\202\271\351\200\240\346\210\220\347\273\217\346\265"
                        "\216\346\215\237\345\244\261\347\232\204\357\274\214\347\224\261\350\200\203\347\224\237\344\270\252\344\272\272\350\264\237\346\213\205\343\200\202\n"
"\n"
"6.\345\257\271\344\272\216\350\277\235\350\247\204\350\200\203\347\224\237\357\274\214\347\224\261\346\225\231\350\202\262\351\203\250\350\200\203\350\257\225\344\270\255\345\277\203\346\240\271\346\215\256\350\277\235\350\247\204\350\256\260\345\275\225\350\277\233\350\241\214\345\244\204\347\220\206\343\200\202\n"
"\n"
"7.\350\200\203\347\224\237\346\210\220\347\273\251\347\255\211\347\254\254\345\210\206\344\270\272\344\274\230\347\247\200\343\200\201\350\211\257\345\245\275\343\200\201\345\217\212\346\240\274\343\200\201\344\270\215\345\217\212\346\240\274\345\233\233\347\255\211\357\274\21490\357\274\215100\345\210\206\344\270\272\344\274\230\347\247\200\343\200\20180\357\274\21589\345\210\206\344\270\272\350\211\257\345\245\275\343\200\20160\357\274\21579\345\210\206\344\270\272\345\217\212\346\240\274\343\200\2010\357\274\21559\345\210\206\344\270\272"
                        "\344\270\215\345\217\212\346\240\274\343\200\202\n"
"", nullptr));
        label_start_time->setText(QCoreApplication::translate("StudentWindow", "\345\274\200\350\200\203\346\227\266\351\227\264\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("StudentWindow", "*\350\267\235\345\274\200\350\200\2032\345\210\206\351\222\237\345\217\257\344\273\245\350\277\233\345\205\245\347\263\273\347\273\237", nullptr));
        pushButton_37->setText(QCoreApplication::translate("StudentWindow", "\345\274\200\345\247\213\350\200\203\350\257\225", nullptr));
        label_start_course_name->setText(QCoreApplication::translate("StudentWindow", "\350\200\203\350\257\225\347\247\221\347\233\256\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("StudentWindow", "\343\200\220\347\224\250\346\210\267\345\220\215\343\200\221+\343\200\220\350\201\214\347\247\260\343\200\221+\343\200\220\345\255\246\347\224\237\345\247\223\345\220\215\343\200\221", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("StudentWindow", "Tab 1", nullptr));
        textEdit->setHtml(QCoreApplication::translate("StudentWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\351\273\221\344\275\223'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230"
                        "\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242"
                        "\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256\351\242\230\347\233\256</span></p></body></html>", nullptr));
        radioButton_a->setText(QCoreApplication::translate("StudentWindow", "\347\255\224\346\241\210123456789123456789123456789123456789123456789123456789123456789123456789\n"
"123456789123456789", nullptr));
        label_6->setText(QCoreApplication::translate("StudentWindow", "A.", nullptr));
        radioButton_b->setText(QCoreApplication::translate("StudentWindow", "\347\255\224\346\241\210123456789123456789123456789123456789\n"
"123456789123456789123456789123456789123456789", nullptr));
        label_7->setText(QCoreApplication::translate("StudentWindow", "B.", nullptr));
        radioButton_c->setText(QCoreApplication::translate("StudentWindow", "\347\255\224\346\241\210123456789123456789\n"
"123456789123456789123456789123456789123456789123456789123456789123456789123456789", nullptr));
        label_8->setText(QCoreApplication::translate("StudentWindow", "C.", nullptr));
        radioButton_d->setText(QCoreApplication::translate("StudentWindow", "\347\255\224\346\241\2101234567891234567891234567891234567891234567891234567891234567", nullptr));
        label_9->setText(QCoreApplication::translate("StudentWindow", "D.", nullptr));
        pushButton_next->setText(QCoreApplication::translate("StudentWindow", "\344\270\213\344\270\200\351\242\230", nullptr));
        label_question_number->setText(QCoreApplication::translate("StudentWindow", "1\357\274\232", nullptr));
        radioButton_empty->setText(QCoreApplication::translate("StudentWindow", "empty", nullptr));
        pushButton_previous->setText(QCoreApplication::translate("StudentWindow", "\344\270\212\344\270\200\351\242\230", nullptr));
        label_error_tips->setText(QCoreApplication::translate("StudentWindow", "error!", nullptr));
        pushButton_22->setText(QCoreApplication::translate("StudentWindow", "\344\277\235\345\255\230\350\277\233\345\272\246", nullptr));
        pushButton_23->setText(QCoreApplication::translate("StudentWindow", "\344\272\244\345\215\267", nullptr));
        label_5->setText(QCoreApplication::translate("StudentWindow", "\351\242\230\347\233\256\347\274\226\345\217\267\357\274\232", nullptr));
        pushButton_question_1->setText(QCoreApplication::translate("StudentWindow", "1", nullptr));
        pushButton_question_2->setText(QCoreApplication::translate("StudentWindow", "2", nullptr));
        pushButton_question_3->setText(QCoreApplication::translate("StudentWindow", "3", nullptr));
        pushButton_question_4->setText(QCoreApplication::translate("StudentWindow", "4", nullptr));
        pushButton_question_5->setText(QCoreApplication::translate("StudentWindow", "5", nullptr));
        pushButton_question_6->setText(QCoreApplication::translate("StudentWindow", "6", nullptr));
        pushButton_question_7->setText(QCoreApplication::translate("StudentWindow", "7", nullptr));
        pushButton_question_8->setText(QCoreApplication::translate("StudentWindow", "8", nullptr));
        pushButton_question_9->setText(QCoreApplication::translate("StudentWindow", "9", nullptr));
        pushButton_question_10->setText(QCoreApplication::translate("StudentWindow", "10", nullptr));
        pushButton_question_11->setText(QCoreApplication::translate("StudentWindow", "11", nullptr));
        pushButton_question_12->setText(QCoreApplication::translate("StudentWindow", "12", nullptr));
        pushButton_question_13->setText(QCoreApplication::translate("StudentWindow", "13", nullptr));
        pushButton_question_14->setText(QCoreApplication::translate("StudentWindow", "14", nullptr));
        pushButton_question_15->setText(QCoreApplication::translate("StudentWindow", "15", nullptr));
        pushButton_question_16->setText(QCoreApplication::translate("StudentWindow", "16", nullptr));
        pushButton_question_17->setText(QCoreApplication::translate("StudentWindow", "17", nullptr));
        pushButton_question_18->setText(QCoreApplication::translate("StudentWindow", "18", nullptr));
        pushButton_question_19->setText(QCoreApplication::translate("StudentWindow", "19", nullptr));
        pushButton_question_20->setText(QCoreApplication::translate("StudentWindow", "20", nullptr));
        label_11->setText(QCoreApplication::translate("StudentWindow", "\350\200\203\350\257\225\345\211\251\344\275\231\346\227\266\351\227\264\357\274\232", nullptr));
        label_time_left->setText(QCoreApplication::translate("StudentWindow", "16:15:48", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("StudentWindow", "Tab 2", nullptr));
        label_time_left_2->setText(QCoreApplication::translate("StudentWindow", "\345\267\262\344\277\235\345\255\230,\345\217\257\344\273\245\347\246\273\345\274\200\350\200\203\345\234\272\n"
"\351\200\200\345\207\272", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("StudentWindow", "\351\241\265", nullptr));
        label_17->setText(QCoreApplication::translate("StudentWindow", "LOGO", nullptr));
        close_button->setText(QCoreApplication::translate("StudentWindow", "X", nullptr));
        label_18->setText(QCoreApplication::translate("StudentWindow", "time", nullptr));
        mini_button->setText(QCoreApplication::translate("StudentWindow", "_", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentWindow: public Ui_StudentWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTWINDOW_H
