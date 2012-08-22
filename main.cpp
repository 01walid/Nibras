#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Important, don't remove this line
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));


    MainWindow main;

    // SplashScreen
    QPixmap pixmap(":/images/SplashScreen.png");
    QSplashScreen *splash = new QSplashScreen(pixmap);
    splash->show();

    QTimer::singleShot(1500, splash, SLOT(close()));
    QTimer::singleShot(1500, &main, SLOT(showMaximized()));
    
    return app.exec();
}
