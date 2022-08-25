/********************************************************************************
** Form generated from reading UI file 'enroll.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENROLL_H
#define UI_ENROLL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Enroll
{
public:
    QWidget *widget;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *password;
    QLabel *passwordlabel;
    QLineEdit *phonenumber;
    QLineEdit *checkpassword;
    QLineEdit *name;
    QLabel *phonelabel;
    QLabel *checkpasswordlabel;
    QLineEdit *email;
    QLabel *namelabel;
    QLabel *emaillabel;
    QPushButton *putin;
    QLabel *pwd_check;
    QLabel *name_check;
    QLabel *email_check;
    QLabel *phone_check;
    QWidget *widget_2;
    QPushButton *close_btn;
    QLabel *labelMovie;
    QLabel *label;

    void setupUi(QWidget *Enroll)
    {
        if (Enroll->objectName().isEmpty())
            Enroll->setObjectName(QString::fromUtf8("Enroll"));
        Enroll->resize(600, 490);
        Enroll->setStyleSheet(QString::fromUtf8("QToolButton{\n"
"	border-style:none;\n"
"}\n"
""));
        widget = new QWidget(Enroll);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(53, 120, 500, 340));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0,0);"));
        gridLayoutWidget_2 = new QWidget(widget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(120, 50, 261, 191));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        password = new QLineEdit(gridLayoutWidget_2);
        password->setObjectName(QString::fromUtf8("password"));
        password->setEchoMode(QLineEdit::Normal);
        password->setCursorPosition(0);

        gridLayout_2->addWidget(password, 3, 1, 1, 1);

        passwordlabel = new QLabel(gridLayoutWidget_2);
        passwordlabel->setObjectName(QString::fromUtf8("passwordlabel"));

        gridLayout_2->addWidget(passwordlabel, 3, 0, 1, 1);

        phonenumber = new QLineEdit(gridLayoutWidget_2);
        phonenumber->setObjectName(QString::fromUtf8("phonenumber"));

        gridLayout_2->addWidget(phonenumber, 2, 1, 1, 1);

        checkpassword = new QLineEdit(gridLayoutWidget_2);
        checkpassword->setObjectName(QString::fromUtf8("checkpassword"));
        checkpassword->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(checkpassword, 4, 1, 1, 1);

        name = new QLineEdit(gridLayoutWidget_2);
        name->setObjectName(QString::fromUtf8("name"));
        name->setCursor(QCursor(Qt::IBeamCursor));

        gridLayout_2->addWidget(name, 0, 1, 1, 1);

        phonelabel = new QLabel(gridLayoutWidget_2);
        phonelabel->setObjectName(QString::fromUtf8("phonelabel"));

        gridLayout_2->addWidget(phonelabel, 2, 0, 1, 1);

        checkpasswordlabel = new QLabel(gridLayoutWidget_2);
        checkpasswordlabel->setObjectName(QString::fromUtf8("checkpasswordlabel"));

        gridLayout_2->addWidget(checkpasswordlabel, 4, 0, 1, 1);

        email = new QLineEdit(gridLayoutWidget_2);
        email->setObjectName(QString::fromUtf8("email"));

        gridLayout_2->addWidget(email, 1, 1, 1, 1);

        namelabel = new QLabel(gridLayoutWidget_2);
        namelabel->setObjectName(QString::fromUtf8("namelabel"));

        gridLayout_2->addWidget(namelabel, 0, 0, 1, 1);

        emaillabel = new QLabel(gridLayoutWidget_2);
        emaillabel->setObjectName(QString::fromUtf8("emaillabel"));

        gridLayout_2->addWidget(emaillabel, 1, 0, 1, 1);

        putin = new QPushButton(widget);
        putin->setObjectName(QString::fromUtf8("putin"));
        putin->setGeometry(QRect(180, 270, 151, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        putin->setFont(font);
        putin->setStyleSheet(QString::fromUtf8("QPushButton{font:  20pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";background-color:rgb(60, 230, 0);border-radius: 3px; color: rgb(255,255,255);}QPushButton:hover { background-color:rgb(40, 220, 0); }\n"
"\n"
""));
        pwd_check = new QLabel(widget);
        pwd_check->setObjectName(QString::fromUtf8("pwd_check"));
        pwd_check->setGeometry(QRect(390, 190, 111, 20));
        pwd_check->setStyleSheet(QString::fromUtf8(""));
        name_check = new QLabel(widget);
        name_check->setObjectName(QString::fromUtf8("name_check"));
        name_check->setGeometry(QRect(390, 63, 111, 16));
        name_check->setStyleSheet(QString::fromUtf8(""));
        email_check = new QLabel(widget);
        email_check->setObjectName(QString::fromUtf8("email_check"));
        email_check->setGeometry(QRect(390, 102, 111, 16));
        email_check->setStyleSheet(QString::fromUtf8(""));
        phone_check = new QLabel(widget);
        phone_check->setObjectName(QString::fromUtf8("phone_check"));
        phone_check->setGeometry(QRect(390, 140, 111, 16));
        phone_check->setStyleSheet(QString::fromUtf8(""));
        widget_2 = new QWidget(Enroll);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 600, 490));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:0.75, stop:0 rgb(0, 170, 255), stop:1 rgb(255, 255, 255));"));
        close_btn = new QPushButton(widget_2);
        close_btn->setObjectName(QString::fromUtf8("close_btn"));
        close_btn->setGeometry(QRect(558, 0, 40, 40));
        close_btn->setStyleSheet(QString::fromUtf8("QPushButton{background-color:transparent;border-radius: 3px; color: rgb(255, 255, 255);}\n"
"QPushButton:hover { background-color: rgb(255, 100, 100); }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        close_btn->setIcon(icon);
        close_btn->setIconSize(QSize(30, 30));
        close_btn->setFlat(true);
        labelMovie = new QLabel(widget_2);
        labelMovie->setObjectName(QString::fromUtf8("labelMovie"));
        labelMovie->setGeometry(QRect(0, 0, 601, 491));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 241, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bradley Hand ITC"));
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("color: rgb(225, 255, 255);\n"
"font: Bold 25pt \"Bradley Hand ITC\";background-color: rgba(0, 0, 0, 0);"));
        labelMovie->raise();
        close_btn->raise();
        label->raise();
        widget_2->raise();
        widget->raise();

        retranslateUi(Enroll);

        QMetaObject::connectSlotsByName(Enroll);
    } // setupUi

    void retranslateUi(QWidget *Enroll)
    {
        Enroll->setWindowTitle(QApplication::translate("Enroll", "Form", nullptr));
        password->setPlaceholderText(QApplication::translate("Enroll", "\351\225\277\345\272\2466\344\275\215\344\273\245\344\270\212", nullptr));
        passwordlabel->setText(QApplication::translate("Enroll", "\345\257\206\347\240\201", nullptr));
        phonenumber->setPlaceholderText(QApplication::translate("Enroll", "11\344\275\215\346\211\213\346\234\272\345\217\267\347\240\201", nullptr));
        checkpassword->setPlaceholderText(QApplication::translate("Enroll", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        phonelabel->setText(QApplication::translate("Enroll", "\346\211\213\346\234\272\345\217\267", nullptr));
        checkpasswordlabel->setText(QApplication::translate("Enroll", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        namelabel->setText(QApplication::translate("Enroll", "\347\224\250\346\210\267\345\220\215", nullptr));
        emaillabel->setText(QApplication::translate("Enroll", "\351\202\256\347\256\261", nullptr));
        putin->setText(QApplication::translate("Enroll", "\347\253\213\345\215\263\346\263\250\345\206\214", nullptr));
        pwd_check->setText(QApplication::translate("Enroll", "pwd_check", nullptr));
        name_check->setText(QApplication::translate("Enroll", "name_check", nullptr));
        email_check->setText(QApplication::translate("Enroll", "email_check", nullptr));
        phone_check->setText(QApplication::translate("Enroll", "phone_check", nullptr));
        close_btn->setText(QString());
        labelMovie->setText(QApplication::translate("Enroll", "TextLabel", nullptr));
#ifndef QT_NO_WHATSTHIS
        label->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("Enroll", "QuickTalk", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Enroll: public Ui_Enroll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENROLL_H
