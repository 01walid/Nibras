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

    manager->get(QNetworkRequest(QUrl("http://Bilama.com/FactureFacile/version.xml")));
}

void Updates::xmlDownloadFinished(QNetworkReply *reply)
{
    if(reply->error() != QNetworkReply::NoError )
    {
        QMessageBox::warning(this, tr("Coudln't check for updates!"), tr("Server not found, check your internet connection!"));
        ui->pushButton->setText(tr("Check again"));
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
                              tr("Couldn't open example.xml"));
        return;
    }

    QXmlStreamReader xmlFile(&file);
    QString version;

    while(!xmlFile.atEnd() && !xmlFile.hasError())
    {
        QXmlStreamReader::TokenType token = xmlFile.readNext();
        if(token == QXmlStreamReader::StartDocument) {
                        continue;
                }

        if(token == QXmlStreamReader::StartElement) {

            if(xmlFile.name() == "FactureFacile") {
                continue;
            }

            if(xmlFile.name() == "Version") {
                 version =  xmlFile.readElementText();
            }
        }
    }

    if(xmlFile.hasError()) {
            QMessageBox::critical(this,
            tr("Error"), xmlFile.errorString(),
            QMessageBox::Ok);
            return;
    }

    if(version.toInt() > 1)
        QMessageBox::information(this, tr("Update available!"), tr("New version (v %1) is available!").arg(version));
    else QMessageBox::information(this, tr("No update available"), tr("You have the latest version!"
                                  "\n No update available for now."));
    file.remove();
    ui->pushButton->setText(tr("Check updates..."));
    ui->pushButton->setEnabled(true);
}
