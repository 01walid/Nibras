#ifndef UPDATE_H
#define UPDATE_H

#include <QDialog>
#include <QtNetwork>
#include <QXmlStreamReader>
#include <QtGui>

namespace Ui {
class update;
}

class Update : public QDialog
{
    Q_OBJECT
    
public:
    explicit Update(QWidget *parent = 0);
    ~Update();
    
private slots:
    void on_updateButton_clicked();

    void xmlDownloadFinished(QNetworkReply* reply);

private:
    Ui::update *ui;
};

#endif // UPDATE_H
