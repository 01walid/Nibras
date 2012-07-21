/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat 21. Jul 14:08:53 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExport;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionFonts;
    QAction *actionPreferences;
    QAction *actionAbout_the_program;
    QAction *actionManual;
    QAction *actionSupreme_Council_of_the_Arabic_language;
    QAction *actionZoom_in;
    QAction *actionZoom_out;
    QAction *actionCheck_for_update;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFrame *baseFrame;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QFrame *frameTop;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QFrame *searchFrame;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *searchLineEdit;
    QPushButton *searchButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QLabel *label_2;
    QFrame *centralFrame;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tableWidget;
    QFrame *edgeFrame;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuTools;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(720, 432);
        MainWindow->setStyleSheet(QString::fromUtf8("#baseFrame {\n"
"	  background: #414141;\n"
" border-left: 1px solid #4b4b4b;\n"
"}\n"
"\n"
"#frameTop{\n"
"border: none;\n"
"border-bottom: 1px solid #666666;\n"
"}\n"
"\n"
"#edgeFrame {\n"
"  background: #fbba1b;\n"
"}\n"
"\n"
"#centralFrame {\n"
"	background: #f3f3f3;\n"
"}\n"
"\n"
"\n"
"#searchLineEdit{\n"
"	background: #323232;\n"
"	border: 1px solid #fbba1b;\n"
"	color: white;\n"
"}\n"
"\n"
"#searchLineEdit:focus {\n"
" border: 1px solid #fbba1b;\n"
"}\n"
"\n"
"  QTableView  QHeaderView {\n"
"    spacing: 0px;\n"
"	height: 26px;\n"
"    background-color: #d2d2d2;\n"
"    color: black;\n"
"	border: 1px dashed gray;\n"
"    margin: 0px;\n"
"	padding: 0px;\n"
"    text-align: center;\n"
"    font-size: 12px;\n"
"	border-top: none;\n"
"border-right: none;\n"
"border-left: none;\n"
" }\n"
"\n"
"  QTableView  QHeaderView::section:horizontal {\n"
"    spacing: 0px;\n"
"	height: 26px;\n"
"    background-color: #d2d2d2;\n"
"    color: black;\n"
"    margin: 0px;\n"
"	padding: 0px;\n"
"    text-align: center;\n"
""
                        "    font-size: 12px;\n"
"    border: 1px solid #7b7b7b;\n"
"	border-bottom: none;\n"
"	border-left: none;\n"
"	border-top: none;\n"
"}\n"
"\n"
"QPushButton#searchButton {\n"
"	border: 1px solid #fbba1b;\n"
"}\n"
"\n"
" QToolBar {\n"
"     background: #414141;\n"
"     spacing: 10px; /* spacing between items in the tool bar */\n"
" }\n"
""));
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/export.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport->setIcon(icon);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon1);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon2);
        actionFonts = new QAction(MainWindow);
        actionFonts->setObjectName(QString::fromUtf8("actionFonts"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/Font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFonts->setIcon(icon3);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionAbout_the_program = new QAction(MainWindow);
        actionAbout_the_program->setObjectName(QString::fromUtf8("actionAbout_the_program"));
        actionManual = new QAction(MainWindow);
        actionManual->setObjectName(QString::fromUtf8("actionManual"));
        actionSupreme_Council_of_the_Arabic_language = new QAction(MainWindow);
        actionSupreme_Council_of_the_Arabic_language->setObjectName(QString::fromUtf8("actionSupreme_Council_of_the_Arabic_language"));
        actionZoom_in = new QAction(MainWindow);
        actionZoom_in->setObjectName(QString::fromUtf8("actionZoom_in"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/ZoomIn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_in->setIcon(icon4);
        actionZoom_out = new QAction(MainWindow);
        actionZoom_out->setObjectName(QString::fromUtf8("actionZoom_out"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/ZoomOut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_out->setIcon(icon5);
        actionCheck_for_update = new QAction(MainWindow);
        actionCheck_for_update->setObjectName(QString::fromUtf8("actionCheck_for_update"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        baseFrame = new QFrame(centralWidget);
        baseFrame->setObjectName(QString::fromUtf8("baseFrame"));
        baseFrame->setFrameShape(QFrame::StyledPanel);
        baseFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(baseFrame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(9, 0, 0, 7);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frameTop = new QFrame(baseFrame);
        frameTop->setObjectName(QString::fromUtf8("frameTop"));
        frameTop->setMinimumSize(QSize(0, 40));
        frameTop->setMaximumSize(QSize(16777215, 40));
        frameTop->setFrameShape(QFrame::StyledPanel);
        frameTop->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frameTop);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frameTop);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(frameTop);

        searchFrame = new QFrame(baseFrame);
        searchFrame->setObjectName(QString::fromUtf8("searchFrame"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchFrame->sizePolicy().hasHeightForWidth());
        searchFrame->setSizePolicy(sizePolicy);
        searchFrame->setMinimumSize(QSize(0, 70));
        searchFrame->setMaximumSize(QSize(16777215, 60));
        searchFrame->setFrameShape(QFrame::StyledPanel);
        searchFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(searchFrame);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        searchLineEdit = new QLineEdit(searchFrame);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));
        searchLineEdit->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setPointSize(10);
        searchLineEdit->setFont(font);
        searchLineEdit->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(searchLineEdit);

        searchButton = new QPushButton(searchFrame);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setMinimumSize(QSize(0, 30));
        searchButton->setMaximumSize(QSize(16777215, 30));
        searchButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/searching.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon6);
        searchButton->setIconSize(QSize(32, 32));
        searchButton->setFlat(true);

        horizontalLayout_3->addWidget(searchButton);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        label_3 = new QLabel(searchFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(51, 55));
        label_3->setMaximumSize(QSize(51, 55));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/scla-logo.png")));

        horizontalLayout_4->addWidget(label_3);


        verticalLayout_5->addLayout(horizontalLayout_4);

        label_2 = new QLabel(searchFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_2);


        verticalLayout_3->addWidget(searchFrame);

        centralFrame = new QFrame(baseFrame);
        centralFrame->setObjectName(QString::fromUtf8("centralFrame"));
        centralFrame->setFrameShape(QFrame::StyledPanel);
        centralFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(centralFrame);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tableWidget = new QTableWidget(centralFrame);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_4->addWidget(tableWidget);


        verticalLayout_3->addWidget(centralFrame);


        horizontalLayout_2->addLayout(verticalLayout_3);

        edgeFrame = new QFrame(baseFrame);
        edgeFrame->setObjectName(QString::fromUtf8("edgeFrame"));
        edgeFrame->setMinimumSize(QSize(5, 0));
        edgeFrame->setMaximumSize(QSize(5, 16777215));
        edgeFrame->setFrameShape(QFrame::StyledPanel);
        edgeFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(edgeFrame);


        verticalLayout->addWidget(baseFrame);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 720, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QFont font1;
        font1.setKerning(true);
        mainToolBar->setFont(font1);
        mainToolBar->setAutoFillBackground(false);
        mainToolBar->setMovable(false);
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionExport);
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuView->addAction(actionFonts);
        menuTools->addAction(actionPreferences);
        menuHelp->addAction(actionAbout_the_program);
        menuHelp->addAction(actionManual);
        menuHelp->addAction(actionCheck_for_update);
        mainToolBar->addAction(actionFonts);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionPrint);
        mainToolBar->addAction(actionExport);
        mainToolBar->addAction(actionZoom_in);
        mainToolBar->addAction(actionZoom_out);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionExport->setText(QApplication::translate("MainWindow", "Export", 0, QApplication::UnicodeUTF8));
        actionPrint->setText(QApplication::translate("MainWindow", "print", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "exit", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0, QApplication::UnicodeUTF8));
        actionFonts->setText(QApplication::translate("MainWindow", "Fonts", 0, QApplication::UnicodeUTF8));
        actionPreferences->setText(QApplication::translate("MainWindow", "preferences", 0, QApplication::UnicodeUTF8));
        actionAbout_the_program->setText(QApplication::translate("MainWindow", "About the program", 0, QApplication::UnicodeUTF8));
        actionManual->setText(QApplication::translate("MainWindow", "Manual", 0, QApplication::UnicodeUTF8));
        actionSupreme_Council_of_the_Arabic_language->setText(QApplication::translate("MainWindow", "About Supreme Council of the Arabic language", 0, QApplication::UnicodeUTF8));
        actionZoom_in->setText(QApplication::translate("MainWindow", "Zoom in", 0, QApplication::UnicodeUTF8));
        actionZoom_out->setText(QApplication::translate("MainWindow", "Zoom out", 0, QApplication::UnicodeUTF8));
        actionCheck_for_update->setText(QApplication::translate("MainWindow", "Check for update...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Welcome to Daleel!</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        searchButton->setText(QString());
        label_3->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Result:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Arabic", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "French", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "English", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
