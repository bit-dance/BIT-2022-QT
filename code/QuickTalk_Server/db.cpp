#include "user_info.h"
#include"QString"
#include"QDebug"
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlQueryModel>
#include "db.h"


db::db()
{
   qDebug()<<"数据库对象建立!";


}

db::~db()
{
    qDebug()<<"数据库对象释放!";
}

QSqlDatabase db::dbInit()
{
    QSqlDatabase  db=QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setDatabaseName("user_info");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("admin");
    return db;
}
int db::getNum(){//当前用户个数
QSqlDatabase  db=db::dbInit();
    if(!db.open())
    {
         qDebug()<<"数据库在函数getNum打开失败!原因是:"<<db.lastError().text();
    }
    QString sql=QString("SELECT * FROM user_info");
    QSqlQuery query(db);
    if(!query.exec(sql)){
        qDebug()<<"获取数据个数失败！原因是:"<< query.lastError().text();
        db.close();
        return 0;
    }
    int num=query.size();
    db.close();
    return num;
}

//注册完帐号后生成该用户好友表
bool db::Friend_table(QString username)
{
    QSqlDatabase  db=db::dbInit();
    if(!db.open())
    {
         qDebug()<<"数据库在函数login打开失败!原因是:"<<db.lastError().text();
         db.close();
         return false;
    }
    QString sql=QString("create table %1(Friends varchar(255) not null,primary key(Friends));").arg(username  );
    QSqlQuery query(db);
    query.prepare(sql);
//  query.bindValue(":name",QVariant(username));
    if(!query.exec()){
        qDebug()<<"注册表建立失败！原因是:"<< query.lastError().text();
        db.close();
        return false;
    }
    db.close();
    return true;
}

bool db::addFriend(QString user,QString friends){
    QSqlDatabase  db=db::dbInit();
    if(!db.open())
    {
         qDebug()<<"数据库在函数addFriend打开失败!原因是:"<<db.lastError().text();
         db.close();
         return false;
    }
    QString sql=QString("insert into %1 values('%2')").arg(user).arg(friends);
    QSqlQuery query(db);
    query.prepare(sql);
    if(!query.exec()){
        qDebug()<<"加好友失败！原因是:"<< query.lastError().text();
        db.close();
        return false;
    }
    db.close();
    return true;
}
bool db::Group_table(QString groupname,QString username){
    QSqlDatabase  db=db::dbInit();
    QString sql=QString("create table %1(username varchar(255) primary key,identify int not null);").arg(groupname);
    QSqlQuery query(db);
    query.prepare(sql);
    if(!query.exec()){
        qDebug()<<"群表建立失败！原因是:"<< query.lastError().text();
        db.close();
        return false;
    }
    QString sql2=QString("insert into %1 values('%2',2);").arg(groupname).arg(username);
    QSqlQuery query2(db);
    query2.prepare(sql2);
    if(!query2.exec()){
        qDebug()<<"群表建立失败！原因是:"<< query2.lastError().text();
        db.close();
        return false;
    }
    db.close();
    return true;
}
bool db::addGroup(QString username,QString groupname){
    QSqlDatabase  db=db::dbInit();
    QString sql2=QString("insert into %1 values('%2',1);").arg(groupname).arg(username);
    QSqlQuery query2(db);
    query2.prepare(sql2);
    if(!query2.exec()){
        qDebug()<<"加群失败！原因是:"<< query2.lastError().text();
        db.close();
        return false;
    }
    db.close();
    return true;
}
bool db::selectFriend(QString user, QString friends)
{
      QSqlDatabase  db=db::dbInit();
        //打开数据库
        if(!db.open())
        {
             qDebug()<<"数据库在函数selectFriend中打开失败!原因是:"<<db.lastError().text();
        }
        QString sql = QString("select friends from %1 where friends = '%2';").arg(user).arg(friends);
        QSqlQuery query(db);
        query.prepare(sql);
        query.exec();
        //查询结束
        qDebug()<<query.value(1).toString();
        if(query.next())
        {
            //匹配成功
            qDebug()<<query.value(0).toString();
            if(friends==query.value(0).toString()){
                db.close();
                return true;
            }
        }
        //匹配失败
        db.close();
        return false;

}


bool db::insertSql(user_info &user){
    QSqlDatabase  db=db::dbInit();
    if(!db.open())
    {
         qDebug()<<"数据库在函数 insertSql 打开失败!原因是:"<<db.lastError().text();
    }
    QString sql1=QString("INSERT INTO user_info VALUES(%1,'%2','%3','%4');")
            .arg(user.getUno())
            .arg(user.getName())
            .arg(user.getPhone())
            .arg(user.getemail());
    QString sql2=QString("INSERT INTO login_info VALUES(%1,'%2','%3');")
            .arg(user.getUno())
            .arg(user.getUsername())
            .arg(user.getPassword());
    QString sql3=QString("INSERT INTO state_info VALUES('%1','%2',0);")
            .arg(user.getUno())
            .arg(user.getUsername());

    QSqlQuery query(db);
    if(!query.exec(sql1)){
        qDebug()<<"user_info插入失败!原因是:"<< query.lastError().text();
        db.close();
        return false;
    }
    if(!query.exec(sql2)){
        qDebug()<<"login_info插入失败!原因是:"<< query.lastError().text();
        db.close();
        return false;
    }
    if(!query.exec(sql3)){
        qDebug()<<"state_info插入失败!原因是:"<< query.lastError().text();
        db.close();
        return false;
    }
    qDebug()<<"插入成功!";
    db.close();
    return true;
}


bool db::selectSql(QString username)
{//查询是否登陆过此用户

 QSqlDatabase  db=db::dbInit();

    //打开数据库
    if(!db.open())
    {
         qDebug()<<"数据库在函数 selectSql中打开失败!原因是:"<<db.lastError().text();
    }


    QString sql = QString("select username from login_info where username = :name;");
    QSqlQuery query(db);
    query.prepare(sql);
    query.bindValue(":name",QVariant(username));
    query.exec();
    //查询结束
    if(query.next())
    {
        //匹配成功
        qDebug()<<query.value(0).toString();
        if(username==query.value(0).toString()){
            db.close();
            return true;
        }
    }
    //匹配失败
    db.close();
    return false;
}

bool db::loginJudge(QString username, QString password)
{//判断账号密码

QSqlDatabase  db=db::dbInit();
    if(!db.open())
    {
         qDebug()<<"数据库在函数loginJudge打开失败！原因是："<<db.lastError().text();
    }

    QString sql = QString("select username,password from login_info where username = :name;");
    QSqlQuery query(db);
    query.prepare(sql);
    query.bindValue(":name",QVariant(username));
    query.exec();
    //查询结束
    if(query.next())
    {
        qDebug()<<query.value(1).toString();
        if(password==query.value(1).toString()){
            //密码正确
            db.close();
            return true;
        }
    }
    //密码错误
    db.close();
    return false;
}
bool db::changeState(QString username,int state){
   QSqlDatabase  db=db::dbInit();
    //打开数据库
    if(!db.open())
    {
         qDebug()<<"数据库在函数changeState中打开失败!原因是:"<<db.lastError().text();
    }
    QString sql = QString("UPDATE state_info SET state=%1 WHERE username='%2';").arg(state).arg(username);
    QSqlQuery query(db);
    query.prepare(sql);
    if(!query.exec()){
        qDebug()<<"改变状态失败！原因是:"<< query.lastError().text();
        db.close();
        return false;
    }
    db.close();
    return true;
}
int db::selectState(QString username)
{
    int state;
    QSqlDatabase  db=db::dbInit();
    //打开数据库
    if(!db.open())
    {
         qDebug()<<"数据库在函数selectState中打开失败!原因是:"<<db.lastError().text();
    }
    QString sql = QString("select state from state_info where username='%1';").arg(username);
    QSqlQuery query(db);
    query.prepare(sql);
    if(!query.exec()){
        qDebug()<<"查找状态失败！原因是:"<< query.lastError().text();
        db.close();
        return -1;
    }
    query.next();
    state=query.value(0).toInt();
    db.close();
    return state;
}
QString db::getUsernameByUno(int uno)
{
    QSqlDatabase  db=db::dbInit();
    if(!db.open())
    {
         qDebug()<<"数据库在函数getUsernameByUno打开失败!原因是:"<<db.lastError().text();
    }

    QString sql=QString("SELECT username FROM login_info where uno=%1;").arg(uno);
    QSqlQuery query(db);
    if(!query.exec(sql)){
        qDebug()<<"通过uno查询username失败！原因是:"<< query.lastError().text();
        db.close();
        return "unkown";
    }
    query.next();
    QString username=query.value(0).toString();
    db.close();
    return username;
}
