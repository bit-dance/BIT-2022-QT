/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *widget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QPushButton *pushButton;
    QPushButton *login;
    QPushButton *enroll;
    QPushButton *QRcode;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget_2;
    QPushButton *close;
    QPushButton *hide;
    QLabel *labelBK;
    QLabel *icon;
    QLabel *label_4;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *passwordicon;
    QPushButton *nameicon;
    QLineEdit *password;
    QComboBox *name;
    QLabel *label_3;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(520, 400);
        widget = new QWidget(Login);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 520, 400));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255)"));
        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(100, 280, 301, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(7);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(horizontalLayoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(horizontalLayoutWidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout->addWidget(checkBox_2);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFlat(true);

        horizontalLayout->addWidget(pushButton);

        login = new QPushButton(widget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(135, 330, 240, 51));
        login->setStyleSheet(QString::fromUtf8("QPushButton{font: 18pt \"\346\245\267\344\275\223_GB2312\";background-color:rgb(0, 170, 255);border-radius: 7px; color: rgb(255, 255, 255);}\n"
"QPushButton:hover { background-color: rgb(0, 150, 255); }\n"
"\n"
""));
        login->setFlat(false);
        enroll = new QPushButton(widget);
        enroll->setObjectName(QString::fromUtf8("enroll"));
        enroll->setGeometry(QRect(0, 370, 71, 28));
        enroll->setStyleSheet(QString::fromUtf8("color: rgb(184, 184, 184);"));
        enroll->setFlat(true);
        QRcode = new QPushButton(widget);
        QRcode->setObjectName(QString::fromUtf8("QRcode"));
        QRcode->setGeometry(QRect(480, 370, 31, 28));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/erweima.png"), QSize(), QIcon::Normal, QIcon::Off);
        QRcode->setIcon(icon1);
        QRcode->setIconSize(QSize(30, 30));
        QRcode->setFlat(true);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 200, 101, 31));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(420, 240, 101, 31));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 531, 161));
        widget_2->setAutoFillBackground(false);
        widget_2->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 170, 255 )"));
        close = new QPushButton(widget_2);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(479, 0, 38, 38));
        close->setStyleSheet(QString::fromUtf8("QPushButton{background-color:transparent;font: 18pt \"\346\245\267\344\275\223_GB2312\";border-radius: 3px; color: rgb(255, 255, 255);}\n"
"QPushButton:hover { background-color: rgb(255, 100, 100); }"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon2);
        close->setIconSize(QSize(30, 30));
        close->setFlat(false);
        hide = new QPushButton(widget_2);
        hide->setObjectName(QString::fromUtf8("hide"));
        hide->setGeometry(QRect(440, 0, 38, 38));
        hide->setStyleSheet(QString::fromUtf8("QPushButton{background-color:transparent;font: 18pt \"\346\245\267\344\275\223_GB2312\";border-radius: 3px; color: rgb(255, 255, 255);}\n"
"QPushButton:hover { background-color: rgb(255, 100, 100); }"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/min.png"), QSize(), QIcon::Normal, QIcon::Off);
        hide->setIcon(icon3);
        hide->setIconSize(QSize(30, 30));
        hide->setFlat(true);
        labelBK = new QLabel(widget_2);
        labelBK->setObjectName(QString::fromUtf8("labelBK"));
        labelBK->setGeometry(QRect(0, 0, 521, 161));
        icon = new QLabel(widget_2);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setGeometry(QRect(0, 0, 41, 41));
        icon->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0);"));
        icon->setPixmap(QPixmap(QString::fromUtf8(":/image/iCON_White_transparent.png")));
        icon->setScaledContents(true);
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 0, 241, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Bradley Hand ITC"));
        font.setPointSize(25);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setAutoFillBackground(false);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(225, 255, 255);\n"
"font: Bold 25pt \"Bradley Hand ITC\";background-color: rgba(0, 0, 0, 0);"));
        labelBK->raise();
        close->raise();
        hide->raise();
        icon->raise();
        label_4->raise();
        gridLayoutWidget = new QWidget(widget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(100, 200, 302, 84));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        passwordicon = new QPushButton(gridLayoutWidget);
        passwordicon->setObjectName(QString::fromUtf8("passwordicon"));
        passwordicon->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/lock.png"), QSize(), QIcon::Normal, QIcon::Off);
        passwordicon->setIcon(icon4);
        passwordicon->setFlat(true);

        gridLayout->addWidget(passwordicon, 1, 0, 1, 1);

        nameicon = new QPushButton(gridLayoutWidget);
        nameicon->setObjectName(QString::fromUtf8("nameicon"));
        nameicon->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/modify.png"), QSize(), QIcon::Normal, QIcon::Off);
        nameicon->setIcon(icon5);
        nameicon->setFlat(true);

        gridLayout->addWidget(nameicon, 0, 0, 1, 1);

        password = new QLineEdit(gridLayoutWidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setStyleSheet(QString::fromUtf8("background:transparent;border-width:0;border-style:outset"));

        gridLayout->addWidget(password, 1, 1, 1, 1);

        name = new QComboBox(gridLayoutWidget);
        name->addItem(QString());
        name->setObjectName(QString::fromUtf8("name"));
        name->setStyleSheet(QString::fromUtf8("order-width:0;border-style:outset"));
        name->setEditable(true);
        name->setIconSize(QSize(16, 16));
        name->setDuplicatesEnabled(false);

        gridLayout->addWidget(name, 0, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(200, 100, 101, 91));
        label_3->setAutoFillBackground(false);
        label_3->setStyleSheet(QString::fromUtf8("border-width:0px;\n"
"border-radius:33px;\n"
"border-style:solid;\n"
"border-color: rgb(255, 255, 255);"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/image/TOUXIANG.PNG")));
        label_3->setScaledContents(true);
        widget_2->raise();
        horizontalLayoutWidget->raise();
        login->raise();
        enroll->raise();
        QRcode->raise();
        label->raise();
        label_2->raise();
        gridLayoutWidget->raise();
        label_3->raise();

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", nullptr));
        checkBox->setText(QApplication::translate("Login", "\350\256\260\344\275\217\345\257\206\347\240\201", nullptr));
        checkBox_2->setText(QApplication::translate("Login", "\350\207\252\345\212\250\347\231\273\345\275\225", nullptr));
        pushButton->setText(QApplication::translate("Login", "\346\211\276\345\233\236\345\257\206\347\240\201", nullptr));
        login->setText(QApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        enroll->setText(QApplication::translate("Login", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
        QRcode->setText(QString());
        label->setText(QApplication::translate("Login", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("Login", "TextLabel", nullptr));
        close->setText(QString());
        hide->setText(QString());
        labelBK->setText(QApplication::translate("Login", "BK", nullptr));
        icon->setText(QString());
#ifndef QT_NO_WHATSTHIS
        label_4->setWhatsThis(QApplication::translate("Login", "QuickTalk", nullptr));
#endif // QT_NO_WHATSTHIS
        label_4->setText(QApplication::translate("Login", "QuickTalk", nullptr));
        passwordicon->setText(QString());
        nameicon->setText(QString());
        name->setItemText(0, QString());

        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
