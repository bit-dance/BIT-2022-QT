#include "notepad.h"
#include "ui_notepad.h"
#include <QLabel>
#include <QDialog>
#include <QMessageBox>
#include <QString>
#include <QFileDialog>
#include <QStatusBar>
#include <QTextEdit>
#include <QTextStream>
#include <QToolBar>
#include <QDateTime>

notepad::notepad(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::notepad)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
    QToolBar *tBar=this->addToolBar("工具栏");
    tBar->addAction(ui->actionNew);
    tBar->addAction(ui->actionOpen);
    tBar->addAction(ui->actionSave);
    tBar->addAction(ui->actionSave_as);
    tBar->addAction(ui->actionCut);
    tBar->addAction(ui->actionCopy);
    tBar->addAction(ui->actionPaste);
    tBar->addAction(ui->actionRedo);
    tBar->addAction(ui->actionUndo);

    QStatusBar *sBar=this->statusBar();
    QLabel *label = new QLabel(this);
    QDateTime current_date_time = QDateTime::currentDateTime();
    QString datetime = current_date_time.toString("yyyy年MM月dd日dddd");
    label->setText(datetime);
    sBar->addWidget(label);

}

notepad::~notepad()
{
    delete ui;
}

void notepad::on_actionNew_triggered()
{
    filePath= "";
    ui->textEdit->setText("");
}

void notepad::on_actionOpen_triggered()
{
    QString fileName= QFileDialog::getOpenFileName(this,"Open","../","txt(*.txt)");
    QFile file(fileName);
    filePath=fileName;
    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"..","file not open");
        return ;
    }
    QTextStream in(&file);
    QString text = in.readAll();
    ui->textEdit->setText(text);
    file.close();
}

void notepad::on_actionSave_triggered()
{

    QFile file(filePath);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"..","Error");
        return ;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}

void notepad::on_actionSave_as_triggered()
{
    QString fileName= QFileDialog::getSaveFileName(this,"Save","../","txt(*.txt)");
    QFile file(fileName);
    filePath=fileName;
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"..","Error");
        return ;
    }
    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.flush();
    file.close();
}

void notepad::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void notepad::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void notepad::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void notepad::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void notepad::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void notepad::on_actionAbout_Notepad_triggered()
{
    QString aboutText;
    aboutText ="Author: James Chen\n";
    aboutText +="Date: 16/08/2022\n";
    aboutText +="(C) Notepad (R)\n";
    QMessageBox::about(this,"About Notepad",aboutText);
}
