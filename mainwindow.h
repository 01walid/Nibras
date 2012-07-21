#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtGui>
#include "updates.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_actionExit_triggered();

    void on_searchLineEdit_textChanged();

    void on_searchButton_clicked();

    void on_actionZoom_in_triggered();

    void on_actionZoom_out_triggered();

    void on_actionExport_triggered();

    void on_actionCheck_for_update_triggered();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;

    void clearTable();
    void makeDBConnection();
};

#endif // MAINWINDOW_H
