/********************************************************************************
** Form generated from reading UI file 'background.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKGROUND_H
#define UI_BACKGROUND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BackGround
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
    QToolButton *bg5;
    QToolButton *bg4;
    QToolButton *bg7;
    QToolButton *bg6;
    QToolButton *bg2;
    QToolButton *bg1;
    QToolButton *bg3;
    QToolButton *bg8;
    QToolButton *bg9;

    void setupUi(QWidget *BackGround)
    {
        if (BackGround->objectName().isEmpty())
            BackGround->setObjectName(QString::fromUtf8("BackGround"));
        BackGround->resize(656, 456);
        widget_2 = new QWidget(BackGround);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 656, 456));
        widget_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: rgb(255, 255, 255);\n"
""));
        widget = new QWidget(widget_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(2, 2, 650, 450));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(0, 0, 651, 71));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0.2, stop:0 rgba(156, 100, 255, 255), stop:1 rgba(151, 220, 255, 255));"));
        label = new QLabel(widget_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 10, 201, 41));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\351\273\221\344\275\223\";\n"
"background:transparent;"));
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
        layoutWidget->setGeometry(QRect(0, 70, 651, 381));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        bg5 = new QToolButton(layoutWidget);
        bg5->setObjectName(QString::fromUtf8("bg5"));
        bg5->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 	#00BFFF, stop:1 #54FF9F);"));
        bg5->setIconSize(QSize(170, 100));
        bg5->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(bg5, 1, 1, 1, 1);

        bg4 = new QToolButton(layoutWidget);
        bg4->setObjectName(QString::fromUtf8("bg4"));
        bg4->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #FF7F24, stop:1#EE1289);"));
        bg4->setIconSize(QSize(170, 100));
        bg4->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(bg4, 1, 0, 1, 1);

        bg7 = new QToolButton(layoutWidget);
        bg7->setObjectName(QString::fromUtf8("bg7"));
        bg7->setStyleSheet(QString::fromUtf8("border-image: url(:/image/main2.jpg);"));
        bg7->setIconSize(QSize(170, 100));
        bg7->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(bg7, 2, 0, 1, 1);

        bg6 = new QToolButton(layoutWidget);
        bg6->setObjectName(QString::fromUtf8("bg6"));
        bg6->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #CD9B1D,stop:0.5 #FFD700 stop:1 #8B7500);"));
        bg6->setIconSize(QSize(170, 100));
        bg6->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(bg6, 1, 2, 1, 1);

        bg2 = new QToolButton(layoutWidget);
        bg2->setObjectName(QString::fromUtf8("bg2"));
        bg2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 	#EE4000, stop:1 #6495ED);"));
        bg2->setIconSize(QSize(170, 100));
        bg2->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(bg2, 0, 1, 1, 1);

        bg1 = new QToolButton(layoutWidget);
        bg1->setObjectName(QString::fromUtf8("bg1"));
        bg1->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0.2, stop:0 rgba(156, 100, 255, 255), stop:1 rgba(151, 220, 255, 255));"));
        bg1->setIconSize(QSize(170, 100));
        bg1->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(bg1, 0, 0, 1, 1);

        bg3 = new QToolButton(layoutWidget);
        bg3->setObjectName(QString::fromUtf8("bg3"));
        bg3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 	#EEAEEE, stop:1 #FFAEB9);"));
        bg3->setIconSize(QSize(170, 100));
        bg3->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(bg3, 0, 2, 1, 1);

        bg8 = new QToolButton(layoutWidget);
        bg8->setObjectName(QString::fromUtf8("bg8"));
        bg8->setStyleSheet(QString::fromUtf8("border-image: url(:/image/main31.jpg);"));
        bg8->setIconSize(QSize(170, 100));
        bg8->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(bg8, 2, 1, 1, 1);

        bg9 = new QToolButton(layoutWidget);
        bg9->setObjectName(QString::fromUtf8("bg9"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bg9->sizePolicy().hasHeightForWidth());
        bg9->setSizePolicy(sizePolicy);
        bg9->setStyleSheet(QString::fromUtf8("border-image: url(:/image/main41.jpg);"));
        bg9->setIconSize(QSize(170, 100));
        bg9->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(bg9, 2, 2, 1, 1);


        retranslateUi(BackGround);

        QMetaObject::connectSlotsByName(BackGround);
    } // setupUi

    void retranslateUi(QWidget *BackGround)
    {
        BackGround->setWindowTitle(QApplication::translate("BackGround", "Form", nullptr));
        label->setText(QApplication::translate("BackGround", "\350\203\214\346\231\257\345\233\276\347\211\207", nullptr));
        hide->setText(QString());
        close->setText(QString());
#ifndef QT_NO_TOOLTIP
        bg5->setToolTip(QApplication::translate("BackGround", "\351\273\230\350\256\244\350\203\214\346\231\257", nullptr));
#endif // QT_NO_TOOLTIP
        bg5->setText(QString());
#ifndef QT_NO_TOOLTIP
        bg4->setToolTip(QApplication::translate("BackGround", "\351\273\230\350\256\244\350\203\214\346\231\257", nullptr));
#endif // QT_NO_TOOLTIP
        bg4->setText(QString());
#ifndef QT_NO_TOOLTIP
        bg7->setToolTip(QApplication::translate("BackGround", "\351\273\230\350\256\244\350\203\214\346\231\257", nullptr));
#endif // QT_NO_TOOLTIP
        bg7->setText(QString());
#ifndef QT_NO_TOOLTIP
        bg6->setToolTip(QApplication::translate("BackGround", "\351\273\230\350\256\244\350\203\214\346\231\257", nullptr));
#endif // QT_NO_TOOLTIP
        bg6->setText(QString());
#ifndef QT_NO_TOOLTIP
        bg2->setToolTip(QApplication::translate("BackGround", "\351\273\230\350\256\244\350\203\214\346\231\257", nullptr));
#endif // QT_NO_TOOLTIP
        bg2->setText(QString());
#ifndef QT_NO_TOOLTIP
        bg1->setToolTip(QApplication::translate("BackGround", "\351\273\230\350\256\244\350\203\214\346\231\257", nullptr));
#endif // QT_NO_TOOLTIP
        bg1->setText(QString());
#ifndef QT_NO_TOOLTIP
        bg3->setToolTip(QApplication::translate("BackGround", "\351\273\230\350\256\244\350\203\214\346\231\257", nullptr));
#endif // QT_NO_TOOLTIP
        bg3->setText(QString());
#ifndef QT_NO_TOOLTIP
        bg8->setToolTip(QApplication::translate("BackGround", "\351\273\230\350\256\244\350\203\214\346\231\257", nullptr));
#endif // QT_NO_TOOLTIP
        bg8->setText(QString());
#ifndef QT_NO_TOOLTIP
        bg9->setToolTip(QApplication::translate("BackGround", "\351\273\230\350\256\244\350\203\214\346\231\257", nullptr));
#endif // QT_NO_TOOLTIP
        bg9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BackGround: public Ui_BackGround {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKGROUND_H
