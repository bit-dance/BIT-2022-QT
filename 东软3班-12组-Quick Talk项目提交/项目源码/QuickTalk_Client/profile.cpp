#include "profile.h"
#include "ui_profile.h"
#include "mainwindow.h"
#include <qpropertyanimation.h>


Profile::Profile(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Profile)
{
    ui->setupUi(this);
    this->setWindowTitle("背景图片");//设置左上角文字
    this->setWindowIcon(QIcon(":/image/iCOnBlue.png"));//设置左上角图标
    this->setWindowFlags(Qt::FramelessWindowHint);//去边框
    this->setAttribute(Qt::WA_TranslucentBackground);//设置窗口透明

    //淡入淡出动画未实现
       QPropertyAnimation *animation = new QPropertyAnimation(this, "windowOpacity");
        animation->setDuration(1000);
        animation->setStartValue(0);
        animation->setEndValue(1);
        animation->start();
}

Profile::~Profile()
{
    delete ui;
}

void Profile::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton && event->pos().y()>0 && event->pos().y()<160)
    {
        mousePressed = true;//按下状态
        mousePoint = event->globalPos() - this->pos();//寻找相对位置
        event->accept();
    }
}
void Profile::mouseMoveEvent(QMouseEvent *event)
{
    if(mousePressed && (event->buttons() && Qt::LeftButton) && event->pos().y()>0 && event->pos().y()<160)
    {
        this->move(event->globalPos() - mousePoint);
        event->accept();
    }
}
void Profile::mouseReleaseEvent(QMouseEvent *event)
{
    mousePressed = false;
}


void Profile::on_hide_clicked()
{
    this->showMinimized();
}

void Profile::on_close_clicked()
{
    this->close();
}

void Profile::on_pf1_clicked()
{
    emit change1();
}
void Profile::on_pf2_clicked()
{
    emit change2();
}
void Profile::on_pf3_clicked()
{
    emit change3();
}
void Profile::on_pf4_clicked()
{
    emit change4();
}
void Profile::on_pf5_clicked()
{
    emit change5();
}
void Profile::on_pf6_clicked()
{
    emit change6();
}
void Profile::on_pf7_clicked()
{
    emit change7();
}

void Profile::paintEvent(QPaintEvent *p1)
{
    //绘制样式
    QStyleOption opt;
    opt.initFrom(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);//绘制样式

    QBitmap bmp(this->size());
    bmp.fill();
    QPainter painter(&bmp);
    painter.setPen(Qt::NoPen);
    painter.setBrush(Qt::black);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.drawRoundedRect(bmp.rect(), 20, 20);
    setMask(bmp);
}
