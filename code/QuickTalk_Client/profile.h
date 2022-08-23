#ifndef PROFILE_H
#define PROFILE_H

#include <QWidget>
#include <QMouseEvent>

namespace Ui {
class Profile;
}

class Profile : public QWidget
{
    Q_OBJECT

public:
    explicit Profile(QWidget *parent = nullptr);
    ~Profile();

private slots:


    void on_hide_clicked();
    void on_close_clicked();
    void on_pf1_clicked();
    void on_pf2_clicked();
    void on_pf3_clicked();
    void on_pf4_clicked();
    void on_pf5_clicked();
    void on_pf6_clicked();
    void on_pf7_clicked();

signals:
    void change1();
    void change2();
    void change3();
    void change4();
    void change5();
    void change6();
    void change7();


protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

private:
    Ui::Profile* ui;
    bool mousePressed;//鼠标是否按下
    QPoint mousePoint;//鼠标（x，y轴）拖动自定义的坐标
};

#endif // PROFILE_H
