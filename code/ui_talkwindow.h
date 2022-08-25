/********************************************************************************
** Form generated from reading UI file 'talkwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TALKWINDOW_H
#define UI_TALKWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TalkWindow
{
public:
    QWidget *widget_2;
    QWidget *widget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame;
    QLabel *name;
    QPushButton *hide;
    QPushButton *close;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *msgBrowser;
    QFrame *frame_2;
    QWidget *widget_4;
    QToolButton *toolButton_3;
    QFontComboBox *fontCbx;
    QComboBox *sizeCbx;
    QToolButton *boldTbtn;
    QToolButton *italicTbtn;
    QToolButton *underlineTbtn;
    QToolButton *colorTbtn;
    QToolButton *saveTbtn;
    QToolButton *clearTbtn;
    QTextEdit *msgTextEdit;
    QWidget *widget_3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *close2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *TalkWindow)
    {
        if (TalkWindow->objectName().isEmpty())
            TalkWindow->setObjectName(QString::fromUtf8("TalkWindow"));
        TalkWindow->resize(1003, 600);
        TalkWindow->setStyleSheet(QString::fromUtf8(""));
        widget_2 = new QWidget(TalkWindow);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 0, 1011, 614));
        widget_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"background-color: rgb(255, 255, 255);\n"
""));
        widget = new QWidget(widget_2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(2, 2, 1000, 610));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 1001, 611));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        frame = new QFrame(horizontalLayoutWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgb(0, 216, 216), stop:1 rgba(151, 220, 255, 255));"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        name = new QLabel(frame);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(420, 0, 161, 41));
        name->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"font: 16pt \"\351\273\221\344\275\223\";"));
        name->setAlignment(Qt::AlignCenter);
        hide = new QPushButton(frame);
        hide->setObjectName(QString::fromUtf8("hide"));
        hide->setGeometry(QRect(920, 0, 38, 38));
        hide->setStyleSheet(QString::fromUtf8("QPushButton{background-color:transparent;font: 18pt \"\346\245\267\344\275\223_GB2312\";border-radius: 3px; color: rgb(255, 255, 255);}\n"
"QPushButton:hover { background-color: rgb(255, 100, 100); }"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/min.png"), QSize(), QIcon::Normal, QIcon::Off);
        hide->setIcon(icon);
        hide->setIconSize(QSize(30, 30));
        hide->setFlat(true);
        close = new QPushButton(frame);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(959, 0, 38, 38));
        close->setStyleSheet(QString::fromUtf8("QPushButton{background-color:transparent;font: 18pt \"\346\245\267\344\275\223_GB2312\";border-radius: 3px; color: rgb(255, 255, 255);}\n"
"QPushButton:hover { background-color: rgb(255, 100, 100); }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        close->setIcon(icon1);
        close->setIconSize(QSize(30, 30));
        close->setFlat(false);

        verticalLayout_5->addWidget(frame);

        verticalLayout_5->setStretch(0, 1);

        verticalLayout->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        msgBrowser = new QTextBrowser(horizontalLayoutWidget);
        msgBrowser->setObjectName(QString::fromUtf8("msgBrowser"));
        msgBrowser->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 100%);\n"
"background:transparent;border-width:0;border-style:outset\n"
"\n"
""));
        msgBrowser->setFrameShadow(QFrame::Raised);
        msgBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        msgBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        verticalLayout_4->addWidget(msgBrowser);

        frame_2 = new QFrame(horizontalLayoutWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setEnabled(true);
        frame_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgb(0, 216, 216), stop:1 rgba(151, 220, 255, 255));"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_2->setLineWidth(15);

        verticalLayout_4->addWidget(frame_2);

        widget_4 = new QWidget(horizontalLayoutWidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-color: rgb(0, 0, 0);"));
        toolButton_3 = new QToolButton(widget_4);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setGeometry(QRect(20, 0, 30, 30));
        toolButton_3->setStyleSheet(QString::fromUtf8("background:transparent;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/expression.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon2);
        fontCbx = new QFontComboBox(widget_4);
        fontCbx->setObjectName(QString::fromUtf8("fontCbx"));
        fontCbx->setGeometry(QRect(60, 0, 151, 31));
        sizeCbx = new QComboBox(widget_4);
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->addItem(QString());
        sizeCbx->setObjectName(QString::fromUtf8("sizeCbx"));
        sizeCbx->setGeometry(QRect(216, 1, 91, 31));
        boldTbtn = new QToolButton(widget_4);
        boldTbtn->setObjectName(QString::fromUtf8("boldTbtn"));
        boldTbtn->setGeometry(QRect(310, 0, 30, 30));
        boldTbtn->setStyleSheet(QString::fromUtf8("background:transparent;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        boldTbtn->setIcon(icon3);
        boldTbtn->setCheckable(true);
        boldTbtn->setArrowType(Qt::NoArrow);
        italicTbtn = new QToolButton(widget_4);
        italicTbtn->setObjectName(QString::fromUtf8("italicTbtn"));
        italicTbtn->setGeometry(QRect(340, 0, 30, 30));
        italicTbtn->setStyleSheet(QString::fromUtf8("background:transparent;"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        italicTbtn->setIcon(icon4);
        italicTbtn->setCheckable(true);
        underlineTbtn = new QToolButton(widget_4);
        underlineTbtn->setObjectName(QString::fromUtf8("underlineTbtn"));
        underlineTbtn->setGeometry(QRect(370, 0, 30, 30));
        underlineTbtn->setStyleSheet(QString::fromUtf8("background:transparent;"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/underline.png"), QSize(), QIcon::Normal, QIcon::Off);
        underlineTbtn->setIcon(icon5);
        underlineTbtn->setCheckable(true);
        colorTbtn = new QToolButton(widget_4);
        colorTbtn->setObjectName(QString::fromUtf8("colorTbtn"));
        colorTbtn->setGeometry(QRect(400, 0, 30, 30));
        colorTbtn->setStyleSheet(QString::fromUtf8("background:transparent;"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/color.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorTbtn->setIcon(icon6);
        colorTbtn->setCheckable(false);
        saveTbtn = new QToolButton(widget_4);
        saveTbtn->setObjectName(QString::fromUtf8("saveTbtn"));
        saveTbtn->setGeometry(QRect(430, 0, 30, 30));
        saveTbtn->setStyleSheet(QString::fromUtf8("background:transparent;"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveTbtn->setIcon(icon7);
        clearTbtn = new QToolButton(widget_4);
        clearTbtn->setObjectName(QString::fromUtf8("clearTbtn"));
        clearTbtn->setGeometry(QRect(460, 0, 30, 30));
        clearTbtn->setStyleSheet(QString::fromUtf8("background:transparent;"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearTbtn->setIcon(icon8);

        verticalLayout_4->addWidget(widget_4);

        msgTextEdit = new QTextEdit(horizontalLayoutWidget);
        msgTextEdit->setObjectName(QString::fromUtf8("msgTextEdit"));
        msgTextEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background:transparent;border-width:0;border-style:outset"));

        verticalLayout_4->addWidget(msgTextEdit);

        widget_3 = new QWidget(horizontalLayoutWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayoutWidget_2 = new QWidget(widget_3);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 0, 995, 32));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        close2 = new QPushButton(horizontalLayoutWidget_2);
        close2->setObjectName(QString::fromUtf8("close2"));
        close2->setMinimumSize(QSize(80, 30));
        close2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 10pt \"\351\273\221\344\275\223\";background-color:rgb(235, 235, 235);border-radius: 3px; color: rgb(0, 0, 0);}\n"
"QPushButton:hover { background-color: rgb(225, 225, 225); }"));

        horizontalLayout_2->addWidget(close2);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(horizontalLayoutWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(110, 30));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{font: 10pt \"\351\273\221\344\275\223\";background-color:rgb(0, 170, 255);border-radius: 3px; color: rgb(0, 0, 0);}\n"
"QPushButton:hover { background-color: rgb(0, 150, 255); }"));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(15, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalLayout_2->setStretch(0, 10);
        horizontalLayout_2->setStretch(1, 1);
        pushButton->raise();
        close2->raise();

        verticalLayout_4->addWidget(widget_3);

        verticalLayout_4->setStretch(0, 70);
        verticalLayout_4->setStretch(1, 1);
        verticalLayout_4->setStretch(2, 10);
        verticalLayout_4->setStretch(3, 30);
        verticalLayout_4->setStretch(4, 10);

        verticalLayout->addLayout(verticalLayout_4);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 11);

        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(TalkWindow);

        QMetaObject::connectSlotsByName(TalkWindow);
    } // setupUi

    void retranslateUi(QWidget *TalkWindow)
    {
        TalkWindow->setWindowTitle(QApplication::translate("TalkWindow", "Form", nullptr));
        name->setText(QApplication::translate("TalkWindow", "TextLabel", nullptr));
        hide->setText(QString());
        close->setText(QString());
        msgBrowser->setHtml(QApplication::translate("TalkWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
#ifndef QT_NO_TOOLTIP
        toolButton_3->setToolTip(QApplication::translate("TalkWindow", "\350\241\250\346\203\205", nullptr));
#endif // QT_NO_TOOLTIP
        toolButton_3->setText(QApplication::translate("TalkWindow", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        fontCbx->setToolTip(QApplication::translate("TalkWindow", "\345\255\227\344\275\223", nullptr));
#endif // QT_NO_TOOLTIP
        sizeCbx->setItemText(0, QApplication::translate("TalkWindow", "5", nullptr));
        sizeCbx->setItemText(1, QApplication::translate("TalkWindow", "6", nullptr));
        sizeCbx->setItemText(2, QApplication::translate("TalkWindow", "7", nullptr));
        sizeCbx->setItemText(3, QApplication::translate("TalkWindow", "8", nullptr));
        sizeCbx->setItemText(4, QApplication::translate("TalkWindow", "9", nullptr));
        sizeCbx->setItemText(5, QApplication::translate("TalkWindow", "10", nullptr));
        sizeCbx->setItemText(6, QApplication::translate("TalkWindow", "11", nullptr));
        sizeCbx->setItemText(7, QApplication::translate("TalkWindow", "12", nullptr));
        sizeCbx->setItemText(8, QApplication::translate("TalkWindow", "13", nullptr));
        sizeCbx->setItemText(9, QApplication::translate("TalkWindow", "14", nullptr));
        sizeCbx->setItemText(10, QApplication::translate("TalkWindow", "16", nullptr));
        sizeCbx->setItemText(11, QApplication::translate("TalkWindow", "18", nullptr));
        sizeCbx->setItemText(12, QApplication::translate("TalkWindow", "20", nullptr));
        sizeCbx->setItemText(13, QApplication::translate("TalkWindow", "22", nullptr));
        sizeCbx->setItemText(14, QApplication::translate("TalkWindow", "24", nullptr));
        sizeCbx->setItemText(15, QApplication::translate("TalkWindow", "26", nullptr));
        sizeCbx->setItemText(16, QApplication::translate("TalkWindow", "28", nullptr));

#ifndef QT_NO_TOOLTIP
        sizeCbx->setToolTip(QApplication::translate("TalkWindow", "\345\255\227\344\275\223\345\244\247\345\260\217", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        boldTbtn->setToolTip(QApplication::translate("TalkWindow", "<html><head/><body><p>\345\212\240\347\262\227</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        boldTbtn->setText(QApplication::translate("TalkWindow", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        italicTbtn->setToolTip(QApplication::translate("TalkWindow", "\346\226\234\344\275\223", nullptr));
#endif // QT_NO_TOOLTIP
        italicTbtn->setText(QApplication::translate("TalkWindow", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        underlineTbtn->setToolTip(QApplication::translate("TalkWindow", "\344\270\213\345\210\222\347\272\277", nullptr));
#endif // QT_NO_TOOLTIP
        underlineTbtn->setText(QApplication::translate("TalkWindow", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        colorTbtn->setToolTip(QApplication::translate("TalkWindow", "\345\255\227\344\275\223\351\242\234\350\211\262", nullptr));
#endif // QT_NO_TOOLTIP
        colorTbtn->setText(QApplication::translate("TalkWindow", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        saveTbtn->setToolTip(QApplication::translate("TalkWindow", "\344\277\235\345\255\230", nullptr));
#endif // QT_NO_TOOLTIP
        saveTbtn->setText(QApplication::translate("TalkWindow", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        clearTbtn->setToolTip(QApplication::translate("TalkWindow", "\346\270\205\347\251\272", nullptr));
#endif // QT_NO_TOOLTIP
        clearTbtn->setText(QApplication::translate("TalkWindow", "...", nullptr));
        close2->setText(QApplication::translate("TalkWindow", "\345\205\263\351\227\255", nullptr));
        pushButton->setText(QApplication::translate("TalkWindow", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TalkWindow: public Ui_TalkWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TALKWINDOW_H
