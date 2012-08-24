/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Fri 24. Aug 12:00:23 2012
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
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionFonts;
    QAction *actionPreferences;
    QAction *actionAbout_the_program;
    QAction *actionSupreme_Council_of_the_Arabic_language;
    QAction *actionZoom_in;
    QAction *actionZoom_out;
    QAction *actionCheck_for_update;
    QAction *actionSuggest_New;
    QAction *actionExport_To_HTML;
    QAction *actionPrintPreview;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_12;
    QFrame *baseFrame;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QFrame *frameTop;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *ArButton;
    QLabel *label_4;
    QPushButton *FRButton;
    QFrame *searchFrame;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *searchLineEdit;
    QPushButton *searchButton;
    QPushButton *showAlphabetButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QFrame *keyboardFrame;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *seenButton;
    QPushButton *zayButton;
    QPushButton *raaButton;
    QPushButton *thalButton;
    QPushButton *dalButton;
    QPushButton *khaaButton;
    QPushButton *haaButton;
    QPushButton *jeemButton;
    QPushButton *thaaButton;
    QPushButton *taaButton;
    QPushButton *baaButton;
    QPushButton *alifButton;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *meemButton;
    QPushButton *lamButton;
    QPushButton *kaafButton;
    QPushButton *qaafButton;
    QPushButton *faaButton;
    QPushButton *ghaynButton;
    QPushButton *aynButton;
    QPushButton *dhhadButton;
    QPushButton *ttaaButton;
    QPushButton *dhadButton;
    QPushButton *sadButton;
    QPushButton *sheenButton;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *yaaButton;
    QPushButton *wawButton;
    QSpacerItem *horizontalSpacer_8;
    QFrame *centralFrame;
    QHBoxLayout *horizontalLayout_11;
    QTableWidget *tableWidget;
    QFrame *edgeFrame;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(792, 432);
        MainWindow->setStyleSheet(QString::fromUtf8("QFrame {\n"
"border: none;\n"
"}\n"
"\n"
"#baseFrame {\n"
"	  background: #414141;\n"
"	border: none;\n"
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
"    "
                        "text-align: center;\n"
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
"\n"
"#keyboardFrame QPushButton{\n"
"font-family: \"Times New Roman\";\n"
"font-size: 20px;\n"
"color: white;\n"
"height: 100px;\n"
"width: 50px;\n"
"border: 1px solid #666666;\n"
"border-radius: 3px;\n"
"}\n"
"\n"
"#keyboardFrame QPushButton:hover{\n"
"border-color: #fbba1b;\n"
"}\n"
"\n"
"#showAlphabetButton , #ArButton, #FRButton{\n"
"color: white;\n"
"border: none;\n"
"}\n"
"#showAlphabetButton:hover, #ArButton:hover, #FRButton:hover{\n"
"color: #fbba1b;\n"
"}\n"
"\n"
"#mainToolBar {\n"
" border: none;\n"
"}"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon1);
        actionFonts = new QAction(MainWindow);
        actionFonts->setObjectName(QString::fromUtf8("actionFonts"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFonts->setIcon(icon2);
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionAbout_the_program = new QAction(MainWindow);
        actionAbout_the_program->setObjectName(QString::fromUtf8("actionAbout_the_program"));
        actionSupreme_Council_of_the_Arabic_language = new QAction(MainWindow);
        actionSupreme_Council_of_the_Arabic_language->setObjectName(QString::fromUtf8("actionSupreme_Council_of_the_Arabic_language"));
        actionZoom_in = new QAction(MainWindow);
        actionZoom_in->setObjectName(QString::fromUtf8("actionZoom_in"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/ZoomIn.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_in->setIcon(icon3);
        actionZoom_out = new QAction(MainWindow);
        actionZoom_out->setObjectName(QString::fromUtf8("actionZoom_out"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/ZoomOut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_out->setIcon(icon4);
        actionCheck_for_update = new QAction(MainWindow);
        actionCheck_for_update->setObjectName(QString::fromUtf8("actionCheck_for_update"));
        actionSuggest_New = new QAction(MainWindow);
        actionSuggest_New->setObjectName(QString::fromUtf8("actionSuggest_New"));
        actionExport_To_HTML = new QAction(MainWindow);
        actionExport_To_HTML->setObjectName(QString::fromUtf8("actionExport_To_HTML"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/export.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExport_To_HTML->setIcon(icon5);
        actionPrintPreview = new QAction(MainWindow);
        actionPrintPreview->setObjectName(QString::fromUtf8("actionPrintPreview"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/document_print_preview.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrintPreview->setIcon(icon6);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_12 = new QHBoxLayout(centralWidget);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        baseFrame = new QFrame(centralWidget);
        baseFrame->setObjectName(QString::fromUtf8("baseFrame"));
        baseFrame->setFrameShape(QFrame::StyledPanel);
        baseFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(baseFrame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
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
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(4, -1, -1, 0);
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        label = new QLabel(frameTop);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ArButton = new QPushButton(frameTop);
        ArButton->setObjectName(QString::fromUtf8("ArButton"));
        ArButton->setCursor(QCursor(Qt::PointingHandCursor));
        ArButton->setFlat(true);

        horizontalLayout->addWidget(ArButton);

        label_4 = new QLabel(frameTop);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        FRButton = new QPushButton(frameTop);
        FRButton->setObjectName(QString::fromUtf8("FRButton"));
        FRButton->setCursor(QCursor(Qt::PointingHandCursor));
        FRButton->setFlat(true);

        horizontalLayout->addWidget(FRButton);


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
        horizontalLayout_10 = new QHBoxLayout(searchFrame);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        searchLineEdit = new QLineEdit(searchFrame);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));
        searchLineEdit->setMinimumSize(QSize(0, 30));
        QFont font;
        font.setPointSize(10);
        searchLineEdit->setFont(font);
        searchLineEdit->setLayoutDirection(Qt::LeftToRight);
        searchLineEdit->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(searchLineEdit);

        searchButton = new QPushButton(searchFrame);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setMinimumSize(QSize(0, 30));
        searchButton->setMaximumSize(QSize(16777215, 30));
        searchButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/searching.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon7);
        searchButton->setIconSize(QSize(32, 32));
        searchButton->setFlat(true);

        horizontalLayout_3->addWidget(searchButton);


        horizontalLayout_10->addLayout(horizontalLayout_3);

        showAlphabetButton = new QPushButton(searchFrame);
        showAlphabetButton->setObjectName(QString::fromUtf8("showAlphabetButton"));
        showAlphabetButton->setCursor(QCursor(Qt::PointingHandCursor));
        showAlphabetButton->setFlat(true);

        horizontalLayout_10->addWidget(showAlphabetButton);

        horizontalSpacer_2 = new QSpacerItem(243, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);

        label_2 = new QLabel(searchFrame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(41, 16777215));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/Nibras-Logo-transparent.png")));
        label_2->setScaledContents(true);

        horizontalLayout_10->addWidget(label_2);


        verticalLayout_3->addWidget(searchFrame);

        keyboardFrame = new QFrame(baseFrame);
        keyboardFrame->setObjectName(QString::fromUtf8("keyboardFrame"));
        keyboardFrame->setMaximumSize(QSize(16777215, 150));
        keyboardFrame->setFrameShape(QFrame::StyledPanel);
        keyboardFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(keyboardFrame);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_3 = new QLabel(keyboardFrame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        seenButton = new QPushButton(keyboardFrame);
        seenButton->setObjectName(QString::fromUtf8("seenButton"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Times New Roman"));
        seenButton->setFont(font1);
        seenButton->setCursor(QCursor(Qt::PointingHandCursor));
        seenButton->setFlat(true);

        horizontalLayout_4->addWidget(seenButton);

        zayButton = new QPushButton(keyboardFrame);
        zayButton->setObjectName(QString::fromUtf8("zayButton"));
        zayButton->setFont(font1);
        zayButton->setCursor(QCursor(Qt::PointingHandCursor));
        zayButton->setFlat(true);

        horizontalLayout_4->addWidget(zayButton);

        raaButton = new QPushButton(keyboardFrame);
        raaButton->setObjectName(QString::fromUtf8("raaButton"));
        raaButton->setFont(font1);
        raaButton->setCursor(QCursor(Qt::PointingHandCursor));
        raaButton->setFlat(true);

        horizontalLayout_4->addWidget(raaButton);

        thalButton = new QPushButton(keyboardFrame);
        thalButton->setObjectName(QString::fromUtf8("thalButton"));
        thalButton->setFont(font1);
        thalButton->setCursor(QCursor(Qt::PointingHandCursor));
        thalButton->setFlat(true);

        horizontalLayout_4->addWidget(thalButton);

        dalButton = new QPushButton(keyboardFrame);
        dalButton->setObjectName(QString::fromUtf8("dalButton"));
        dalButton->setFont(font1);
        dalButton->setCursor(QCursor(Qt::PointingHandCursor));
        dalButton->setFlat(true);

        horizontalLayout_4->addWidget(dalButton);

        khaaButton = new QPushButton(keyboardFrame);
        khaaButton->setObjectName(QString::fromUtf8("khaaButton"));
        khaaButton->setFont(font1);
        khaaButton->setCursor(QCursor(Qt::PointingHandCursor));
        khaaButton->setFlat(true);

        horizontalLayout_4->addWidget(khaaButton);

        haaButton = new QPushButton(keyboardFrame);
        haaButton->setObjectName(QString::fromUtf8("haaButton"));
        haaButton->setFont(font1);
        haaButton->setCursor(QCursor(Qt::PointingHandCursor));
        haaButton->setFlat(true);

        horizontalLayout_4->addWidget(haaButton);

        jeemButton = new QPushButton(keyboardFrame);
        jeemButton->setObjectName(QString::fromUtf8("jeemButton"));
        jeemButton->setFont(font1);
        jeemButton->setCursor(QCursor(Qt::PointingHandCursor));
        jeemButton->setFlat(true);

        horizontalLayout_4->addWidget(jeemButton);

        thaaButton = new QPushButton(keyboardFrame);
        thaaButton->setObjectName(QString::fromUtf8("thaaButton"));
        thaaButton->setFont(font1);
        thaaButton->setCursor(QCursor(Qt::PointingHandCursor));
        thaaButton->setFlat(true);

        horizontalLayout_4->addWidget(thaaButton);

        taaButton = new QPushButton(keyboardFrame);
        taaButton->setObjectName(QString::fromUtf8("taaButton"));
        taaButton->setFont(font1);
        taaButton->setCursor(QCursor(Qt::PointingHandCursor));
        taaButton->setFlat(true);

        horizontalLayout_4->addWidget(taaButton);

        baaButton = new QPushButton(keyboardFrame);
        baaButton->setObjectName(QString::fromUtf8("baaButton"));
        baaButton->setFont(font1);
        baaButton->setCursor(QCursor(Qt::PointingHandCursor));
        baaButton->setFlat(true);

        horizontalLayout_4->addWidget(baaButton);

        alifButton = new QPushButton(keyboardFrame);
        alifButton->setObjectName(QString::fromUtf8("alifButton"));
        alifButton->setFont(font1);
        alifButton->setCursor(QCursor(Qt::PointingHandCursor));
        alifButton->setFlat(true);

        horizontalLayout_4->addWidget(alifButton);


        horizontalLayout_7->addLayout(horizontalLayout_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        meemButton = new QPushButton(keyboardFrame);
        meemButton->setObjectName(QString::fromUtf8("meemButton"));
        meemButton->setFont(font1);
        meemButton->setCursor(QCursor(Qt::PointingHandCursor));
        meemButton->setFlat(true);

        horizontalLayout_5->addWidget(meemButton);

        lamButton = new QPushButton(keyboardFrame);
        lamButton->setObjectName(QString::fromUtf8("lamButton"));
        lamButton->setFont(font1);
        lamButton->setCursor(QCursor(Qt::PointingHandCursor));
        lamButton->setFlat(true);

        horizontalLayout_5->addWidget(lamButton);

        kaafButton = new QPushButton(keyboardFrame);
        kaafButton->setObjectName(QString::fromUtf8("kaafButton"));
        kaafButton->setFont(font1);
        kaafButton->setCursor(QCursor(Qt::PointingHandCursor));
        kaafButton->setFlat(true);

        horizontalLayout_5->addWidget(kaafButton);

        qaafButton = new QPushButton(keyboardFrame);
        qaafButton->setObjectName(QString::fromUtf8("qaafButton"));
        qaafButton->setFont(font1);
        qaafButton->setCursor(QCursor(Qt::PointingHandCursor));
        qaafButton->setFlat(true);

        horizontalLayout_5->addWidget(qaafButton);

        faaButton = new QPushButton(keyboardFrame);
        faaButton->setObjectName(QString::fromUtf8("faaButton"));
        faaButton->setFont(font1);
        faaButton->setCursor(QCursor(Qt::PointingHandCursor));
        faaButton->setFlat(true);

        horizontalLayout_5->addWidget(faaButton);

        ghaynButton = new QPushButton(keyboardFrame);
        ghaynButton->setObjectName(QString::fromUtf8("ghaynButton"));
        ghaynButton->setFont(font1);
        ghaynButton->setCursor(QCursor(Qt::PointingHandCursor));
        ghaynButton->setFlat(true);

        horizontalLayout_5->addWidget(ghaynButton);

        aynButton = new QPushButton(keyboardFrame);
        aynButton->setObjectName(QString::fromUtf8("aynButton"));
        aynButton->setFont(font1);
        aynButton->setCursor(QCursor(Qt::PointingHandCursor));
        aynButton->setFlat(true);

        horizontalLayout_5->addWidget(aynButton);

        dhhadButton = new QPushButton(keyboardFrame);
        dhhadButton->setObjectName(QString::fromUtf8("dhhadButton"));
        dhhadButton->setFont(font1);
        dhhadButton->setCursor(QCursor(Qt::PointingHandCursor));
        dhhadButton->setFlat(true);

        horizontalLayout_5->addWidget(dhhadButton);

        ttaaButton = new QPushButton(keyboardFrame);
        ttaaButton->setObjectName(QString::fromUtf8("ttaaButton"));
        ttaaButton->setFont(font1);
        ttaaButton->setCursor(QCursor(Qt::PointingHandCursor));
        ttaaButton->setFlat(true);

        horizontalLayout_5->addWidget(ttaaButton);

        dhadButton = new QPushButton(keyboardFrame);
        dhadButton->setObjectName(QString::fromUtf8("dhadButton"));
        dhadButton->setFont(font1);
        dhadButton->setCursor(QCursor(Qt::PointingHandCursor));
        dhadButton->setFlat(true);

        horizontalLayout_5->addWidget(dhadButton);

        sadButton = new QPushButton(keyboardFrame);
        sadButton->setObjectName(QString::fromUtf8("sadButton"));
        sadButton->setFont(font1);
        sadButton->setCursor(QCursor(Qt::PointingHandCursor));
        sadButton->setFlat(true);

        horizontalLayout_5->addWidget(sadButton);

        sheenButton = new QPushButton(keyboardFrame);
        sheenButton->setObjectName(QString::fromUtf8("sheenButton"));
        sheenButton->setFont(font1);
        sheenButton->setCursor(QCursor(Qt::PointingHandCursor));
        sheenButton->setFlat(true);

        horizontalLayout_5->addWidget(sheenButton);


        horizontalLayout_8->addLayout(horizontalLayout_5);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        yaaButton = new QPushButton(keyboardFrame);
        yaaButton->setObjectName(QString::fromUtf8("yaaButton"));
        yaaButton->setFont(font1);
        yaaButton->setCursor(QCursor(Qt::PointingHandCursor));
        yaaButton->setFlat(true);

        horizontalLayout_6->addWidget(yaaButton);

        wawButton = new QPushButton(keyboardFrame);
        wawButton->setObjectName(QString::fromUtf8("wawButton"));
        wawButton->setFont(font1);
        wawButton->setCursor(QCursor(Qt::PointingHandCursor));
        wawButton->setFlat(true);

        horizontalLayout_6->addWidget(wawButton);


        horizontalLayout_9->addLayout(horizontalLayout_6);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);


        verticalLayout_5->addLayout(horizontalLayout_9);


        verticalLayout_3->addWidget(keyboardFrame);

        centralFrame = new QFrame(baseFrame);
        centralFrame->setObjectName(QString::fromUtf8("centralFrame"));
        centralFrame->setFrameShape(QFrame::StyledPanel);
        centralFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(centralFrame);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        tableWidget = new QTableWidget(centralFrame);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);

        horizontalLayout_11->addWidget(tableWidget);


        verticalLayout_3->addWidget(centralFrame);


        horizontalLayout_2->addLayout(verticalLayout_3);

        edgeFrame = new QFrame(baseFrame);
        edgeFrame->setObjectName(QString::fromUtf8("edgeFrame"));
        edgeFrame->setMinimumSize(QSize(5, 0));
        edgeFrame->setMaximumSize(QSize(5, 16777215));
        edgeFrame->setFrameShape(QFrame::StyledPanel);
        edgeFrame->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(edgeFrame);

        edgeFrame->raise();

        horizontalLayout_12->addWidget(baseFrame);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 792, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QFont font2;
        font2.setKerning(true);
        mainToolBar->setFont(font2);
        mainToolBar->setLayoutDirection(Qt::LeftToRight);
        mainToolBar->setAutoFillBackground(false);
        mainToolBar->setMovable(false);
        mainToolBar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);
        mainToolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionExport_To_HTML);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuView->addAction(actionFonts);
        menuView->addSeparator();
        menuView->addAction(actionZoom_in);
        menuView->addAction(actionZoom_out);
        menuHelp->addAction(actionSuggest_New);
        menuHelp->addAction(actionAbout_the_program);
        menuHelp->addSeparator();
        menuHelp->addAction(actionCheck_for_update);
        mainToolBar->addAction(actionFonts);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionPrintPreview);
        mainToolBar->addAction(actionPrint);
        mainToolBar->addAction(actionExport_To_HTML);
        mainToolBar->addAction(actionZoom_in);
        mainToolBar->addAction(actionZoom_out);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Nibras", 0, QApplication::UnicodeUTF8));
        actionPrint->setText(QApplication::translate("MainWindow", "print", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "exit", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0, QApplication::UnicodeUTF8));
        actionFonts->setText(QApplication::translate("MainWindow", "Fonts", 0, QApplication::UnicodeUTF8));
        actionPreferences->setText(QApplication::translate("MainWindow", "preferences", 0, QApplication::UnicodeUTF8));
        actionAbout_the_program->setText(QApplication::translate("MainWindow", "About the program", 0, QApplication::UnicodeUTF8));
        actionSupreme_Council_of_the_Arabic_language->setText(QApplication::translate("MainWindow", "About Supreme Council of the Arabic language", 0, QApplication::UnicodeUTF8));
        actionZoom_in->setText(QApplication::translate("MainWindow", "Zoom in", 0, QApplication::UnicodeUTF8));
        actionZoom_out->setText(QApplication::translate("MainWindow", "Zoom out", 0, QApplication::UnicodeUTF8));
        actionCheck_for_update->setText(QApplication::translate("MainWindow", "Check for update...", 0, QApplication::UnicodeUTF8));
        actionSuggest_New->setText(QApplication::translate("MainWindow", "Suggest New...", 0, QApplication::UnicodeUTF8));
        actionExport_To_HTML->setText(QApplication::translate("MainWindow", "Export To HTML", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExport_To_HTML->setToolTip(QApplication::translate("MainWindow", "Export To HTML", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPrintPreview->setText(QApplication::translate("MainWindow", "PrintPreview", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPrintPreview->setToolTip(QApplication::translate("MainWindow", "Print preview", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Welcome to Daleel!</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        ArButton->setText(QApplication::translate("MainWindow", "\330\271\330\261\330\250\331\212", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\"> - </span></p></body></html>", 0, QApplication::UnicodeUTF8));
        FRButton->setText(QApplication::translate("MainWindow", "Fran\303\247ais", 0, QApplication::UnicodeUTF8));
        searchLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Search here (example: Write)", 0, QApplication::UnicodeUTF8));
        searchButton->setText(QString());
        showAlphabetButton->setText(QApplication::translate("MainWindow", "Show Alphabet +", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Choose a letter:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        seenButton->setText(QApplication::translate("MainWindow", "A", 0, QApplication::UnicodeUTF8));
        zayButton->setText(QApplication::translate("MainWindow", "B", 0, QApplication::UnicodeUTF8));
        raaButton->setText(QApplication::translate("MainWindow", "C", 0, QApplication::UnicodeUTF8));
        thalButton->setText(QApplication::translate("MainWindow", "D", 0, QApplication::UnicodeUTF8));
        dalButton->setText(QApplication::translate("MainWindow", "E", 0, QApplication::UnicodeUTF8));
        khaaButton->setText(QApplication::translate("MainWindow", "F", 0, QApplication::UnicodeUTF8));
        haaButton->setText(QApplication::translate("MainWindow", "G", 0, QApplication::UnicodeUTF8));
        jeemButton->setText(QApplication::translate("MainWindow", "H", 0, QApplication::UnicodeUTF8));
        thaaButton->setText(QApplication::translate("MainWindow", "I", 0, QApplication::UnicodeUTF8));
        taaButton->setText(QApplication::translate("MainWindow", "j", 0, QApplication::UnicodeUTF8));
        baaButton->setText(QApplication::translate("MainWindow", "K", 0, QApplication::UnicodeUTF8));
        alifButton->setText(QApplication::translate("MainWindow", "L", 0, QApplication::UnicodeUTF8));
        meemButton->setText(QApplication::translate("MainWindow", "M", 0, QApplication::UnicodeUTF8));
        lamButton->setText(QApplication::translate("MainWindow", "N", 0, QApplication::UnicodeUTF8));
        kaafButton->setText(QApplication::translate("MainWindow", "O", 0, QApplication::UnicodeUTF8));
        qaafButton->setText(QApplication::translate("MainWindow", "P", 0, QApplication::UnicodeUTF8));
        faaButton->setText(QApplication::translate("MainWindow", "Q", 0, QApplication::UnicodeUTF8));
        ghaynButton->setText(QApplication::translate("MainWindow", "U", 0, QApplication::UnicodeUTF8));
        aynButton->setText(QApplication::translate("MainWindow", "R", 0, QApplication::UnicodeUTF8));
        dhhadButton->setText(QApplication::translate("MainWindow", "S", 0, QApplication::UnicodeUTF8));
        ttaaButton->setText(QApplication::translate("MainWindow", "T", 0, QApplication::UnicodeUTF8));
        dhadButton->setText(QApplication::translate("MainWindow", "V", 0, QApplication::UnicodeUTF8));
        sadButton->setText(QApplication::translate("MainWindow", "W", 0, QApplication::UnicodeUTF8));
        sheenButton->setText(QApplication::translate("MainWindow", "X", 0, QApplication::UnicodeUTF8));
        yaaButton->setText(QApplication::translate("MainWindow", "X", 0, QApplication::UnicodeUTF8));
        wawButton->setText(QApplication::translate("MainWindow", "Z", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "French", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Arabic", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
