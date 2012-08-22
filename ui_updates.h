/********************************************************************************
** Form generated from reading UI file 'updates.ui'
**
** Created: Wed Aug 22 08:40:18 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATES_H
#define UI_UPDATES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Updates
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QGroupBox *groupBox;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *Updates)
    {
        if (Updates->objectName().isEmpty())
            Updates->setObjectName(QString::fromUtf8("Updates"));
        Updates->resize(415, 230);
        Updates->setMinimumSize(QSize(415, 230));
        Updates->setMaximumSize(QSize(415, 230));
        horizontalLayout = new QHBoxLayout(Updates);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(Updates);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("background: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 381, 151));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 20, 361, 121));
        textBrowser->setStyleSheet(QString::fromUtf8("background: none;"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(128, 190, 171, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background: none;"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(29, 7, 161, 16));

        horizontalLayout->addWidget(frame);


        retranslateUi(Updates);

        QMetaObject::connectSlotsByName(Updates);
    } // setupUi

    void retranslateUi(QDialog *Updates)
    {
        Updates->setWindowTitle(QApplication::translate("Updates", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Updates", "Updates allow you to: ", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("Updates", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" font-size:8pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:-5px; -qt-block-indent:0; text-indent:-20px;\"><span style=\" font-size:10pt;\">Benifit from latest features.</span></li>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:-5px; -qt-block-indent:0; text-indent:-20px;\">have any potential bug fixes.</li>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:-5px; -qt-block-indent:1; text-indent:-20px; fon"
                        "t-size:10pt;\"><br /></p>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:-5px; -qt-block-indent:0; text-indent:-20px;\">Enrich the dictionary.</li></ul></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Updates", "Check now...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Updates", "Actual version:   1.0    (final)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Updates: public Ui_Updates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATES_H
