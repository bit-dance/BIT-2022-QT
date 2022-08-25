#ifndef SUBTEXT_H
#define SUBTEXT_H

#include <QWidget>
#include <QTextEdit>
#include <QString>
class SubText : public QTextEdit
{
    Q_OBJECT
public:
    explicit SubText(QWidget *parent = nullptr);
    QString getfilepath();
    void setfilepath(QString path);
    void SetSaveFlag(bool flag);
    bool GetSaveFlag();
signals:

public slots:
    void TextIsChange();
private:
    QString filepath;
    bool issave;
};

#endif // SUBTEXT_H
