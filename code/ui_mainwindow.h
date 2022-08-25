/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *widget;
    QToolBox *toolBox;
    QWidget *online;
    QVBoxLayout *onlayout;
    QWidget *offline;
    QVBoxLayout *offlayout;
    QWidget *group;
    QVBoxLayout *grouplayout;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *changebackground;
    QToolButton *defaultbackground;
    QToolButton *newform;
    QPushButton *nameicon_2;
    QPushButton *nameicon_3;
    QLabel *name;
    QPushButton *hide;
    QPushButton *close;
    QLineEdit *search;
    QPushButton *newfriend;
    QPushButton *pushButton;
    QToolButton *profile;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(450, 780);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	border-image: url(:/image/main4.jpg);\n"
"}\n"
"\n"
"QToolButton{\n"
"	border-style:none;\n"
"}\n"
"\n"
"\n"
""));
        widget = new QWidget(MainWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 450, 781));
        toolBox = new QToolBox(widget);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setEnabled(true);
        toolBox->setGeometry(QRect(0, 250, 451, 531));
        toolBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);border-width:0;border-style:outset;\n"
"font: 16pt \"\346\226\271\346\255\243\346\245\267\344\275\223_GBK\";"));
        toolBox->setFrameShape(QFrame::NoFrame);
        online = new QWidget();
        online->setObjectName(QString::fromUtf8("online"));
        online->setGeometry(QRect(0, 0, 451, 405));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(online->sizePolicy().hasHeightForWidth());
        online->setSizePolicy(sizePolicy);
        online->setLayoutDirection(Qt::LeftToRight);
        online->setAutoFillBackground(false);
        online->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);border-width:0;border-style:outset"));
        onlayout = new QVBoxLayout(online);
        onlayout->setObjectName(QString::fromUtf8("onlayout"));
        onlayout->setSizeConstraint(QLayout::SetNoConstraint);
        onlayout->setContentsMargins(11, -1, -1, -1);
        toolBox->addItem(online, QString::fromUtf8("\302\267\345\234\250\347\272\277\345\245\275\345\217\213"));
        offline = new QWidget();
        offline->setObjectName(QString::fromUtf8("offline"));
        offline->setGeometry(QRect(0, 0, 451, 405));
        sizePolicy.setHeightForWidth(offline->sizePolicy().hasHeightForWidth());
        offline->setSizePolicy(sizePolicy);
        offlayout = new QVBoxLayout(offline);
        offlayout->setObjectName(QString::fromUtf8("offlayout"));
        toolBox->addItem(offline, QString::fromUtf8("\302\267\347\246\273\347\272\277\345\245\275\345\217\213"));
        group = new QWidget();
        group->setObjectName(QString::fromUtf8("group"));
        group->setGeometry(QRect(0, 0, 451, 405));
        grouplayout = new QVBoxLayout(group);
        grouplayout->setObjectName(QString::fromUtf8("grouplayout"));
        toolBox->addItem(group, QString::fromUtf8("\302\267\347\276\244\350\201\212"));
        horizontalLayoutWidget_2 = new QWidget(widget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 100, 451, 74));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        changebackground = new QToolButton(horizontalLayoutWidget_2);
        changebackground->setObjectName(QString::fromUtf8("changebackground"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/rotation.png"), QSize(), QIcon::Normal, QIcon::Off);
        changebackground->setIcon(icon);
        changebackground->setIconSize(QSize(50, 50));
        changebackground->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(changebackground);

        defaultbackground = new QToolButton(horizontalLayoutWidget_2);
        defaultbackground->setObjectName(QString::fromUtf8("defaultbackground"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(defaultbackground->sizePolicy().hasHeightForWidth());
        defaultbackground->setSizePolicy(sizePolicy1);
        defaultbackground->setLayoutDirection(Qt::LeftToRight);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/picture.png"), QSize(), QIcon::Normal, QIcon::Off);
        defaultbackground->setIcon(icon1);
        defaultbackground->setIconSize(QSize(50, 50));
        defaultbackground->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(defaultbackground);

        newform = new QToolButton(horizontalLayoutWidget_2);
        newform->setObjectName(QString::fromUtf8("newform"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        newform->setIcon(icon2);
        newform->setIconSize(QSize(50, 50));
        newform->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        horizontalLayout_2->addWidget(newform);

        nameicon_2 = new QPushButton(widget);
        nameicon_2->setObjectName(QString::fromUtf8("nameicon_2"));
        nameicon_2->setEnabled(false);
        nameicon_2->setGeometry(QRect(0, -10, 51, 71));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/iCON_White_transparent.png"), QSize(), QIcon::Normal, QIcon::Off);
        nameicon_2->setIcon(icon3);
        nameicon_2->setIconSize(QSize(50, 50));
        nameicon_2->setAutoDefault(false);
        nameicon_2->setFlat(true);
        nameicon_3 = new QPushButton(widget);
        nameicon_3->setObjectName(QString::fromUtf8("nameicon_3"));
        nameicon_3->setEnabled(false);
        nameicon_3->setGeometry(QRect(50, 0, 221, 51));
        nameicon_3->setStyleSheet(QString::fromUtf8("color: rgb(225, 255, 255);\n"
"font: Bold 25pt \"Bradley Hand ITC\";background-color: rgba(0, 0, 0, 0);"));
        nameicon_3->setFlat(true);
        name = new QLabel(widget);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(130, 50, 211, 61));
        name->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font: 28pt \"\345\215\216\346\226\207\347\220\245\347\217\200\";\n"
"color: rgb(255, 255, 255);\n"
""));
        hide = new QPushButton(widget);
        hide->setObjectName(QString::fromUtf8("hide"));
        hide->setGeometry(QRect(370, 0, 38, 38));
        hide->setStyleSheet(QString::fromUtf8("QPushButton{background-color:transparent;font: 18pt \"\346\245\267\344\275\223_GB2312\";border-radius: 3px; color: rgb(255, 255, 255);}\n"
"QPushButton:hover { background-color: rgb(255, 100, 100); }"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/min.png"), QSize(), QIcon::Normal, QIcon::Off);
        hide->setIcon(icon4);
        hide->setIconSize(QSize(30, 30));
        hide->setFlat(true);
        close = new QPushButton(widget);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(410, 0, 38, 38));
        close->setStyleSheet(QString::fromUtf8("QPushButton{background-color:transparent;font: 18pt \"\346\245\267\344\275\223_GB2312\";border-radius: 3px; color: rgb(255, 255, 255);}\n"
"QPushButton:hover { background-color: rgb(255, 100, 100); }"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon5);
        close->setIconSize(QSize(30, 30));
        close->setFlat(false);
        search = new QLineEdit(widget);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(0, 150, 411, 51));
        search->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);border-width:0;border-style:outset"));
        newfriend = new QPushButton(widget);
        newfriend->setObjectName(QString::fromUtf8("newfriend"));
        newfriend->setGeometry(QRect(410, 150, 41, 51));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/add1.png"), QSize(), QIcon::Normal, QIcon::Off);
        newfriend->setIcon(icon6);
        newfriend->setIconSize(QSize(60, 60));
        newfriend->setFlat(true);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(-10, 200, 471, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(20);
        pushButton->setFont(font);
        profile = new QToolButton(widget);
        profile->setObjectName(QString::fromUtf8("profile"));
        profile->setGeometry(QRect(60, 50, 61, 51));
        profile->setStyleSheet(QString::fromUtf8("\n"
"border-style: flat;\n"
"	background: transparent;"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/clientTOUxiang.png"), QSize(), QIcon::Normal, QIcon::Off);
        profile->setIcon(icon7);
        profile->setIconSize(QSize(50, 50));

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(0);
        toolBox->layout()->setSpacing(7);
        nameicon_2->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Form", nullptr));
        toolBox->setItemText(toolBox->indexOf(online), QApplication::translate("MainWindow", "\302\267\345\234\250\347\272\277\345\245\275\345\217\213", nullptr));
        toolBox->setItemText(toolBox->indexOf(offline), QApplication::translate("MainWindow", "\302\267\347\246\273\347\272\277\345\245\275\345\217\213", nullptr));
        toolBox->setItemText(toolBox->indexOf(group), QApplication::translate("MainWindow", "\302\267\347\276\244\350\201\212", nullptr));
#ifndef QT_NO_TOOLTIP
        changebackground->setToolTip(QApplication::translate("MainWindow", "\346\233\264\346\215\242\350\203\214\346\231\257", nullptr));
#endif // QT_NO_TOOLTIP
        changebackground->setText(QString());
#ifndef QT_NO_TOOLTIP
        defaultbackground->setToolTip(QApplication::translate("MainWindow", "\351\273\230\350\256\244\350\203\214\346\231\257", nullptr));
#endif // QT_NO_TOOLTIP
        defaultbackground->setText(QString());
#ifndef QT_NO_TOOLTIP
        newform->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272\347\252\227\345\217\243", nullptr));
#endif // QT_NO_TOOLTIP
        newform->setText(QString());
        nameicon_2->setText(QString());
        nameicon_3->setText(QApplication::translate("MainWindow", "QuickTalk", nullptr));
        name->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        hide->setText(QString());
        close->setText(QString());
#ifndef QT_NO_TOOLTIP
        search->setToolTip(QApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        newfriend->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
#endif // QT_NO_TOOLTIP
        newfriend->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276\347\276\244\350\201\212", nullptr));
        profile->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
