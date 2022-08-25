#include "notepad.h"
#include "ui_notepad.h"
#include<QFile>
#include<QDir>
#include<QFileDialog>
#include<QMessageBox>
#include<QScrollBar>
#include<QTextStream>
#include<QFont>
#include<QDesktopServices>
#pragma execution_character_set("utf-8")
Notepad::Notepad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Notepad)
{
    ui->setupUi(this);
    setFixedSize(600,500);//设置500*400且不允许拉伸
    ui->textEdit->verticalScrollBar()->setValue(ui->textEdit->verticalScrollBar()->maximumHeight());
    isChanged=0;//构造函数初始化设置为不需要保存
    connect(ui->action_exit,SIGNAL(triggered(bool)),this,SLOT(notepad_close()));
    //每当编辑框文本发生改变时，就使编辑状态被改变
    connect(ui->textEdit,SIGNAL(textChanged()),this,SLOT(set_change_status()));
    isnew=0;//默认不是新文件
    text_type="SimSun";//默认宋体
    set_B=50;//50为正常
    size=8;//默认为8
}

Notepad::~Notepad()
{
    delete ui;
}
void Notepad::notepad_close()
{
    if(isChanged==0)
    {
        close();
    }
    else
    {
        int ret=QMessageBox::question(NULL,"提示","要保存吗？");
        if(ret==QMessageBox::Yes)
        {
            if(isnew==1)//新文件，等于另存为的功能
            {
                on_action_saveas_triggered();
            }
            else
            {
                saveTextByIOStream(aFileName);//直接保存
            }
        }
        else
        {
            close();
        }
    }
}

void Notepad::on_action_open_triggered()
{
    QString curPath=QDir::currentPath();//获取系统当前目录
        QString dlgTitle="打开一个文件"; //对话框标题
        QString filter="所有文件(*.*);;文本文件(*.txt);;程序文件(*.h *.cpp)"; //文件过滤器
        aFileName=QFileDialog::getOpenFileName(this,dlgTitle,curPath,filter);
        if (aFileName.isEmpty())
            return;
        if(!openTextByIOStream(aFileName))
        {
            QMessageBox::warning(NULL,"警告","文件打开失败!");

        }

}
bool Notepad::openTextByIOStream(const QString &aFileName)
{ //用 QTextStream打开文本文件
    QFile aFile(aFileName);
       if (!aFile.exists()) //文件不存在
           return false;
       if (!aFile.open(QIODevice::ReadOnly | QIODevice::Text))
           return false;
       QTextStream aStream(&aFile); //用文本流读取文件
       ui->textEdit->setPlainText(aStream.readAll());
       aFile.close();//关闭文件

       return  true;
}

void Notepad::on_action_save_triggered()
{
    if(isnew==0)//正常情况下
    {
        saveTextByIOStream(aFileName);//如果不是另存为，直接用打开文件的时候获取的文件名即可。
    }
    else//用户新建文件后，点击的是保存。这里保存和另存为实现的功能是一致的
    {
        on_action_saveas_triggered();
    }
}

void Notepad::on_action_author_triggered()
{
    QMessageBox::about(NULL,"关于","Qt记事本v1.0\n作者：吉法师");
}


void Notepad::on_action_saveas_triggered()
{
    QString curPath=QDir::currentPath();//获取系统当前目录
        QString dlgTitle="另存为一个文件"; //对话框标题
        QString filter="文本文件(*.txt);;c++文件(*.cpp);;h文件(*.h)"; //文件过滤器
       aFileName=QFileDialog::getSaveFileName(this,dlgTitle,curPath,filter);
        if (aFileName.isEmpty())
            return;
     saveTextByIOStream(aFileName);
}

void Notepad::on_action_new_triggered()
{
    if(isChanged!=0)//代表文件被修改了，理应只有0.1两种状态
    {
        int ret=QMessageBox::question(NULL,"提示","要保存吗？");
        if(ret==QMessageBox::Yes)
        {
            saveTextByIOStream(aFileName);
        }

    }
    else//只有在先点击保存按钮后才有可能出现这种情况
    {
        ui->textEdit->setText("");
        isChanged=1;
    }
    isnew=1;//设置为新文件
}
void Notepad::set_change_status()
{
    isChanged=1;//用信号槽机制来调用本函数
}
bool Notepad::saveTextByIOStream(const QString &aFileName)
{//用QTextStream保存文本文件
    QFile aFile(aFileName);
       if (!aFile.open(QIODevice::WriteOnly | QIODevice::Text))
           return false;
       QTextStream aStream(&aFile); //用文本流读取文件
       QString str=ui->textEdit->toPlainText(); //转换为字符串
       aStream<<str; //写入文本流
       aFile.close();//关闭文件
       return  true;
}


void Notepad::on_action_red_triggered()
{
    ui->textEdit->setTextColor(Qt::red);
}

void Notepad::on_action_blue_triggered()
{
    ui->textEdit->setTextColor(Qt::blue);
}

void Notepad::on_action_green_triggered()
{
    ui->textEdit->setTextColor(Qt::green);
}

void Notepad::on_action_yellow_triggered()
{
    ui->textEdit->setTextColor(Qt::yellow);
}

void Notepad::on_action_black_default_triggered()
{
    ui->textEdit->setTextColor(Qt::black);
}
void Notepad::closeEvent(QCloseEvent *event)
{
    notepad_close();//相当于重写了这个函数
}

void Notepad::on_action_5_triggered()
{
    QFont font;
    if(set_l==0)
    {
        font.setItalic(true);
        set_l=1;
    }
    else
    {
        font.setItalic(false);
        set_l=0;
    }
    ui->textEdit->setFont(font);
}

void Notepad::on_action_B_triggered()
{
    if(set_B==50)
    {
        set_B=75;//75为加粗
    }
    else
    {
        set_B=50;
    }
    set_font();
}
void Notepad::set_font()
{
    QFont font(text_type,size,set_B);//字体，大小，是否加粗
    ui->textEdit->setFont(font);
}

void Notepad::on_action16_triggered()
{
    size=16;
    set_font();
}

void Notepad::on_action12_triggered()
{
    size=12;
    set_font();
}

void Notepad::on_action10_triggered()
{
    size=10;
    set_font();
}

void Notepad::on_action8_triggered()
{
    size=8;
    set_font();
}

void Notepad::on_action_songti_triggered()
{
    text_type="SimSun";
    set_font();
}

void Notepad::on_action_kaiti_triggered()
{
    text_type="KaiTi";
    set_font();
}

void Notepad::on_action_heiti_triggered()
{
    text_type="SimHei";
    set_font();
}

void Notepad::on_action_ankai_triggered()
{
    text_type="STXingKai";
    set_font();
}


