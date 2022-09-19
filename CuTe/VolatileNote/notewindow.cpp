#include "notewindow.h"
#include "ui_notewindow.h"
#include"QDebug"
#include"QMessageBox"
#include"QScreen"
#include"QPushButton"
#include"QMovie"

#include <Qt>
NoteWindow::NoteWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::NoteWindow)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_InputMethodEnabled, true);
    /*框体居中电脑物理屏幕,仅限于单屏*/
    QScreen *screen=this->screen();
    QSize thisprosize = this->frameGeometry().size();
    this->move((screen->size().width()-thisprosize.width())/2,
               (screen->size().height()-thisprosize.height())/2);
     this->setWindowFlags(Qt::FramelessWindowHint);//使用无系统边框的窗口模式
}

NoteWindow::~NoteWindow()
{
    delete ui;
}
void NoteWindow::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        m_move = true;
        m_startPoint = event->globalPos();
        m_windowPoint = this->frameGeometry().topLeft();
    }
}
void NoteWindow::mouseMoveEvent(QMouseEvent *event) {
    if (event->buttons() & Qt::LeftButton) {
        QPoint relativePos = event->globalPos() - m_startPoint;
        this->move(m_windowPoint + relativePos);
    }
}
void NoteWindow::mouseReleaseEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        m_move = false;
    }
}

void NoteWindow::on_pushButton_clicked()
{
    /*
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
    */
    QApplication::quit();
}


void NoteWindow::on_pushButton_2_clicked()
{
//    showMinimized();//minimize it
    ui->textEdit->clear();

}

