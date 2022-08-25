#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QAction>
#include<QDebug>
#include "subtext.h"
#include <QMdiSubWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QClipboard>
#include <QDebug>
#include <QTextEdit>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    this->setWindowTitle("Jbk-Notepad");
    connect(ui->action_N,&QAction::triggered,this,&MainWindow::NewFile);
    connect(ui->action_S,&QAction::triggered,this,&MainWindow::SaverFile);
    connect(ui->action_O,&QAction::triggered,this,&MainWindow::OpenFile);
    connect(ui->action_A,&QAction::triggered,this,&MainWindow::SaverFileAs);
    connect(ui->action_E,&QAction::triggered,this,&MainWindow::close);
    connect(ui->action_V,&QAction::triggered,this,&MainWindow::Paste);
    connect(ui->action_C,&QAction::triggered,this,&MainWindow::Copy);
    connect(ui->action_CW,&QAction::triggered,this,&MainWindow::CloseWindow);
    connect(ui->action_T,&QAction::triggered,this,&MainWindow::WindowTitle);
    connect(ui->action_L,&QAction::triggered,this,&MainWindow::WindowCasca);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::NewFile()
{
    //qDebug()<<"hello"<<endl;
    SubText *subtext=new SubText();
    connect(subtext,&SubText::textChanged,[=]{subtext->SetSaveFlag(false);});
    ui->mdiArea->addSubWindow(subtext);
    subtext->show();
}
//打开文件
void MainWindow::OpenFile()
{
   QString filepath= QFileDialog::getOpenFileName(this,"打开文件",".","(*.txt)");
   if(!filepath.isEmpty())
   {
       SubText *subtext=new SubText();
       subtext->setfilepath(filepath);
       ui->mdiArea->addSubWindow(subtext);
       QFile file(filepath);
       if (file.open(QIODevice::Text|QIODevice::ReadOnly))
       {
           subtext->setText(file.readAll());
           connect(subtext,&SubText::textChanged,[=]{subtext->SetSaveFlag(false);});
           subtext->show();
       }
       else
       {
           QMessageBox::information(this,"提示","文件打开失败！");
           delete subtext;
       }
   }
}

//保存文件
void MainWindow::SaverFile()
{
    QMdiSubWindow *subwindow=ui->mdiArea->currentSubWindow();
    if(subwindow==nullptr)
    {
        QMessageBox::warning(this,"警告","没有可以保存的文件!");
        return;
    }
    SubText *subtext=qobject_cast<SubText *>(subwindow->widget());
    QString savepath=subtext->getfilepath();
    if(savepath.isEmpty())
    {
       QString str=QFileDialog::getSaveFileName(this,"保存文件","new.txt","Text (*.txt)");
       QFile file(str);
       if(file.open(QIODevice::Text | QIODevice::WriteOnly))
       {
           file.write(subtext->toPlainText().toUtf8());
           file.close();
           subtext->setfilepath(str);
           subtext->SetSaveFlag(true);
          // QMessageBox::information(this,"提示","保存成功");
       }
       else {
           QMessageBox::warning(this,"警告","保存文件失败！");
       }

    }
    else
    {
        QFile file(savepath);
        if(file.open(QIODevice::Text | QIODevice::WriteOnly) |QIODevice::Truncate)
        {
            file.write(subtext->toPlainText().toUtf8());
            subtext->SetSaveFlag(true);
            file.close();
           // QMessageBox::information(this,"提示","保存成功");
        }
        else
        {
            QMessageBox::warning(this,"警告","保存文件失败！");
        }
    }
}

//文件另存为
void MainWindow::SaverFileAs()
{
    QMdiSubWindow *subwindow=ui->mdiArea->currentSubWindow();
    if(subwindow==nullptr)
    {
        QMessageBox::warning(this,"警告","没有可以保存的文件!");
        return;
    }
    SubText *subtext=qobject_cast<SubText *>(subwindow->widget());
    QString filepath=QFileDialog::getSaveFileName(this,"文件另存为","new.txt","Text (*.txt)");
    if(filepath.isEmpty())
    {
        QMessageBox::information(this,"提示","文件路径获取失败！");
        return;
    }
    else
    {
        QFile file(filepath);
        if(file.open(QIODevice::Text | QIODevice::WriteOnly))
        {
            file.write(subtext->toPlainText().toUtf8());
            subtext->SetSaveFlag(true);
            file.close();
        }
    }
}

//粘贴
void MainWindow::Paste()
{

    QClipboard *clipboard = QApplication::clipboard();   //获取系统剪贴板指针
    QString text= clipboard->text();                    //获取剪贴板内容
    QMdiSubWindow *subwindow=ui->mdiArea->currentSubWindow();
    if(subwindow!=nullptr)
    {
        SubText *p_text=qobject_cast<SubText *>(subwindow->widget());
        p_text->insertPlainText(text);
    }
}

//复制
void MainWindow::Copy()
{
    QMdiSubWindow *subwindow=ui->mdiArea->currentSubWindow();
    if(subwindow)
    {
        SubText *p_text=qobject_cast<SubText *>(subwindow->widget());
        QString text=p_text->textCursor().selectedText();
//        qDebug()<<text<<endl;
        QClipboard *clipboard = QApplication::clipboard();   //获取系统剪贴板指针
        clipboard->setText(text);
    }

}

//关闭窗口
void MainWindow::CloseWindow()
{
    QMdiSubWindow *subwindow=ui->mdiArea->activeSubWindow();
    if(subwindow)
    {
        SubText *p_text=qobject_cast<SubText *>(subwindow->widget());
        if(!p_text->GetSaveFlag())
        {
            QMessageBox::StandardButton stand= QMessageBox::information(this,"提示","文本未保存，是否关闭！"
                                        ,QMessageBox::Yes|QMessageBox::No,QMessageBox::Yes);
            if(stand==QMessageBox::Yes)
            {
                subwindow->close();
            }
        }
        else
        {
            subwindow->close();
        }
    }
}

//平铺所有窗口
void MainWindow::WindowTitle()
{

    ui->mdiArea->tileSubWindows();
}


void MainWindow::WindowCasca()
{
    ui->mdiArea->cascadeSubWindows();
}




