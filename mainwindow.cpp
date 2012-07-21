#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QHeaderView *header = ui->tableWidget->horizontalHeader();
    header->setResizeMode(QHeaderView::Stretch);

    ui->tableWidget->setAlternatingRowColors(true);

    makeDBConnection();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::makeDBConnection()
{
    QString path = "data/univlexique.db";
    if(QFile::exists(path))
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName(path);
        if(!db.open())
        {
            QMessageBox::critical(this, tr("Error"), tr("Could not open database!"));
            return;
        }
    }
}

void MainWindow::on_actionExit_triggered()
{
    exit(0);
}

void MainWindow::clearTable()
{
    ui->tableWidget->clearContents();
    for(int i = ui->tableWidget->rowCount()-1; i >= 0; i--)
        ui->tableWidget->removeRow(i);
}

void MainWindow::on_searchLineEdit_textChanged()
{
    on_searchButton_clicked();
}

void MainWindow::on_searchButton_clicked()
{
    clearTable();

    QString arg = ui->searchLineEdit->text().trimmed();

    if(arg.isEmpty()) return;

    QString fatha = QString::fromUtf8("َ");
    QString damma = QString::fromUtf8("ُ");
    QString fathatin = QString::fromUtf8("ً");
    QString dammatin = QString::fromUtf8("ٌ");
    QString kasra = QString::fromUtf8("ِ");
    QString kasratin = QString::fromUtf8("ٍ");
    QString sukun = QString::fromUtf8("ْ");

    // remove tashkeel
    arg = arg.remove(fatha);
    arg.remove(damma);
    arg.remove(fatha);
    arg.remove(fathatin);
    arg.remove(dammatin);
    arg.remove(kasra);
    arg.remove(kasratin);
    arg.remove(sukun);

    QSqlQuery query(QString("SELECT ARABIC, FRENCH FROM univ "
                    "WHERE ARABIC LIKE \"%%1%\" OR FRENCH LIKE \"%%1%\" COLLATE NOCASE").arg(arg));
    int i = 0;
    while(query.next())
    {

        ui->tableWidget->insertRow(i);

        ui->tableWidget->setItem(i, 0, new QTableWidgetItem());
        ui->tableWidget->item(i, 0)->setText(query.value(0).toString());

        ui->tableWidget->setItem(i, 1, new QTableWidgetItem());
        ui->tableWidget->item(i, 1)->setText(query.value(1).toString());

        i++;
    }

    query.clear();
}


void MainWindow::on_actionZoom_in_triggered()
{
    QFont font = ui->tableWidget->font();
    QFont headerFont = ui->tableWidget->horizontalHeader()->font();
    font.setPointSize(font.pointSize() + 1);
    font.setPointSize(headerFont.pointSize() + 1);

    ui->tableWidget->setFont(font);
    for (int i = 0; i < ui->tableWidget->rowCount(); i++)
        ui->tableWidget->setRowHeight(i, ui->tableWidget->rowHeight(i) + 1);
    ui->tableWidget->horizontalHeader()->setFont(headerFont);
}


void MainWindow::on_actionZoom_out_triggered()
{
    QFont font = ui->tableWidget->font();
    QFont headerFont = ui->tableWidget->horizontalHeader()->font();
    font.setPointSize(font.pointSize() - 1);
    font.setPointSize(headerFont.pointSize() - 1);

    ui->tableWidget->setFont(font);

    ui->tableWidget->setFont(font);
    for (int i = 0; i < ui->tableWidget->rowCount(); i++)
        ui->tableWidget->setRowHeight(i, ui->tableWidget->rowHeight(i) - 1);

    ui->tableWidget->horizontalHeader()->setFont(headerFont);
}

void MainWindow::on_actionExport_triggered()
{
    ui->tableWidget->selectedItems();
}

void MainWindow::on_actionCheck_for_update_triggered()
{
    Updates up;
    up.exec();
}
