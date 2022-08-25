#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected slots:
    void NewFile();     //新建文件
    void OpenFile();    //打开文件
    void SaverFile();   //保存文件
    void SaverFileAs(); //另存为
    void Paste();        //粘贴
    void Copy();        //复制
    void CloseWindow(); //关闭窗口
    void WindowTitle(); //窗口平铺
    void WindowCasca(); //窗口叠放
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
