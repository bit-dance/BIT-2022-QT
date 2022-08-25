#ifndef NOTEPAD_H
#define NOTEPAD_H

#include <QMainWindow>

namespace Ui {
class Notepad;
}

class Notepad : public QMainWindow
{
    Q_OBJECT

public:
    explicit Notepad(QWidget *parent = 0);
    void closeEvent(QCloseEvent *event);
    void set_font();//设置字体的统一函数
    ~Notepad();
private slots:
    void notepad_close();

    void on_action_open_triggered();
    bool openTextByIOStream(const QString &aFileName);
    void on_action_save_triggered();

    void on_action_author_triggered();
    bool saveTextByIOStream(const QString &aFileName);
    void on_action_saveas_triggered();

    void on_action_new_triggered();
    void set_change_status();//设定ischanged的状态

    void on_action_red_triggered();

    void on_action_blue_triggered();

    void on_action_green_triggered();

    void on_action_yellow_triggered();

    void on_action_black_default_triggered();

    void on_action_5_triggered();

    void on_action_B_triggered();

    void on_action16_triggered();

    void on_action12_triggered();

    void on_action10_triggered();

    void on_action8_triggered();

    void on_action_songti_triggered();

    void on_action_kaiti_triggered();

    void on_action_heiti_triggered();

    void on_action_ankai_triggered();


private:
    Ui::Notepad *ui;
    int isChanged;//判断文件是否已经保存 0为不需要保存，1为需要保存
    QString fileNameString;//文件名
    QString aFileName;
    QString str;//要显示的内容
    int isnew;//判断是否是新建的文件，涉及到保存和另存为的问题。
    QString text_type;//当前字体
    int set_l;
    int set_B;
    int size;//字体大小
};

#endif // NOTEPAD_H
