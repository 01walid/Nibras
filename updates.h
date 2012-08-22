#ifndef UPDATES_H
#define UPDATES_H
#include <QtNetwork>
#include <QDialog>
#include <QXmlStreamReader>
#include <QtGui>

namespace Ui {
class Updates;
}

class Updates : public QDialog
{
    Q_OBJECT

public:
    explicit Updates(QWidget *parent = 0);
    ~Updates();

private slots:
    void on_pushButton_clicked();

    void xmlDownloadFinished(QNetworkReply* reply);

private:
    Ui::Updates *ui;
};

#endif // UPDATES_H
