#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "background.h"

MainWindow::MainWindow(QWidget *parent,QString name) :
    QWidget(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    my_name = name;
    clientSocket = TcpClientSocket::getInstance();
    MainInit();

    connect(clientSocket,SIGNAL(return_friend_list(QString)),this,SLOT(friend_list(QString)));//返回朋友信息，得到朋友列表
    connect(clientSocket,SIGNAL(friend_add(QString)),this,SLOT(add_friend(QString)));
    connect(clientSocket,SIGNAL(new_Group(QString)),this,SLOT(newGroup(QString)));
    connect(clientSocket,SIGNAL(return_group_list(QString)),this,SLOT(group_list(QString)));

}

//初始化
void MainWindow::MainInit(){
    ui->search->setPlaceholderText("搜索好友/群聊");//搜索输入框提示信息
    this->setWindowFlags(Qt::FramelessWindowHint);//去边框
    this->setWindowTitle("QT");//设置左上角文字
    this->setWindowIcon(QIcon(":/image/QQ.png"));//设置左上角图标

    ui->name->setText(my_name);//账号名

    //从左往右动画
    QPropertyAnimation* animation = new QPropertyAnimation(this, "size");
    animation->setDuration(500);
    animation->setStartValue(QSize(0, 780));
    animation->setEndValue(QSize(450, 780));
    animation->start();

    //请求好友,群聊信息
    clientSocket->sendMsg("G#my_name:"+my_name);



    fresh_friend_list(true,on_friend);
    fresh_friend_list(false,off_friend);

    fresh_group_list(grouplist);
}
MainWindow::~MainWindow()
{
    delete ui;
}

//更换背景
void MainWindow::on_changebackground_clicked()
{
    this->setStyleSheet("QWidget#widget{background-image:url(:/image/ss.png);}"
                        "QToolButton{border-style:none;}");

}
//换回默认背景
void MainWindow::on_defaultbackground_clicked()
{
    this->setStyleSheet("QWidget#widget{background-image:url(:/image/moon.png);}"
                        "QToolButton{border-style:none;}");
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton && event->pos().y()>0 && event->pos().y()<170)
    {
        mousePressed = true;//按下状态
        mousePoint = event->globalPos() - this->pos();//寻找相对位置
        event->accept();
    }
}
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if(mousePressed && (event->buttons() && Qt::LeftButton) && event->pos().y()>0 && event->pos().y()<170)
    {
        this->move(event->globalPos() - mousePoint);
        event->accept();
    }
}
void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    mousePressed = false;
}

void MainWindow::on_newfriend_clicked()
{
    QString friend_name = ui->search->text();
    QString str = "F#My_id:"+my_name+"/Friend_id:"+friend_name;
    clientSocket->sendMsg(str);
}
void MainWindow::on_pushButton_clicked()//点击查找群聊
{

    QString group_name = ui->search->text();
    QString str = "Gr0#My_id:"+my_name+"/group_id:"+group_name;
    if(grouplist.contains(group_name)){
        QMessageBox::information(this,"提示","您已经在群聊中\n");
    }
    else{clientSocket->sendMsg(str);}
}

void MainWindow::newGroup(QString info){
 if(info[2]=='0'){
//创建群聊成功，要弹出提示后加入群列表
     QMessageBox::information(this,"提示","添加群聊成功\n");
     int idx=info.indexOf("!");
     QString groupname=info.mid(3,idx-3);
     //添加到群列表
     grouplist.append(groupname);
     fresh_group_list(grouplist);
 }else if(info[2]=='2'){
     //创建群聊失败
     QMessageBox::information(this,"提示","添加群聊失败\n");
 }
 else{

 }

}
void MainWindow::add_friend(QString info){
    qDebug()<<info<<"in add friend";
    if(info.contains("F#0")){
        QMessageBox::information(this,"提示","已经是您的好友\n");
    }
    else if(info.contains("F#1")){
        QMessageBox::information(this,"提示","添加好友成功\n");
        clientSocket->sendMsg("G#my_name:"+my_name);
    }
    else if(info.contains("F#2")){
        QMessageBox::information(this,"提示","加好友失败\n");
    }
    else if(info.contains("F#3")){
        QMessageBox::information(this,"提示","您查找的用户不存在");
    }else if(info.contains("F#4")){
        qDebug()<<"in add friend:F#4"<<info;
        QString us=info.mid(info.indexOf('/')+1);
        QString str;
        if(QMessageBox::Yes==QMessageBox::question(this,"加好友通知","用户"+us+"想加你为好友?")){
           str = "FYMy_id:"+my_name+"/Friend_id:"+us;

        }else{
           str = "FRMy_id:"+my_name+"/Friend_id:"+us;
        }
        clientSocket->sendMsg(str);
    }else if(info.contains("F#5")){
        QMessageBox::information(this,"提示","加好友失败,对方拒绝了您的请求!!!");
    }
    fresh_friend_list(true,on_friend);
    fresh_friend_list(false,off_friend);
}
void MainWindow::friend_list(QString info){
    on_friend.clear();
    off_friend.clear();
    grouplist.clear();
    QStringList str = info.split("%");
    qDebug()<<str;
    for(int i =0; i < str.size(); ++i){
        if(str[i].contains("online")){
            QString on = str[i].mid(13,-1);
            on_friend = on.split("@");
            on_friend.removeAll("");
        }
        if(str[i].contains("offline")){
            QString off = str[i].mid(14,-1);
            off_friend = off.split("@");
            off_friend.removeAll("");
        }
        if(str[i].contains("G#1")){
            QString on = str[i].mid(4,-1);
            grouplist=on.split("@");
            grouplist.removeAll("");
            qDebug()<<"群聊信息列表";
            qDebug()<<grouplist;
            fresh_group_list(grouplist);
        }
    }
    qDebug()<<"in friend_list";
    qDebug()<<on_friend;
   qDebug()<<off_friend;
    fresh_friend_list(true,on_friend);
    fresh_friend_list(false,off_friend);
}

void MainWindow::group_list(QString info)
{
    QString on = info.mid(4,-1);
    grouplist=on.split("@");
    grouplist.removeAll("");
    qDebug()<<"群聊信息列表";
    qDebug()<<grouplist;
    fresh_group_list(grouplist);
}

void MainWindow::fresh_group_list(QStringList grouplist)
{
    qDebug()<<"in fresh group";
    qDebug()<<grouplist ;
    QList<QToolButton*> btns = ui->group->findChildren<QToolButton*>();//!!!!
    foreach (QToolButton* btn, btns){
        delete btn;
    }

    for(int i=0;i<grouplist.size();++i){
            btn=new QToolButton(this);
            //加载图标
            btn->setIcon(QPixmap(QString(":/image/chatgroup.png")));
            //设置图片大小
            btn->setIconSize(QPixmap(QString(":/image/chatgroup.png")).size()/8);
            //设置网名
            btn->setText(QString("%1").arg(grouplist[i]));
            //设置为透明
            btn->setAutoRaise(true);
            //设置显示格式
            btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
            btn->setStyleSheet("font: 25 20pt;color: rgb(0, 0, 0);border-bottom : 5px groove #6699cc;");
            btn->setGeometry(0, 0, 300, 100);
            //on.push_back(btn);
            ui->grouplayout->addWidget(btn);
            IsShow_group.push_back(false);
            connect(btn,&QToolButton::clicked,[=](){
                if(IsShow_group[i])
                {
                    QMessageBox::warning(this,"警告","该聊天框已被打开!");
                    return;
                }
                IsShow_group[i]=true;
                TalkWindow *talkwindow=new TalkWindow(nullptr,my_name,grouplist[i]);
                talkwindow->setWindowIcon(btn->icon());
                talkwindow->setWindowTitle(btn->text());
                talkwindow->show();
                //关闭时将对应的IsShow_on变为false;
                connect(talkwindow,&TalkWindow::closeWidget,this,[=](){
                    IsShow_group[i]=false;
                });
            });

    }
}
//在此刷新
void MainWindow::fresh_friend_list(bool flag,QStringList namelist){
   // qDebug()<<"in fresh friend";
   // qDebug()<<flag<<"  "<<namelist;
    if(flag==true){//在线好友
        QList<QToolButton*> btns = ui->online->findChildren<QToolButton*>();//!!!!
        foreach (QToolButton* btn, btns){
            delete btn;
        }
        for(int i=0;i<namelist.size();++i){
                btn=new QToolButton(this);
                //加载图标
                btn->setIcon(QPixmap(QString(":/image/QQ.png")));
                //设置图片大小
                btn->setIconSize(QPixmap(QString(":/image/QQ.png")).size()/2);
                //设置网名
                btn->setText(QString("%1").arg(namelist[i]));
                //设置为透明
                btn->setAutoRaise(true);
                //设置显示格式
                btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
                btn->setStyleSheet("font: 25 20pt;color: rgb(0, 0, 0);border-bottom : 5px groove #6699cc;");
                btn->setGeometry(0, 0, 300, 100);
                //on.push_back(btn);
                ui->onlayout->addWidget(btn);
                IsShow_on.push_back(false);
                connect(btn,&QToolButton::clicked,[=](){
                    if(IsShow_on[i])
                    {
                        QMessageBox::warning(this,"警告","该聊天框已被打开!");
                        return;
                    }
                    IsShow_on[i]=true;
                    TalkWindow *talkwindow=new TalkWindow(nullptr,my_name,namelist[i]);
                    talkwindow->setWindowIcon(btn->icon());
                    talkwindow->setWindowTitle(btn->text());
                    talkwindow->show();
                    //关闭时将对应的IsShow_on变为false;
                    connect(talkwindow,&TalkWindow::closeWidget,this,[=](){
                        IsShow_on[i]=false;
                    });
                });

        }
    }
    else{//离线好友
        QList<QToolButton*> btns = ui->offline->findChildren<QToolButton*>();
        foreach (QToolButton* btn, btns){
            delete btn;
        }
        for(int i=0;i<namelist.size();++i){
                btn=new QToolButton(this);
                //加载图标
//                btn->setIcon(QPixmap(QString(":/images/%1.png").arg(iconNameList[i])));
                btn->setIcon(QPixmap(QString(":/image/QQ.png")));
                //设置图片大小
//                btn->setIconSize(QPixmap(QString(":/images/%1.png").arg(iconNameList[i])).size());
                btn->setIconSize(QPixmap(QString(":/image/QQ.png")).size()/2);
                //设置网名
                btn->setText(QString("%1").arg(namelist[i]));
                //设置为透明
                btn->setAutoRaise(true);
                //设置显示格式
                btn->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
                btn->setStyleSheet("font: 25 20pt;color: rgb(175, 175, 175);border-bottom : 5px groove #6699cc;");
                btn->setGeometry(0, 0, 300, 100);
                //off.push_back(btn);
                ui->offlayout->addWidget(btn);
                IsShow_off.push_back(false);

                connect(btn,&QToolButton::clicked,[=](){
                    if(IsShow_off[i])
                    {
                        QMessageBox::warning(this,"警告","该聊天框已被打开!");
                        return;
                    }
                    IsShow_off[i]=true;
                    TalkWindow *talkwindow=new TalkWindow(nullptr,my_name,namelist[i]);
                    talkwindow->setWindowIcon(btn->icon());
                    talkwindow->setWindowTitle(btn->text());
                    talkwindow->show();
                    //关闭时将对应的IsShow_off变为false;
                    connect(talkwindow,&TalkWindow::closeWidget,this,[=](){
                        IsShow_off[i]=false;
                    });
                });
            }

    }
}



void MainWindow::on_close_clicked()
{
    clientSocket->disconnectFromHost();
    this->close();
}

void MainWindow::on_hide_clicked()
{
    this->showMinimized();
}

void MainWindow::on_newform_clicked()
{
    BackGround *background = new BackGround;
    background->show();//close();
    connect(background,&BackGround::change1,this,[=](){
        this->setStyleSheet("QWidget#widget{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0.2, stop:0 rgba(156, 100, 255, 255), stop:1 rgba(151, 220, 255, 255));}"
                            "QToolButton{border-style:none;}");
    });
    connect(background,&BackGround::change2,this,[=](){
        this->setStyleSheet("QWidget#widget{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 	#EE4000, stop:1 #6495ED);}"
                            "QToolButton{border-style:none;}");
    });
    connect(background,&BackGround::change3,this,[=](){
        this->setStyleSheet("QWidget#widget{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 	#EEAEEE, stop:1 #FFAEB9);}"
                            "QToolButton{border-style:none;}");
    });
    connect(background,&BackGround::change4,this,[=](){
        this->setStyleSheet("QWidget#widget{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #FF7F24, stop:1#EE1289);}"
                            "QToolButton{border-style:none;}");
    });
    connect(background,&BackGround::change5,this,[=](){
        this->setStyleSheet("QWidget#widget{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 	#00BFFF, stop:1 #54FF9F);}"
                            "QToolButton{border-style:none;}");
    });
    connect(background,&BackGround::change6,this,[=](){
        this->setStyleSheet("QWidget#widget{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #CD9B1D,stop:0.5 #FFD700 stop:1 #8B7500);}"
                            "QToolButton{border-style:none;}");
    });
    connect(background,&BackGround::change7,this,[=](){
        this->setStyleSheet("QWidget#widget{border-image:url(:/image/main2.jpg);}"
                            "QToolButton{border-style:none;}");
    });
    connect(background,&BackGround::change8,this,[=](){
        this->setStyleSheet("QWidget#widget{border-image:url(:/image/main3.jpg);}"
                            "QToolButton{border-style:none;}");
    });
    connect(background,&BackGround::change9,this,[=](){
        this->setStyleSheet("QWidget#widget{border-image:url(:/image/main4.jpg);}"
                            "QToolButton{border-style:none;}");
    });
}










