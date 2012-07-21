/********************************************************************************
** Form generated from reading UI file 'update.ui'
**
** Created: Sat 21. Jul 13:55:05 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_H
#define UI_UPDATE_H

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

class Ui_update
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QGroupBox *groupBox;
    QTextBrowser *textBrowser;
    QPushButton *updateButton;
    QLabel *label;

    void setupUi(QDialog *update)
    {
        if (update->objectName().isEmpty())
            update->setObjectName(QString::fromUtf8("update"));
        update->resize(429, 239);
        horizontalLayout = new QHBoxLayout(update);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(update);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("  background: #414141;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 381, 151));
        groupBox->setStyleSheet(QString::fromUtf8("color: white;"));
        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 20, 361, 121));
        textBrowser->setStyleSheet(QString::fromUtf8("background: none;"));
        updateButton = new QPushButton(frame);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        updateButton->setGeometry(QRect(128, 190, 171, 31));
        updateButton->setStyleSheet(QString::fromUtf8("background: none;"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(29, 7, 161, 16));

        horizontalLayout->addWidget(frame);


        retranslateUi(update);

        QMetaObject::connectSlotsByName(update);
    } // setupUi

    void retranslateUi(QDialog *update)
    {
        update->setWindowTitle(QApplication::translate("update", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("update", "   Updates allow you:   ", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("update", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" font-size:10pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:-5px; -qt-block-indent:0; text-indent:-20px;\">Benifit from latest features.</li>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:-5px; -qt-block-indent:0; text-indent:-20px;\">bug fixes.</li>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:1; text-indent:0px;\"><a name=\"result_box\"></a><span style=\" font-size:10pt;\">I</span><span style=\" font"
                        "-size:10pt;\">mproved performence and stability.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:-5px; -qt-block-indent:1; text-indent:-20px; font-size:10pt;\"><br /></p>\n"
"<li style=\" font-size:10pt;\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:-5px; -qt-block-indent:0; text-indent:-20px;\">Enrich the dictionary.</li></ul>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:-5px; -qt-block-indent:0; text-indent:-20px; font-size:10pt;\"><br /></p></body></html>", 0, QApplication::UnicodeUTF8));
        updateButton->setText(QApplication::translate("update", "Check Now", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("update", "<html><head/><body><p><span style=\" color:#ffffff;\">Acutal ersion:   1.0    (final)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class update: public Ui_update {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_H
