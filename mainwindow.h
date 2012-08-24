#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtGui>
#include "updates.h"
#include "printing/textprinter.h"
#include "about.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    void changeEvent(QEvent *event);
    void contextMenuEvent(QContextMenuEvent *event);
    ~MainWindow();
    
private slots:
    void on_actionExit_triggered();

    void on_searchLineEdit_textChanged();

    void on_searchButton_clicked();

    void on_actionZoom_in_triggered();

    void on_actionZoom_out_triggered();

    void on_actionCheck_for_update_triggered();

    void on_actionFonts_triggered();

    void on_actionSuggest_New_triggered();

    void setButtonContentToSearch(QAbstractButton *button);

    void on_showAlphabetButton_clicked();

    void on_actionCopy_triggered();

    void on_actionPrint_triggered();

    void on_actionExport_To_HTML_triggered();

    void on_FRButton_clicked();

    void on_ArButton_clicked();

    void on_actionPrintPreview_triggered();

    void on_actionAbout_the_program_triggered();

    void copyCell();
    void copyRow();
    void copyTable();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QButtonGroup buttonGroup;
    bool alphabetIsShown;
    bool alphabetQuery;

    void initAlphabet();
    void clearTable();
    void makeDBConnection();

    // printing related
    QTextDocument *document;
    TextPrinter *textPrinter;
    QString generateHeader();
    void generateBody();
    QString generateFooter();

    QTranslator     m_translator;   /**< contains the translations for this application */
    QTranslator     m_translatorQt; /**< contains the translations for qt */
    QString         m_currLang;     /**< contains the currently loaded language */
    QString         m_langPath;     /**< Path of language files. This is always fixed to /languages. */


    /** loads a language by the given language shortcut (e.g. de, en, ...)
      */
    void loadLanguage(const QString& rLanguage);

    void switchTranslator(QTranslator& translator, const QString& filename);

};

#endif // MAINWINDOW_H
