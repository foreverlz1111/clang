/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label;
    QComboBox *comboBox_5;
    QWidget *tab_5;
    QPushButton *pushButton_40;
    QLabel *label_8;
    QTableView *tableView_2;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QLabel *label_14;
    QPushButton *pushButton_12;
    QWidget *tab;
    QTableView *tableView_3;
    QLabel *label_15;
    QPushButton *pushButton_41;
    QPushButton *pushButton_delete_one;
    QPushButton *pushButton_undo;
    QPushButton *pushButton_saveall;
    QPushButton *pushButton_45;
    QDateTimeEdit *dateTimeEdit;
    QPushButton *pushButton_47;
    QLabel *label_9;
    QSpinBox *spinBox_examtime;
    QTextEdit *textEdit_question;
    QRadioButton *radioButton_a;
    QRadioButton *radioButton_b;
    QRadioButton *radioButton_d;
    QRadioButton *radioButton_c;
    QLineEdit *lineEdit_a;
    QLineEdit *lineEdit_b;
    QLineEdit *lineEdit_c;
    QLineEdit *lineEdit_d;
    QSpinBox *spinBox_score;
    QLabel *label_10;
    QSpinBox *spinBox_hard;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_tips;
    QPushButton *pushButton_clear_input;
    QPushButton *pushButton_14;
    QLabel *label_tips_database;
    QLabel *label_tips_lock;
    QPushButton *pushButton_question_lock;
    QLabel *label_28;
    QSpinBox *spinBox_exam_question_number;
    QWidget *tab_3;
    QPushButton *pushButton_48;
    QComboBox *comboBox_6;
    QTableView *tableView_5;
    QTableView *tableView_6;
    QPushButton *pushButton_down;
    QLabel *label_26;
    QLabel *label_27;
    QComboBox *comboBox_7;
    QPushButton *pushButton_down_2;
    QPushButton *pushButton_down_3;
    QSpinBox *spinBox_hard_2;
    QWidget *tab_2;
    QLabel *label_16;
    QTableView *tableView_4;
    QPushButton *pushButton_46;
    QWidget *tab_6;
    QLineEdit *user_input;
    QLineEdit *user_input_2;
    QPushButton *pushButton;
    QTableView *tableView;
    QLabel *label_12;
    QLabel *label_13;
    QComboBox *comboBox_4;
    QLabel *label_5;
    QLabel *label_7;
    QLabel *label_6;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_11;
    QLabel *label_tips_input;
    QFrame *frame_3;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_6;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QFrame *frame;
    QSplitter *splitter;
    QPushButton *pushButton_37;
    QPushButton *pushButton_39;
    QPushButton *pushButton_38;
    QPushButton *pushButton_42;
    QPushButton *close_button;
    QLabel *label_18;
    QLabel *label_4;
    QPushButton *mini_button;
    QLabel *label_17;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1317, 906);
        MainWindow->setMinimumSize(QSize(1317, 906));
        MainWindow->setMaximumSize(QSize(1317, 906));
        MainWindow->setSizeIncrement(QSize(1317, 906));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        MainWindow->setFont(font);
        MainWindow->setMouseTracking(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(250, 78, 1071, 831));
        tabWidget->setFont(font);
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(true);
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tab_4->setEnabled(true);
        pushButton_2 = new QPushButton(tab_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 130, 191, 121));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(13);
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/class.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(32, 32));
        pushButton_3 = new QPushButton(tab_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(370, 130, 191, 121));
        pushButton_3->setFont(font1);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_3->setIcon(icon);
        pushButton_3->setIconSize(QSize(32, 32));
        pushButton_4 = new QPushButton(tab_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(120, 270, 191, 121));
        pushButton_4->setFont(font1);
        pushButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_4->setIcon(icon);
        pushButton_4->setIconSize(QSize(32, 32));
        pushButton_5 = new QPushButton(tab_4);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(370, 270, 191, 121));
        pushButton_5->setFont(font1);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_5->setIcon(icon);
        pushButton_5->setIconSize(QSize(32, 32));
        pushButton_6 = new QPushButton(tab_4);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(120, 410, 191, 121));
        pushButton_6->setFont(font1);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_6->setIcon(icon);
        pushButton_6->setIconSize(QSize(32, 32));
        pushButton_7 = new QPushButton(tab_4);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(370, 410, 191, 121));
        pushButton_7->setFont(font1);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_7->setIcon(icon);
        pushButton_7->setIconSize(QSize(32, 32));
        pushButton_8 = new QPushButton(tab_4);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(120, 550, 191, 121));
        pushButton_8->setFont(font1);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_8->setIcon(icon);
        pushButton_8->setIconSize(QSize(32, 32));
        pushButton_9 = new QPushButton(tab_4);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(370, 550, 191, 121));
        pushButton_9->setFont(font1);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_9->setIcon(icon);
        pushButton_9->setIconSize(QSize(32, 32));
        label = new QLabel(tab_4);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 50, 271, 21));
        label->setFont(font);
        comboBox_5 = new QComboBox(tab_4);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(120, 80, 121, 31));
        comboBox_5->setFont(font);
        comboBox_5->setStyleSheet(QString::fromUtf8("QComboBox\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:3px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QComboBox:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tab_5->setFont(font);
        pushButton_40 = new QPushButton(tab_5);
        pushButton_40->setObjectName(QString::fromUtf8("pushButton_40"));
        pushButton_40->setGeometry(QRect(20, 20, 151, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        pushButton_40->setFont(font2);
        pushButton_40->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_40->setAcceptDrops(true);
        pushButton_40->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:8px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/back.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_40->setIcon(icon1);
        label_8 = new QLabel(tab_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(80, 280, 261, 21));
        label_8->setFont(font);
        tableView_2 = new QTableView(tab_5);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(80, 300, 711, 401));
        tableView_2->setFont(font);
        pushButton_10 = new QPushButton(tab_5);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(80, 160, 181, 91));
        pushButton_10->setFont(font1);
        pushButton_10->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/exam.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon2);
        pushButton_10->setIconSize(QSize(32, 32));
        pushButton_11 = new QPushButton(tab_5);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(610, 160, 181, 91));
        pushButton_11->setFont(font1);
        pushButton_11->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/grade.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_11->setIcon(icon3);
        pushButton_11->setIconSize(QSize(32, 32));
        label_14 = new QLabel(tab_5);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(80, 130, 251, 21));
        label_14->setFont(font);
        pushButton_12 = new QPushButton(tab_5);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setEnabled(false);
        pushButton_12->setGeometry(QRect(350, 160, 181, 91));
        pushButton_12->setFont(font1);
        pushButton_12->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/img/editdocument.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_12->setIcon(icon4);
        pushButton_12->setIconSize(QSize(32, 32));
        tabWidget->addTab(tab_5, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableView_3 = new QTableView(tab);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));
        tableView_3->setGeometry(QRect(20, 420, 931, 311));
        tableView_3->setFont(font);
        label_15 = new QLabel(tab);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 360, 1021, 16));
        label_15->setFont(font);
        pushButton_41 = new QPushButton(tab);
        pushButton_41->setObjectName(QString::fromUtf8("pushButton_41"));
        pushButton_41->setGeometry(QRect(310, 320, 101, 31));
        pushButton_41->setFont(font2);
        pushButton_41->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_41->setAcceptDrops(true);
        pushButton_41->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/img/save_78935.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_41->setIcon(icon5);
        pushButton_delete_one = new QPushButton(tab);
        pushButton_delete_one->setObjectName(QString::fromUtf8("pushButton_delete_one"));
        pushButton_delete_one->setGeometry(QRect(960, 460, 91, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        pushButton_delete_one->setFont(font3);
        pushButton_delete_one->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_delete_one->setAcceptDrops(true);
        pushButton_delete_one->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/img/seo.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_delete_one->setIcon(icon6);
        pushButton_delete_one->setIconSize(QSize(20, 20));
        pushButton_undo = new QPushButton(tab);
        pushButton_undo->setObjectName(QString::fromUtf8("pushButton_undo"));
        pushButton_undo->setGeometry(QRect(960, 500, 91, 31));
        pushButton_undo->setFont(font3);
        pushButton_undo->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_undo->setAcceptDrops(true);
        pushButton_undo->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/img/return.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_undo->setIcon(icon7);
        pushButton_undo->setIconSize(QSize(20, 20));
        pushButton_saveall = new QPushButton(tab);
        pushButton_saveall->setObjectName(QString::fromUtf8("pushButton_saveall"));
        pushButton_saveall->setGeometry(QRect(960, 540, 91, 31));
        pushButton_saveall->setFont(font2);
        pushButton_saveall->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_saveall->setAcceptDrops(true);
        pushButton_saveall->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_saveall->setIcon(icon5);
        pushButton_saveall->setIconSize(QSize(20, 20));
        pushButton_45 = new QPushButton(tab);
        pushButton_45->setObjectName(QString::fromUtf8("pushButton_45"));
        pushButton_45->setGeometry(QRect(20, 10, 151, 31));
        pushButton_45->setFont(font2);
        pushButton_45->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_45->setAcceptDrops(true);
        pushButton_45->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:8px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_45->setIcon(icon1);
        dateTimeEdit = new QDateTimeEdit(tab);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(110, 380, 171, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font4.setPointSize(10);
        dateTimeEdit->setFont(font4);
        dateTimeEdit->setStyleSheet(QString::fromUtf8("QDateTimeEdit\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:3px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QDateTimeEdit:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        dateTimeEdit->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        dateTimeEdit->setDate(QDate(2022, 1, 1));
        dateTimeEdit->setCurrentSection(QDateTimeEdit::YearSection);
        pushButton_47 = new QPushButton(tab);
        pushButton_47->setObjectName(QString::fromUtf8("pushButton_47"));
        pushButton_47->setGeometry(QRect(670, 380, 131, 31));
        pushButton_47->setFont(font3);
        pushButton_47->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_47->setAcceptDrops(true);
        pushButton_47->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_47->setIcon(icon5);
        label_9 = new QLabel(tab);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(480, 380, 51, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font5.setPointSize(12);
        label_9->setFont(font5);
        spinBox_examtime = new QSpinBox(tab);
        spinBox_examtime->setObjectName(QString::fromUtf8("spinBox_examtime"));
        spinBox_examtime->setGeometry(QRect(420, 380, 51, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font6.setPointSize(11);
        spinBox_examtime->setFont(font6);
        spinBox_examtime->setWrapping(false);
        spinBox_examtime->setReadOnly(false);
        spinBox_examtime->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spinBox_examtime->setMinimum(30);
        spinBox_examtime->setMaximum(120);
        spinBox_examtime->setSingleStep(5);
        spinBox_examtime->setStepType(QAbstractSpinBox::DefaultStepType);
        spinBox_examtime->setDisplayIntegerBase(10);
        textEdit_question = new QTextEdit(tab);
        textEdit_question->setObjectName(QString::fromUtf8("textEdit_question"));
        textEdit_question->setGeometry(QRect(20, 80, 1021, 101));
        textEdit_question->setFont(font6);
        textEdit_question->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:3px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QTextEdit:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        textEdit_question->setReadOnly(false);
        radioButton_a = new QRadioButton(tab);
        radioButton_a->setObjectName(QString::fromUtf8("radioButton_a"));
        radioButton_a->setGeometry(QRect(20, 191, 41, 20));
        radioButton_a->setFont(font5);
        radioButton_a->setStyleSheet(QString::fromUtf8(""));
        radioButton_b = new QRadioButton(tab);
        radioButton_b->setObjectName(QString::fromUtf8("radioButton_b"));
        radioButton_b->setGeometry(QRect(20, 221, 41, 20));
        radioButton_b->setFont(font5);
        radioButton_b->setAutoRepeat(false);
        radioButton_d = new QRadioButton(tab);
        radioButton_d->setObjectName(QString::fromUtf8("radioButton_d"));
        radioButton_d->setGeometry(QRect(20, 281, 31, 21));
        radioButton_d->setFont(font5);
        radioButton_c = new QRadioButton(tab);
        radioButton_c->setObjectName(QString::fromUtf8("radioButton_c"));
        radioButton_c->setGeometry(QRect(20, 252, 31, 20));
        radioButton_c->setFont(font5);
        lineEdit_a = new QLineEdit(tab);
        lineEdit_a->setObjectName(QString::fromUtf8("lineEdit_a"));
        lineEdit_a->setGeometry(QRect(60, 190, 981, 26));
        lineEdit_a->setFont(font);
        lineEdit_a->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:3px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        lineEdit_b = new QLineEdit(tab);
        lineEdit_b->setObjectName(QString::fromUtf8("lineEdit_b"));
        lineEdit_b->setGeometry(QRect(60, 220, 981, 26));
        lineEdit_b->setFont(font);
        lineEdit_b->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:3px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        lineEdit_c = new QLineEdit(tab);
        lineEdit_c->setObjectName(QString::fromUtf8("lineEdit_c"));
        lineEdit_c->setGeometry(QRect(60, 250, 981, 26));
        lineEdit_c->setFont(font);
        lineEdit_c->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:3px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        lineEdit_d = new QLineEdit(tab);
        lineEdit_d->setObjectName(QString::fromUtf8("lineEdit_d"));
        lineEdit_d->setGeometry(QRect(60, 280, 981, 26));
        lineEdit_d->setFont(font);
        lineEdit_d->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:3px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        spinBox_score = new QSpinBox(tab);
        spinBox_score->setObjectName(QString::fromUtf8("spinBox_score"));
        spinBox_score->setGeometry(QRect(100, 320, 51, 31));
        spinBox_score->setFont(font);
        spinBox_score->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spinBox_score->setMinimum(5);
        spinBox_score->setMaximum(5);
        label_10 = new QLabel(tab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 320, 81, 31));
        label_10->setFont(font5);
        spinBox_hard = new QSpinBox(tab);
        spinBox_hard->setObjectName(QString::fromUtf8("spinBox_hard"));
        spinBox_hard->setEnabled(true);
        spinBox_hard->setGeometry(QRect(240, 320, 51, 31));
        spinBox_hard->setFont(font);
        spinBox_hard->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spinBox_hard->setMinimum(1);
        spinBox_hard->setMaximum(5);
        label_19 = new QLabel(tab);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setEnabled(true);
        label_19->setGeometry(QRect(160, 320, 81, 31));
        label_19->setFont(font5);
        label_20 = new QLabel(tab);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(20, 380, 81, 31));
        label_20->setFont(font4);
        label_21 = new QLabel(tab);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(320, 380, 91, 31));
        label_21->setFont(font4);
        label_tips = new QLabel(tab);
        label_tips->setObjectName(QString::fromUtf8("label_tips"));
        label_tips->setGeometry(QRect(580, 320, 361, 31));
        label_tips->setFont(font5);
        label_tips->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(170, 170, 0);\n"
"}"));
        pushButton_clear_input = new QPushButton(tab);
        pushButton_clear_input->setObjectName(QString::fromUtf8("pushButton_clear_input"));
        pushButton_clear_input->setGeometry(QRect(440, 320, 101, 31));
        pushButton_clear_input->setFont(font2);
        pushButton_clear_input->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_clear_input->setAcceptDrops(true);
        pushButton_clear_input->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_14 = new QPushButton(tab);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(960, 420, 31, 31));
        QFont font7;
        font7.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font7.setPointSize(9);
        pushButton_14->setFont(font7);
        pushButton_14->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/img/refresh.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_14->setIcon(icon8);
        pushButton_14->setIconSize(QSize(24, 24));
        label_tips_database = new QLabel(tab);
        label_tips_database->setObjectName(QString::fromUtf8("label_tips_database"));
        label_tips_database->setGeometry(QRect(840, 380, 251, 31));
        label_tips_database->setFont(font5);
        label_tips_database->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(170, 170, 0);\n"
"}"));
        label_tips_lock = new QLabel(tab);
        label_tips_lock->setObjectName(QString::fromUtf8("label_tips_lock"));
        label_tips_lock->setGeometry(QRect(680, 350, 351, 31));
        label_tips_lock->setFont(font5);
        label_tips_lock->setLayoutDirection(Qt::RightToLeft);
        label_tips_lock->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton_question_lock = new QPushButton(tab);
        pushButton_question_lock->setObjectName(QString::fromUtf8("pushButton_question_lock"));
        pushButton_question_lock->setGeometry(QRect(940, 320, 91, 31));
        pushButton_question_lock->setFont(font2);
        pushButton_question_lock->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_question_lock->setAcceptDrops(true);
        pushButton_question_lock->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/img/lock.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_question_lock->setIcon(icon9);
        label_28 = new QLabel(tab);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(530, 380, 71, 31));
        label_28->setFont(font4);
        spinBox_exam_question_number = new QSpinBox(tab);
        spinBox_exam_question_number->setObjectName(QString::fromUtf8("spinBox_exam_question_number"));
        spinBox_exam_question_number->setGeometry(QRect(600, 380, 51, 31));
        spinBox_exam_question_number->setFont(font6);
        spinBox_exam_question_number->setWrapping(false);
        spinBox_exam_question_number->setReadOnly(false);
        spinBox_exam_question_number->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spinBox_exam_question_number->setMinimum(10);
        spinBox_exam_question_number->setMaximum(100);
        spinBox_exam_question_number->setSingleStep(5);
        spinBox_exam_question_number->setStepType(QAbstractSpinBox::DefaultStepType);
        spinBox_exam_question_number->setValue(10);
        spinBox_exam_question_number->setDisplayIntegerBase(10);
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        pushButton_48 = new QPushButton(tab_3);
        pushButton_48->setObjectName(QString::fromUtf8("pushButton_48"));
        pushButton_48->setGeometry(QRect(20, 10, 151, 31));
        pushButton_48->setFont(font2);
        pushButton_48->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_48->setAcceptDrops(true);
        pushButton_48->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:8px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_48->setIcon(icon1);
        comboBox_6 = new QComboBox(tab_3);
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setGeometry(QRect(20, 60, 251, 31));
        comboBox_6->setFont(font);
        comboBox_6->setStyleSheet(QString::fromUtf8("QComboBox\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:3px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QComboBox:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        tableView_5 = new QTableView(tab_3);
        tableView_5->setObjectName(QString::fromUtf8("tableView_5"));
        tableView_5->setGeometry(QRect(20, 130, 1021, 251));
        tableView_5->setFont(font);
        tableView_6 = new QTableView(tab_3);
        tableView_6->setObjectName(QString::fromUtf8("tableView_6"));
        tableView_6->setGeometry(QRect(20, 480, 1021, 251));
        tableView_6->setFont(font);
        pushButton_down = new QPushButton(tab_3);
        pushButton_down->setObjectName(QString::fromUtf8("pushButton_down"));
        pushButton_down->setEnabled(false);
        pushButton_down->setGeometry(QRect(490, 390, 61, 21));
        pushButton_down->setFont(font2);
        pushButton_down->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_down->setAcceptDrops(true);
        pushButton_down->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/img/down.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_down->setIcon(icon10);
        pushButton_down->setIconSize(QSize(32, 32));
        label_26 = new QLabel(tab_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(20, 90, 431, 41));
        label_27 = new QLabel(tab_3);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(20, 460, 431, 21));
        comboBox_7 = new QComboBox(tab_3);
        comboBox_7->addItem(QString());
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));
        comboBox_7->setGeometry(QRect(20, 420, 251, 31));
        comboBox_7->setFont(font);
        comboBox_7->setStyleSheet(QString::fromUtf8("QComboBox\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:3px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QComboBox:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_down_2 = new QPushButton(tab_3);
        pushButton_down_2->setObjectName(QString::fromUtf8("pushButton_down_2"));
        pushButton_down_2->setEnabled(false);
        pushButton_down_2->setGeometry(QRect(280, 420, 31, 31));
        pushButton_down_2->setFont(font2);
        pushButton_down_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_down_2->setAcceptDrops(true);
        pushButton_down_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_down_2->setIconSize(QSize(32, 32));
        pushButton_down_3 = new QPushButton(tab_3);
        pushButton_down_3->setObjectName(QString::fromUtf8("pushButton_down_3"));
        pushButton_down_3->setEnabled(false);
        pushButton_down_3->setGeometry(QRect(320, 420, 31, 31));
        pushButton_down_3->setFont(font2);
        pushButton_down_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_down_3->setAcceptDrops(true);
        pushButton_down_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_down_3->setIconSize(QSize(32, 32));
        spinBox_hard_2 = new QSpinBox(tab_3);
        spinBox_hard_2->setObjectName(QString::fromUtf8("spinBox_hard_2"));
        spinBox_hard_2->setEnabled(true);
        spinBox_hard_2->setGeometry(QRect(360, 420, 51, 31));
        spinBox_hard_2->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        spinBox_hard_2->setMinimum(1);
        spinBox_hard_2->setMaximum(5);
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(70, 90, 281, 41));
        label_16->setFont(font);
        tableView_4 = new QTableView(tab_2);
        tableView_4->setObjectName(QString::fromUtf8("tableView_4"));
        tableView_4->setGeometry(QRect(70, 160, 941, 571));
        tableView_4->setFont(font);
        pushButton_46 = new QPushButton(tab_2);
        pushButton_46->setObjectName(QString::fromUtf8("pushButton_46"));
        pushButton_46->setGeometry(QRect(20, 10, 151, 31));
        pushButton_46->setFont(font2);
        pushButton_46->setAcceptDrops(true);
        pushButton_46->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:8px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        pushButton_46->setIcon(icon1);
        tabWidget->addTab(tab_2, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        user_input = new QLineEdit(tab_6);
        user_input->setObjectName(QString::fromUtf8("user_input"));
        user_input->setGeometry(QRect(120, 110, 341, 41));
        user_input->setFont(font);
        user_input->setContextMenuPolicy(Qt::DefaultContextMenu);
        user_input->setLayoutDirection(Qt::LeftToRight);
        user_input->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border-radius:3px;\n"
"	border:1px solid rgb(182, 182, 188);\n"
"}\n"
"QLineEdit:hover{\n"
"	border:1px solid rgb(0,0,0);\n"
"}\n"
"QLineEdit:selected{\n"
"	border:5px solid rgb(0,0,0);\n"
"}"));
        user_input->setMaxLength(30);
        user_input->setFrame(true);
        user_input->setCursorPosition(0);
        user_input->setDragEnabled(true);
        user_input->setReadOnly(false);
        user_input->setCursorMoveStyle(Qt::LogicalMoveStyle);
        user_input->setClearButtonEnabled(true);
        user_input_2 = new QLineEdit(tab_6);
        user_input_2->setObjectName(QString::fromUtf8("user_input_2"));
        user_input_2->setGeometry(QRect(120, 170, 341, 41));
        user_input_2->setFont(font);
        user_input_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        user_input_2->setLayoutDirection(Qt::LeftToRight);
        user_input_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	border-radius:3px;\n"
"	border:1px solid rgb(182, 182, 188);\n"
"}\n"
"QLineEdit:hover{\n"
"	border:1px solid rgb(0,0,0);\n"
"}\n"
"QLineEdit:selected{\n"
"	border:5px solid rgb(0,0,0);\n"
"}"));
        user_input_2->setMaxLength(30);
        user_input_2->setFrame(true);
        user_input_2->setCursorPosition(0);
        user_input_2->setDragEnabled(true);
        user_input_2->setReadOnly(false);
        user_input_2->setCursorMoveStyle(Qt::LogicalMoveStyle);
        user_input_2->setClearButtonEnabled(true);
        pushButton = new QPushButton(tab_6);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 280, 341, 41));
        pushButton->setFont(font6);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        tableView = new QTableView(tab_6);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(120, 400, 871, 301));
        tableView->setFont(font);
        label_12 = new QLabel(tab_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(120, 370, 369, 26));
        label_12->setFont(font);
        label_13 = new QLabel(tab_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(130, 450, 211, 16));
        label_13->setFont(font);
        comboBox_4 = new QComboBox(tab_6);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(120, 230, 131, 31));
        comboBox_4->setFont(font);
        comboBox_4->setStyleSheet(QString::fromUtf8("QComboBox\n"
"\n"
"{\n"
"	border:1px solid rgb(0,0,0);\n"
"	border-radius:3px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QComboBox:hover\n"
"{\n"
"	background-color: rgb(250, 250, 250);\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        label_5 = new QLabel(tab_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(270, 240, 68, 15));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_7 = new QLabel(tab_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(480, 120, 68, 15));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_6 = new QLabel(tab_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(480, 190, 68, 15));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        layoutWidget = new QWidget(tab_6);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 40, 371, 61));
        layoutWidget->setFont(font);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        verticalLayout->addWidget(label_11);

        label_tips_input = new QLabel(tab_6);
        label_tips_input->setObjectName(QString::fromUtf8("label_tips_input"));
        label_tips_input->setGeometry(QRect(310, 230, 361, 31));
        QFont font8;
        font8.setPointSize(12);
        label_tips_input->setFont(font8);
        label_tips_input->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(170, 170, 0);\n"
"}"));
        tabWidget->addTab(tab_6, QString());
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(0, 0, 1321, 111));
        frame_3->setFont(font);
        frame_3->setAutoFillBackground(false);
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 191, 119);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        scrollArea_3 = new QScrollArea(centralWidget);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(20, 510, 211, 301));
        scrollArea_3->setFont(font);
        scrollArea_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        scrollArea_3->setFrameShape(QFrame::StyledPanel);
        scrollArea_3->setFrameShadow(QFrame::Plain);
        scrollArea_3->setLineWidth(1);
        scrollArea_3->setMidLineWidth(0);
        scrollArea_3->setWidgetResizable(false);
        scrollArea_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_6"));
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 73, 88, 153));
        label_22 = new QLabel(scrollAreaWidgetContents_6);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(10, 10, 61, 16));
        label_22->setFont(font);
        label_23 = new QLabel(scrollAreaWidgetContents_6);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(10, 50, 72, 15));
        label_23->setFont(font);
        label_24 = new QLabel(scrollAreaWidgetContents_6);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(10, 130, 72, 15));
        label_24->setFont(font);
        label_25 = new QLabel(scrollAreaWidgetContents_6);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(10, 90, 72, 15));
        label_25->setFont(font);
        scrollArea_3->setWidget(scrollAreaWidgetContents_6);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 110, 251, 801));
        frame->setFont(font);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(20, 150, 211, 291));
        splitter->setFont(font);
        splitter->setStyleSheet(QString::fromUtf8("QSplitter::handle\n"
"{\n"
"    background-color: rgb(255, 255, 255);\n"
"}"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setHandleWidth(32);
        pushButton_37 = new QPushButton(splitter);
        pushButton_37->setObjectName(QString::fromUtf8("pushButton_37"));
        pushButton_37->setFont(font2);
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
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/img/img/classroom.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_37->setIcon(icon11);
        pushButton_37->setIconSize(QSize(32, 32));
        splitter->addWidget(pushButton_37);
        pushButton_39 = new QPushButton(splitter);
        pushButton_39->setObjectName(QString::fromUtf8("pushButton_39"));
        pushButton_39->setEnabled(false);
        pushButton_39->setFont(font2);
        pushButton_39->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_39->setAcceptDrops(true);
        pushButton_39->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        pushButton_39->setIcon(icon2);
        pushButton_39->setIconSize(QSize(32, 32));
        splitter->addWidget(pushButton_39);
        pushButton_38 = new QPushButton(splitter);
        pushButton_38->setObjectName(QString::fromUtf8("pushButton_38"));
        pushButton_38->setEnabled(false);
        pushButton_38->setFont(font2);
        pushButton_38->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_38->setAcceptDrops(true);
        pushButton_38->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/img/img/recheck.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_38->setIcon(icon12);
        pushButton_38->setIconSize(QSize(30, 30));
        splitter->addWidget(pushButton_38);
        pushButton_42 = new QPushButton(splitter);
        pushButton_42->setObjectName(QString::fromUtf8("pushButton_42"));
        pushButton_42->setEnabled(false);
        pushButton_42->setFont(font2);
        pushButton_42->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_42->setAcceptDrops(true);
        pushButton_42->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/img/img/wondicon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_42->setIcon(icon13);
        pushButton_42->setIconSize(QSize(32, 32));
        splitter->addWidget(pushButton_42);
        close_button = new QPushButton(centralWidget);
        close_button->setObjectName(QString::fromUtf8("close_button"));
        close_button->setGeometry(QRect(1270, 0, 41, 31));
        QFont font9;
        font9.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font9.setBold(true);
        font9.setWeight(75);
        close_button->setFont(font9);
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
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(1080, 60, 141, 41));
        label_18->setFont(font4);
        label_18->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"	\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QLabel{\n"
"color: rgb(217, 241, 226);\n"
"}"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(850, 60, 211, 41));
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"	\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QLabel{\n"
"color: rgb(217, 241, 226);\n"
"}"));
        mini_button = new QPushButton(centralWidget);
        mini_button->setObjectName(QString::fromUtf8("mini_button"));
        mini_button->setGeometry(QRect(1230, 0, 41, 31));
        mini_button->setFont(font9);
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
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(30, 10, 141, 91));
        QFont font10;
        font10.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font10.setPointSize(34);
        label_17->setFont(font10);
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(660, 60, 181, 41));
        label_2->setFont(font4);
        label_2->setStyleSheet(QString::fromUtf8("QLabel:hover{\n"
"	\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QLabel{\n"
"color: rgb(217, 241, 226);\n"
"}"));
        MainWindow->setCentralWidget(centralWidget);
        frame->raise();
        tabWidget->raise();
        scrollArea_3->raise();
        splitter->raise();
        frame_3->raise();
        close_button->raise();
        label_18->raise();
        label_4->raise();
        mini_button->raise();
        label_17->raise();
        label_2->raise();

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        close_button->setDefault(true);
        mini_button->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\347\232\204\350\257\276\345\220\215\n"
"\347\217\255\347\272\247\345\217\267", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\347\232\204\350\257\276\345\220\215\n"
"\347\217\255\347\272\247\345\217\267", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\347\232\204\350\257\276\345\220\215\n"
"\347\217\255\347\272\247\345\217\267", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\347\232\204\350\257\276\345\220\215\n"
"\347\217\255\347\272\247\345\217\267", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\347\232\204\350\257\276\345\220\215\n"
"\347\217\255\347\272\247\345\217\267", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\347\232\204\350\257\276\345\220\215\n"
"\347\217\255\347\272\247\345\217\267", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\347\232\204\350\257\276\345\220\215\n"
"\347\217\255\347\272\247\345\217\267", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247\347\232\204\350\257\276\345\220\215\n"
"\347\217\255\347\272\247\345\217\267", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\351\234\200\350\246\201\347\256\241\347\220\206\347\232\204\347\217\255\347\272\247\357\274\214\347\274\226\350\276\221\350\200\203\350\257\225", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\350\257\276\347\250\213\345\271\264\344\273\275", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("MainWindow", "2018-A", nullptr));
        comboBox_5->setItemText(2, QCoreApplication::translate("MainWindow", "2018-B", nullptr));
        comboBox_5->setItemText(3, QCoreApplication::translate("MainWindow", "2019-A", nullptr));
        comboBox_5->setItemText(4, QCoreApplication::translate("MainWindow", "2019-B", nullptr));
        comboBox_5->setItemText(5, QCoreApplication::translate("MainWindow", "2020-A", nullptr));
        comboBox_5->setItemText(6, QCoreApplication::translate("MainWindow", "2020-B", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\344\270\273\351\241\265", nullptr));
        pushButton_40->setText(QCoreApplication::translate("MainWindow", "\351\207\215\346\226\260\351\200\211\346\213\251\347\217\255\347\272\247", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "-\345\275\223\345\211\215\350\257\276\347\250\213\345\255\246\347\224\237\345\220\215\345\215\225\357\274\232", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\345\210\266\344\275\234\350\257\225\345\215\267", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "-\345\217\257\350\277\233\350\241\214\346\223\215\344\275\234", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "\346\211\271\346\224\271\346\210\220\347\273\251(\344\270\273\350\247\202\351\242\230)", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "\346\234\254\345\234\260\346\226\207\344\273\266", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\350\257\225\345\215\267\350\257\246\346\203\205:", nullptr));
        pushButton_41->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\350\257\245\351\242\230", nullptr));
        pushButton_delete_one->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\346\211\200\351\200\211", nullptr));
        pushButton_undo->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
        pushButton_saveall->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\233\264\346\224\271", nullptr));
        pushButton_45->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        dateTimeEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "yyyy/M/d hh:mm", nullptr));
        pushButton_47->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\350\257\225\345\215\267\350\256\276\347\275\256", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\345\210\206\351\222\237", nullptr));
        textEdit_question->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\351\273\221\344\275\223','\351\273\221\344\275\223','\351\273\221\344\275\223'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'\351\273\221\344\275\223';\"><br /></p></body></html>", nullptr));
        textEdit_question->setPlaceholderText(QCoreApplication::translate("MainWindow", "\347\274\226\345\206\231\351\242\230\347\233\256", nullptr));
        radioButton_a->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        radioButton_b->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        radioButton_d->setText(QCoreApplication::translate("MainWindow", "D", nullptr));
        radioButton_c->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        lineEdit_a->setText(QString());
        lineEdit_a->setPlaceholderText(QCoreApplication::translate("MainWindow", "\351\200\211\351\241\271A\347\255\224\346\241\210", nullptr));
        lineEdit_b->setPlaceholderText(QCoreApplication::translate("MainWindow", "\351\200\211\351\241\271B\347\255\224\346\241\210", nullptr));
        lineEdit_c->setPlaceholderText(QCoreApplication::translate("MainWindow", "\351\200\211\351\241\271C\347\255\224\346\241\210", nullptr));
        lineEdit_d->setPlaceholderText(QCoreApplication::translate("MainWindow", "\351\200\211\351\241\271D\347\255\224\346\241\210", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\351\242\230\347\233\256\345\210\206\346\225\260\357\274\232", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\351\242\230\347\233\256\351\232\276\345\272\246\357\274\232", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\346\227\245\346\234\237\357\274\232", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "\346\214\201\347\273\255\346\227\266\351\227\264\357\274\232", nullptr));
        label_tips->setText(QCoreApplication::translate("MainWindow", "--error", nullptr));
        pushButton_clear_input->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\350\276\223\345\205\245", nullptr));
        pushButton_14->setText(QString());
        label_tips_database->setText(QCoreApplication::translate("MainWindow", "--error", nullptr));
        label_tips_lock->setText(QCoreApplication::translate("MainWindow", "(\350\257\225\345\215\267\351\224\201\345\256\232\345\220\216\344\270\215\350\203\275\347\274\226\350\276\221\345\222\214\345\242\236\345\210\240\357\274\214\351\230\262\346\255\242\350\257\257\346\223\215\344\275\234)", nullptr));
        pushButton_question_lock->setText(QCoreApplication::translate("MainWindow", "\351\224\201\345\256\232\350\257\225\345\215\267", nullptr));
        label_28->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\351\242\230\346\225\260\351\207\217:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\351\241\265", nullptr));
        pushButton_48->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        comboBox_6->setItemText(0, QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\347\217\255\347\272\247", nullptr));

        pushButton_down->setText(QString());
        label_26->setText(QCoreApplication::translate("MainWindow", "*\345\217\257\344\273\245\345\277\253\351\200\237\345\234\260\357\274\214\345\260\206\346\211\200\346\225\231\347\232\204\345\205\266\344\273\226\347\217\255\347\272\247\350\257\225\351\242\230\346\267\273\345\212\240\345\210\260\345\275\223\345\211\215\347\217\255\347\272\247\347\232\204\350\257\225\345\215\267\351\242\230\345\272\223\344\270\255\343\200\202\n"
"\345\267\262\351\200\211\347\217\255\347\272\247\351\242\230\345\272\223:", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\347\217\255\347\272\247\347\232\204\350\257\225\345\215\267\351\242\230\345\272\223:", nullptr));
        comboBox_7->setItemText(0, QCoreApplication::translate("MainWindow", "current exam", nullptr));

        pushButton_down_2->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_down_3->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\351\241\265", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\346\210\220\347\273\251\345\246\202\344\270\213\n"
"*\346\210\220\347\273\251\344\277\256\346\224\271\350\257\267\350\201\224\347\263\273\346\225\231\345\212\241\345\244\204\346\217\220\344\272\244\346\210\220\347\273\251\344\277\256\346\224\271\350\241\250", nullptr));
        pushButton_46->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\351\241\265", nullptr));
        user_input->setText(QString());
        user_input->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\345\255\246\345\217\267", nullptr));
        user_input_2->setText(QString());
        user_input_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213\345\217\267", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "-\346\237\245\350\257\242\347\273\223\346\236\234\345\246\202\344\270\213\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\346\227\240\346\210\220\347\273\251\357\274\214\346\243\200\346\237\245\345\255\246\347\224\237\346\230\257\345\220\246\351\200\211\350\257\276", nullptr));
        comboBox_4->setItemText(0, QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251\350\257\276\347\250\213\345\271\264\344\273\275", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("MainWindow", "2018-A", nullptr));
        comboBox_4->setItemText(2, QCoreApplication::translate("MainWindow", "2018-B", nullptr));
        comboBox_4->setItemText(3, QCoreApplication::translate("MainWindow", "2019-A", nullptr));
        comboBox_4->setItemText(4, QCoreApplication::translate("MainWindow", "2019-B", nullptr));
        comboBox_4->setItemText(5, QCoreApplication::translate("MainWindow", "2020-A", nullptr));
        comboBox_4->setItemText(6, QCoreApplication::translate("MainWindow", "2020-B", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "*\345\277\205\351\200\211", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "*\345\277\205\345\241\253", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "*\345\277\205\345\241\253", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\345\257\271\346\210\220\347\273\251\346\234\211\347\226\221\351\227\256\357\274\214\345\217\257\344\273\245\351\200\232\350\277\207\346\255\244\346\226\271\345\274\217\345\277\253\351\200\237\346\237\245\350\257\242", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "*\345\217\252\346\224\257\346\214\201\346\237\245\350\257\242\346\211\200\346\225\231\347\232\204\345\255\246\347\224\237\346\210\220\347\273\251", nullptr));
        label_tips_input->setText(QCoreApplication::translate("MainWindow", "--error", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\345\214\272", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "\345\205\254\345\221\2121", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "\345\205\254\345\221\2122", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "\345\205\254\345\221\2124", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "\345\205\254\345\221\2123", nullptr));
        pushButton_37->setText(QCoreApplication::translate("MainWindow", "\346\211\200\346\225\231\347\217\255\347\272\247", nullptr));
        pushButton_39->setText(QCoreApplication::translate("MainWindow", "\347\256\241\347\220\206\350\200\203\350\257\225", nullptr));
        pushButton_38->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\346\210\220\347\273\251\345\244\215\346\237\245", nullptr));
        pushButton_42->setText(QCoreApplication::translate("MainWindow", "\351\242\230\345\272\223\347\256\241\347\220\206", nullptr));
        close_button->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "time", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\343\200\220\346\255\243\345\234\250\347\256\241\347\220\206\347\217\255\347\272\247\343\200\221\n"
"+\343\200\220\345\271\264\344\273\275\343\200\221", nullptr));
        mini_button->setText(QCoreApplication::translate("MainWindow", "_", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "LOGO", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\343\200\220\347\224\250\346\210\267\345\220\215\343\200\221+\343\200\220\350\201\214\347\247\260\343\200\221\n"
"    \343\200\2208888\343\200\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
