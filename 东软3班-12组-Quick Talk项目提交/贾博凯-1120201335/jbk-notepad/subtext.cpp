#include "subtext.h"
#include <QDebug>
SubText::SubText(QWidget *parent) : QTextEdit(parent)
{
    this->issave=true;
}

QString SubText::getfilepath()
{
    return  filepath;
}

void SubText::setfilepath(QString path)
{

    this->filepath=path;
}

void SubText::SetSaveFlag(bool flag)
{
    this->issave=flag;

}


bool SubText::GetSaveFlag()
{
    return this->issave;
}




///////////////////////////////////////////////////////////////
void SubText::TextIsChange()
{
    this->issave=false;
    qDebug()<<"hello"<<endl;
}





