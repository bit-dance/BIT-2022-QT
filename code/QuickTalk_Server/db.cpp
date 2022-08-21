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

//assume that user_info database must exist!!!!,tables will be automatically created in user_info database
#define HOST_NAME "127.0.0.1"
#define DATABASE_NAME "user_info"
#define USR_NAME "root"
#define PASSWORD "123456"

#define SQLCONNECT(hostName,databaseName,usrName,PW) QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");\
db.setHostName(hostName);\
db.setDatabaseName(databaseName);\
db.setPort(3306);\
db.setUserName(usrName);\
db.setPassword(PW);

db::db()
{
   qDebug()<<"数据库对象建立!";
   SQLCONNECT(HOST_NAME,DATABASE_NAME,USR_NAME,PASSWORD)
   if(!db.open())
   {
      qDebug()<<"Error in the db:"<<db.lastError().text();
   }
   QSqlQuery query(db);
   QString sql=QString("create table if not exists user_info(uno int primary key,name varchar(255),phone varchar(255),email varchar(255));");
   query.prepare(sql);
   query.exec();
   sql=QString("create table if not exists login_info(uno int primary key,username varchar(255),password varchar(255));");
   query.prepare(sql);
   query.exec();
   sql=QString("create table if not exists state_info(uno int primary key,username varchar(255),state int);");
   query.prepare(sql);
   query.exec();
}

db::~db()
{
   qDebug()<<"数据库对象释放!";
}
bool db::getHistoryMessage(QString recvname,QString sendname,std::vector<QString> &message){
    SQLCONNECT(HOST_NAME,DATABASE_NAME,USR_NAME,PASSWORD)
    if(!db.open())
    {
       qDebug()<<"Error in the getHistoryMessage:"<<db.lastError().text();
    }
    QString sql = QString("select hisText,hasHistory from %1").arg(recvname+sendname);
    qDebug()<<"query at getHistory!!!!!"<<sql;
    QSqlQuery query(db);
    query.prepare(sql);
    query.exec();
    bool ret=false;
    //查询结束
    while(query.next())
    {
        //匹配成功
        if(query.value(1).toInt()){
            message.push_back(query.value(0).toString());
            qDebug()<<"msg at getHistoryMessage"<<message;
            qDebug()<<message.size();
        }
        ret=true;
    }
    sql=QString("delete from %1").arg(recvname+sendname);
    query.prepare(sql);
    query.exec();
    return ret;
}
void  db::insertHistoryMessage(QString recvname,QString sendname,QString message){
    SQLCONNECT(HOST_NAME,DATABASE_NAME,USR_NAME,PASSWORD)
    if(!db.open())
    {
       qDebug()<<"Error in the insertHistoryMessage:"<<db.lastError().text();
    }
    //avoid connect SQL 2 times
    QSqlQuery query(db);
    QString sql = QString("insert into %1 values('%2',1)").arg(recvname+sendname).arg(message);
    query.prepare(sql);
    query.exec();
}
int db::getNum(){

    SQLCONNECT(HOST_NAME,DATABASE_NAME,USR_NAME,PASSWORD)
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
    qDebug()<<"数据库行数:"<<num;
    db.close();
    return num;
}

//注册完帐号后生成该用户好友列表
bool db::Friend_table(QString username)
{
    SQLCONNECT(HOST_NAME,DATABASE_NAME,USR_NAME,PASSWORD)
    if(!db.open())
    {
         qDebug()<<"数据库在函数login打开失败!原因是:"<<db.lastError().text();
         db.close();
         return false;
    }
    QString sql=QString("create table %1(Friends varchar(255) not null,primary key(Friends));").arg(username);
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
    SQLCONNECT(HOST_NAME,DATABASE_NAME,USR_NAME,PASSWORD)
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
    qDebug()<<"生成历史消息"<<user+friends;
    sql=QString("create table if not exists %1(hisText TEXT,hasHistory int);").arg(user+friends);
    query.prepare(sql);
    query.exec();
    db.close();
    return true;
}

bool db::selectFriend(QString user, QString friends)
{
        SQLCONNECT(HOST_NAME,DATABASE_NAME,USR_NAME,PASSWORD)
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
    SQLCONNECT(HOST_NAME,DATABASE_NAME,USR_NAME,PASSWORD)
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
{

    SQLCONNECT(HOST_NAME,DATABASE_NAME,USR_NAME,PASSWORD)


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
{

   SQLCONNECT(HOST_NAME,DATABASE_NAME,USR_NAME,PASSWORD)


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
    SQLCONNECT(HOST_NAME,DATABASE_NAME,USR_NAME,PASSWORD)
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
    SQLCONNECT(HOST_NAME,DATABASE_NAME,USR_NAME,PASSWORD)
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
    SQLCONNECT(HOST_NAME,DATABASE_NAME,USR_NAME,PASSWORD)
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
    qDebug()<<uno<<"对应的username是:"<<username;
    db.close();
    return username;
}
