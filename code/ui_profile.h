/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Profile
{
public:
    QWidget *widget_2;
    QWidget *widget;
    QWidget *widget_3;
    QLabel *label;
    QPushButton *hide;
    QPushButton *close;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QToolButton *pf4;
    QToolButton *pf1;
    QToolButton *pf5;
    QToolButton *pf2;
    QToolButton *pf3;
    QToolButton *pf6;
    QToolButton *pf7;

    void setupUi(QWidget *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName(QString::fromUtf8("Profile"));
        Profile->resize(656, 673);
        widget_2 = new QWidget(Profile);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 656, 681));
        widget_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: rgb(255, 255, 255);\n"
""));
        widget = new QWidget(widget_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(2, 2, 650, 671));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(0, 0, 651, 71));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0.2, stop:0 rgba(156, 100, 255, 255), stop:1 rgba(151, 220, 255, 255));"));
        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 10, 201, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Bradley Hand ITC"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"Bradley Hand ITC\";\n"
"background:transparent;"));
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignCenter);
        hide = new QPushButton(widget_3);
        hide->setObjectName(QString::fromUtf8("hide"));
        hide->setGeometry(QRect(571, 0, 38, 38));
        hide->setStyleSheet(QString::fromUtf8("QPushButton{background-color:transparent;font: 18pt \"\346\245\267\344\275\223_GB2312\";border-radius: 3px; color: rgb(255, 255, 255);}\n"
"QPushButton:hover { background-color: rgb(255, 100, 100); }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/min.png"), QSize(), QIcon::Normal, QIcon::Off);
        hide->setIcon(icon);
        hide->setIconSize(QSize(30, 30));
        hide->setFlat(true);
        close = new QPushButton(widget_3);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(610, 0, 38, 38));
        close->setStyleSheet(QString::fromUtf8("QPushButton{background-color:transparent;font: 18pt \"\346\245\267\344\275\223_GB2312\";border-radius: 3px; color: rgb(255, 255, 255);}\n"
"QPushButton:hover { background-color: rgb(255, 100, 100); }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon1);
        close->setIconSize(QSize(30, 30));
        close->setFlat(false);
        layoutWidget = new QWidget(widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 70, 651, 591));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pf4 = new QToolButton(layoutWidget);
        pf4->setObjectName(QString::fromUtf8("pf4"));
        pf4->setStyleSheet(QString::fromUtf8("border-image: url(:/image/profile_4.png);"));
        pf4->setIconSize(QSize(180, 180));
        pf4->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(pf4, 1, 0, 1, 1);

        pf1 = new QToolButton(layoutWidget);
        pf1->setObjectName(QString::fromUtf8("pf1"));
        pf1->setStyleSheet(QString::fromUtf8("border-image: url(:/image/profile_1.png)"));
        pf1->setIconSize(QSize(180, 180));
        pf1->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(pf1, 0, 0, 1, 1);

        pf5 = new QToolButton(layoutWidget);
        pf5->setObjectName(QString::fromUtf8("pf5"));
        pf5->setStyleSheet(QString::fromUtf8("border-image: url(:/image/profile_5.png);"));
        pf5->setIconSize(QSize(180, 180));
        pf5->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(pf5, 1, 1, 1, 1);

        pf2 = new QToolButton(layoutWidget);
        pf2->setObjectName(QString::fromUtf8("pf2"));
        pf2->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/image/profile_2.png);"));
        pf2->setIconSize(QSize(180, 180));
        pf2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(pf2, 0, 1, 1, 1);

        pf3 = new QToolButton(layoutWidget);
        pf3->setObjectName(QString::fromUtf8("pf3"));
        pf3->setStyleSheet(QString::fromUtf8("border-image: url(:/image/profile_3.png);"));
        pf3->setIconSize(QSize(180, 180));
        pf3->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(pf3, 0, 2, 1, 1);

        pf6 = new QToolButton(layoutWidget);
        pf6->setObjectName(QString::fromUtf8("pf6"));
        pf6->setStyleSheet(QString::fromUtf8("border-image: url(:/image/profile_6.png);"));
        pf6->setIconSize(QSize(180, 180));
        pf6->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(pf6, 1, 2, 1, 1);

        pf7 = new QToolButton(layoutWidget);
        pf7->setObjectName(QString::fromUtf8("pf7"));
        pf7->setStyleSheet(QString::fromUtf8("border-image: url(:/image/TOUXIANG.PNG);"));
        pf7->setIconSize(QSize(180, 180));

        gridLayout->addWidget(pf7, 2, 1, 1, 1);


        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QWidget *Profile)
    {
        Profile->setWindowTitle(QApplication::translate("Profile", "Form", nullptr));
        label->setText(QApplication::translate("Profile", "\345\244\264\345\203\217\351\200\211\346\213\251", nullptr));
        hide->setText(QString());
        close->setText(QString());
#ifndef QT_NO_TOOLTIP
        pf4->setToolTip(QApplication::translate("Profile", "\351\273\230\350\256\244\350\203\214\346\231\257", nullptr));
#endif // QT_NO_TOOLTIP
        pf4->setText(QString());
#ifndef QT_NO_TOOLTIP
        pf1->setToolTip(QApplication::translate("Profile", "\351\273\230\350\256\244\350\203\214\346\231\257", nullptr));
#endif // QT_NO_TOOLTIP
        pf1->setText(QString());
#ifndef QT_NO_TOOLTIP
        pf5->setToolTip(QApplication::translate("Profile", "\351\273\230\350\256\244\350\203\214\346\231\257", nullptr));
#endif // QT_NO_TOOLTIP
        pf5->setText(QString());
#ifndef QT_NO_TOOLTIP
        pf2->setToolTip(QApplication::translate("Profile", "\351\273\230\350\256\244\350\203\214\346\231\257", nullptr));
#endif // QT_NO_TOOLTIP
        pf2->setText(QString());
#ifndef QT_NO_TOOLTIP
        pf3->setToolTip(QApplication::translate("Profile", "\351\273\230\350\256\244\350\203\214\346\231\257", nullptr));
#endif // QT_NO_TOOLTIP
        pf3->setText(QString());
#ifndef QT_NO_TOOLTIP
        pf6->setToolTip(QApplication::translate("Profile", "\351\273\230\350\256\244\350\203\214\346\231\257", nullptr));
#endif // QT_NO_TOOLTIP
        pf6->setText(QString());
        pf7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
