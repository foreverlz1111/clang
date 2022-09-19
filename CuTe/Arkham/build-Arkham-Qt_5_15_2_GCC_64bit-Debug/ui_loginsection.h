/********************************************************************************
** Form generated from reading UI file 'loginsection.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSECTION_H
#define UI_LOGINSECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_LoginSection
{
public:
    QPushButton *mini_button;
    QRadioButton *radioButton_2;
    QLabel *label;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QLabel *label_2;
    QPushButton *close_button;
    QLineEdit *user_input;
    QLineEdit *password_input;
    QFrame *frame;
    QLabel *loading;

    void setupUi(QDialog *LoginSection)
    {
        if (LoginSection->objectName().isEmpty())
            LoginSection->setObjectName(QString::fromUtf8("LoginSection"));
        LoginSection->resize(455, 595);
        LoginSection->setMinimumSize(QSize(455, 595));
        LoginSection->setMaximumSize(QSize(455, 595));
        mini_button = new QPushButton(LoginSection);
        mini_button->setObjectName(QString::fromUtf8("mini_button"));
        mini_button->setGeometry(QRect(370, 10, 41, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setBold(true);
        font.setWeight(75);
        mini_button->setFont(font);
        mini_button->setAutoFillBackground(false);
        mini_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:none;\n"
"	color: rgb(217, 241, 226);\n"
"	background-color: rgb(117, 202, 137);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"background-color: rgb(117, 202, 137);\n"
"}\n"
""));
        mini_button->setAutoRepeat(true);
        mini_button->setAutoExclusive(true);
        mini_button->setAutoDefault(true);
        radioButton_2 = new QRadioButton(LoginSection);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(120, 400, 71, 19));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        radioButton_2->setFont(font1);
        radioButton_2->setChecked(true);
        label = new QLabel(LoginSection);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 110, 331, 111));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(52);
        label->setFont(font2);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(LoginSection);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 440, 371, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(11);
        pushButton->setFont(font3);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	\n"
"	border-radius:3px;\n"
"	\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	\n"
"	border:1px solid rgb(0,0,0);\n"
"	\n"
"}"));
        radioButton = new QRadioButton(LoginSection);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(40, 400, 81, 19));
        radioButton->setFont(font1);
        radioButton->setChecked(false);
        radioButton->setAutoRepeat(false);
        label_2 = new QLabel(LoginSection);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 240, 371, 21));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(85, 0, 0);\n"
"border-radius:3px;\n"
"background-color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);
        close_button = new QPushButton(LoginSection);
        close_button->setObjectName(QString::fromUtf8("close_button"));
        close_button->setGeometry(QRect(410, 10, 41, 31));
        close_button->setFont(font);
        close_button->setAutoFillBackground(false);
        close_button->setStyleSheet(QString::fromUtf8("QPushButton\n"
"\n"
"{\n"
"	border:none;\n"
"	color: rgb(217, 241, 226);\n"
"	background-color: rgb(117, 202, 137);\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"	color: rgb(255, 255, 255);\n"
"background-color: rgb(117, 202, 137);\n"
"}\n"
""));
        close_button->setAutoRepeat(true);
        close_button->setAutoExclusive(true);
        close_button->setAutoDefault(true);
        user_input = new QLineEdit(LoginSection);
        user_input->setObjectName(QString::fromUtf8("user_input"));
        user_input->setGeometry(QRect(40, 280, 371, 41));
        user_input->setFont(font1);
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
        user_input->setCursorPosition(4);
        user_input->setDragEnabled(true);
        user_input->setReadOnly(false);
        user_input->setCursorMoveStyle(Qt::LogicalMoveStyle);
        user_input->setClearButtonEnabled(true);
        password_input = new QLineEdit(LoginSection);
        password_input->setObjectName(QString::fromUtf8("password_input"));
        password_input->setGeometry(QRect(40, 340, 371, 41));
        password_input->setFont(font1);
        password_input->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:3px;\n"
"	border:1px solid rgb(182, 182, 188);\n"
"}\n"
"QLineEdit:hover{\n"
"	border:1px solid rgb(0,0,0);\n"
"}"));
        password_input->setMaxLength(20);
        password_input->setEchoMode(QLineEdit::Password);
        password_input->setClearButtonEnabled(true);
        frame = new QFrame(LoginSection);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-10, 0, 471, 621));
        frame->setFont(font1);
        frame->setStyleSheet(QString::fromUtf8("border:1px solid rgb(255,255,255);\n"
"border-radius:6px;\n"
"background-color: rgb(117, 202, 137);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        loading = new QLabel(frame);
        loading->setObjectName(QString::fromUtf8("loading"));
        loading->setGeometry(QRect(200, 500, 68, 15));
        frame->raise();
        mini_button->raise();
        radioButton_2->raise();
        label->raise();
        pushButton->raise();
        radioButton->raise();
        label_2->raise();
        close_button->raise();
        user_input->raise();
        password_input->raise();

        retranslateUi(LoginSection);

        mini_button->setDefault(true);
        close_button->setDefault(true);


        QMetaObject::connectSlotsByName(LoginSection);
    } // setupUi

    void retranslateUi(QDialog *LoginSection)
    {
        LoginSection->setWindowTitle(QCoreApplication::translate("LoginSection", "Dialog", nullptr));
        mini_button->setText(QCoreApplication::translate("LoginSection", "-", nullptr));
        radioButton_2->setText(QCoreApplication::translate("LoginSection", "\350\200\203\345\212\241", nullptr));
        label->setText(QCoreApplication::translate("LoginSection", "LOGO", nullptr));
        pushButton->setText(QCoreApplication::translate("LoginSection", "\347\231\273\345\275\225", nullptr));
        radioButton->setText(QCoreApplication::translate("LoginSection", "\345\255\246\347\224\237", nullptr));
        label_2->setText(QCoreApplication::translate("LoginSection", "\343\200\220\345\257\206\347\240\201\344\270\215\346\255\243\347\241\256\357\274\214\350\257\267\351\207\215\350\257\225\343\200\221", nullptr));
        close_button->setText(QCoreApplication::translate("LoginSection", "X", nullptr));
        user_input->setText(QCoreApplication::translate("LoginSection", "8888", nullptr));
        user_input->setPlaceholderText(QCoreApplication::translate("LoginSection", "\347\224\250\346\210\267\345\220\215\346\210\226\345\255\246\345\217\267", nullptr));
        password_input->setText(QCoreApplication::translate("LoginSection", "123456", nullptr));
        password_input->setPlaceholderText(QCoreApplication::translate("LoginSection", "\345\257\206\347\240\201", nullptr));
        loading->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginSection: public Ui_LoginSection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSECTION_H
