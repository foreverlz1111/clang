#ifndef NOTEWINDOW_H
#define NOTEWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
QT_BEGIN_NAMESPACE
namespace Ui { class NoteWindow; }
QT_END_NAMESPACE

class NoteWindow : public QMainWindow
{
    Q_OBJECT

public:
    NoteWindow(QWidget *parent = nullptr);
    ~NoteWindow();
protected:
    void mousePressEvent(QMouseEvent *event);

    void mouseMoveEvent(QMouseEvent *event);

    void mouseReleaseEvent(QMouseEvent *event);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::NoteWindow *ui;

    bool m_move;
    QPoint m_startPoint;
    QPoint m_windowPoint;


};
#endif // NOTEWINDOW_H
