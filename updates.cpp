#include "updates.h"
#include "ui_updates.h"

Updates::Updates(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Updates)
{
    ui->setupUi(this);
}

Updates::~Updates()
{
    delete ui;
}

void Updates::on_pushButton_clicked()
{
    ui->pushButton->setEnabled(false);
    ui->pushButton->setText(tr("Cheking..."));

    QNetworkAccessManager *manager = new QNetworkAccessManager();

    connect(manager, SIGNAL ( finished ( QNetworkReply* )),
            this, SLOT(xmlDownloadFinished(QNetworkReply*)));

    manager->get(QNetworkRequest(QUrl("http://linuxscout.users.sourceforge.net/nibras/version.xml")));
}

void Updates::xmlDownloadFinished(QNetworkReply *reply)
{
    if(reply->error() != QNetworkReply::NoError )
    {
        QMessageBox::warning(this, tr("Error"), tr("Server not found, check your internet connection!\n"));
        ui->pushButton->setText(tr("Check again"));
        ui->pushButton->setEnabled(true);
        return;
    }

    QFile file("version.xml");
    if (!file.open(QIODevice::WriteOnly))
        return;

    file.write(reply->readAll());
    file.close();

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this,
                              tr("Error parsing the XML file."),
                              tr("Error parsing the XML file."));
        ui->pushButton->setText(tr("Check again"));
        ui->pushButton->setEnabled(true);
        return;
    }

    QXmlStreamReader xmlFile(&file);
    QString version;
    QString whatsNew = "";

    while(!xmlFile.atEnd() && !xmlFile.hasError())
    {
        QXmlStreamReader::TokenType token = xmlFile.readNext();
        if(token == QXmlStreamReader::StartDocument) {
                        continue;
                }

        if(token == QXmlStreamReader::StartElement) {

            if(xmlFile.name() == "Nibras") {
                continue;
            }

            if(xmlFile.name() == "Version") {
                 version =  xmlFile.readElementText();
                 continue;
            }

            if(xmlFile.name() == "WhatsNew") {
                continue;
            }

            if(xmlFile.name() == "feature"){
                whatsNew += "- " + xmlFile.readElementText() + "\r\n";
            }
        }
    }

    if(xmlFile.hasError()) {
            QMessageBox::critical(this,
            tr("Error"), xmlFile.errorString(),
            QMessageBox::Ok);
            ui->pushButton->setText(tr("Check again"));
            ui->pushButton->setEnabled(true);
            return;
    }

    if(version.toInt() > 1)
    {
        QMessageBox message;
        message.setWindowTitle(tr("Update available!"));
        message.setIcon(QMessageBox::Information);
        message.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
        message.setDefaultButton(QMessageBox::Yes);
        message.setText(tr("New version (v %1) is available!\n").arg(version));
        message.setInformativeText(tr("Would you like to download the new version?"));
        QString details = tr("What's New: \n");
        details += whatsNew;
        message.setDetailedText(details);

        int response = message.exec();

        ui->pushButton->setText(tr("Check again"));
        ui->pushButton->setEnabled(true);

        if(response == QMessageBox::Yes)
        {
            QDesktopServices::openUrl(QUrl("http://nibras.sourceforge.net/"));
        }
        return;
    }
    else QMessageBox::information(this, tr("No update available"), tr("You have the latest version!"
                                  "\nNo update available for now."));
    file.remove();
    ui->pushButton->setText(tr("Check updates..."));
    ui->pushButton->setEnabled(true);
}
