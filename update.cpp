#include "update.h"
#include "ui_update.h"

Update::Update(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Update)
{
    ui->setupUi(this);
}

Update::~Update()
{
    delete ui;
}

void Update::on_UpdateButton_clicked()
{
    ui->UpdateButton->setEnabled(false);
    ui->UpdateButton->setText(tr("Checking..."));

    QNetworkAccessManager *manager = new QNetworkAccessManager();

    connect(manager, SIGNAL ( finished ( QNetworkReply* )),
            this, SLOT(xmlDownloadFinished(QNetworkReply*)));

    manager->get(QNetworkRequest(QUrl("http://Bilama.com/FactureFacile/version.xml")));
}

void Update::xmlDownloadFinished(QNetworkReply *reply)
{
    if(reply->error() != QNetworkReply::NoError )
    {
        QMessageBox::information(this, "hi", "Serveur pas trouvé, vérifier votre connexion internet!");
        ui->UpdateButton->setText(tr("Revérifier les mises à jours"));
        return;
    }

    QFile file("version.xml");
    if (!file.open(QIODevice::WriteOnly))
        return;

    file.write(reply->readAll());
    file.close();

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this,
                              "QXSRExample::parseXML",
                              tr("Couldn't open example.xml"),
                              QMessageBox::Ok);
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
            tr("Erreur"), xmlFile.errorString(),
            QMessageBox::Ok);
            return;
    }

    if(version.toInt() > 1)
        QMessageBox::information(this, tr("Mise à jour dispinible!"), "Une nouvelle version (v "+ version + ") est disponible!");
    else QMessageBox::information(this, tr("Pas de mise à jour"), "Vous avez la dernière version du programme!"
                                  "\n pas de mise à jour disponible pour le moment.");
    file.remove();
    ui->UpdateButton->setText(tr("Vérifier les mises à jours"));
    ui->UpdateButton->setEnabled(true);
}
