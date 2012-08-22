///////////////////////////////////////////////////////////////////////////////
// textprinter.h
// -------------------
// Copyright (c) 20072008 David Johnson <david@usermode.org>
// Please see the header file for copyright and license information.
///////////////////////////////////////////////////////////////////////////////

#include "textprinter.h"

#include <QAbstractTextDocumentLayout>
#include <QDate>
#include <QFileDialog>
#include <QLocale>
#include <QPainter>
#include <QPrintDialog>
#include <QTextDocument>
#include <QTextFrame>
#include <QtGui>

#if (QT_VERSION >= QT_VERSION_CHECK(4, 4, 0))
#include <QPrintPreviewDialog>
#endif

static inline double mmToInches(double mm) { return mm * 0.039370147; }

///////////////////////////////////////////////////////////////////////////////
// TextPrinter()
///////////////////////////////////////////////////////////////////////////////
/// Constructs a TextPrinter object.
/// Any related dialogs will be displayed centered over the parent, if it is
/// a QWidget object.
///////////////////////////////////////////////////////////////////////////////

TextPrinter::TextPrinter(QObject *parent)
    : QObject(parent), parent_(0),
      printer_(new QPrinter(QPrinter::HighResolution)), tempdoc_(0),
      leftmargin_(15.0), rightmargin_(15.0), topmargin_(15.0),
      bottommargin_(15.0), spacing_(5.0),
      headersize_(0.0), headerrule_(0.5), headertext_(QString()),
      footersize_(0.0), footerrule_(0.5), footertext_(QString()),
      dateformat_()
{
    if (parent) parent_ = qobject_cast<QWidget*>(parent);

    printer_->setFullPage(true);
    printer_->setOrientation(QPrinter::Portrait);
    
    // for convenience, default to US_Letter for C/US/Canada
    // NOTE: bug in Qt, this value is not loaded by QPrintDialog
    switch (QLocale::system().country()) {
      case QLocale::AnyCountry:
      case QLocale::Canada:
      case QLocale::UnitedStates:
      case QLocale::UnitedStatesMinorOutlyingIslands:
          printer_->setPageSize(QPrinter::Letter); break;
      default:
          printer_->setPageSize(QPrinter::A4); break;
    }
}

///////////////////////////////////////////////////////////////////////////////
// ~TextPrinter()
///////////////////////////////////////////////////////////////////////////////
/// Destroys the TextPrinter object.
///////////////////////////////////////////////////////////////////////////////

TextPrinter::~TextPrinter()
{
    delete printer_;
}

///////////////////////////////////////////////////////////////////////////////
// pageSize()
///////////////////////////////////////////////////////////////////////////////
/// Return the page size. This is defined by the QPrinter::PageSize
/// enumeration.
///////////////////////////////////////////////////////////////////////////////

QPrinter::PageSize TextPrinter::pageSize() const
{
    return printer_->pageSize(); 
}

///////////////////////////////////////////////////////////////////////////////
// setPageSize()
///////////////////////////////////////////////////////////////////////////////
/// Set the page size. Size is defined by the QPrinter::PageSize enumeration.
/// By default, this is QPrinter::Letter in US and Canada locales, and
/// QPrinter::A4 in other locales.
///////////////////////////////////////////////////////////////////////////////

void TextPrinter::setPageSize(QPrinter::PageSize size)
{
    printer_->setPageSize(size);
}

///////////////////////////////////////////////////////////////////////////////
// orientation()
///////////////////////////////////////////////////////////////////////////////
/// Return the page orientation. This is defined by the QPrinterOrientation
/// enumeration.
///////////////////////////////////////////////////////////////////////////////

QPrinter::Orientation TextPrinter::orientation() const
{
    return printer_->orientation();
}

///////////////////////////////////////////////////////////////////////////////
// setOrientation()
///////////////////////////////////////////////////////////////////////////////
/// Set the page orientation. Orientation is defined by the
/// QPrinter::Orientation enumeration, and can be QPrinter::Portrait (the
/// default) or QPrinter::Landscape.
///////////////////////////////////////////////////////////////////////////////

void TextPrinter::setOrientation(QPrinter::Orientation orientation)
{
    printer_->setOrientation(orientation);
}

///////////////////////////////////////////////////////////////////////////////
// leftMargin()
///////////////////////////////////////////////////////////////////////////////
/// Return the left page margin width in millimeters.
///////////////////////////////////////////////////////////////////////////////

double TextPrinter::leftMargin() const
{
    return leftmargin_;
}

///////////////////////////////////////////////////////////////////////////////
// setLeftMargin()
///////////////////////////////////////////////////////////////////////////////
/// Set the left margin width in millimeters. The default value is 15mm.
///////////////////////////////////////////////////////////////////////////////

void TextPrinter::setLeftMargin(double margin)
{
    if ((margin > 0) && (margin < printer_->paperRect().width() / 2)) {
        leftmargin_ = margin;
    } else {
        leftmargin_ = 0;
    }
}

///////////////////////////////////////////////////////////////////////////////
// rightMargin()
///////////////////////////////////////////////////////////////////////////////
/// Return the right page margin width in millimeters.
///////////////////////////////////////////////////////////////////////////////

double TextPrinter::rightMargin() const
{
    return rightmargin_;
}

///////////////////////////////////////////////////////////////////////////////
// setRightMargin()
///////////////////////////////////////////////////////////////////////////////
/// Set the right margin width in millimeters. The default value is 15mm.
///////////////////////////////////////////////////////////////////////////////

void TextPrinter::setRightMargin(double margin)
{
    if ((margin > 0) && (margin < printer_->paperRect().width() / 2)) {
        rightmargin_ = margin;
    } else {
        rightmargin_ = 0;
    }
}

///////////////////////////////////////////////////////////////////////////////
// topMargin()
///////////////////////////////////////////////////////////////////////////////
/// Return the top page margin size in millimeters.
///////////////////////////////////////////////////////////////////////////////

double TextPrinter::topMargin() const
{
    return topmargin_;
}

///////////////////////////////////////////////////////////////////////////////
// setTopMargin()
///////////////////////////////////////////////////////////////////////////////
/// Set the top margin size in millimeters. The default value is 15mm.
///////////////////////////////////////////////////////////////////////////////

void TextPrinter::setTopMargin(double margin)
{
    if ((margin > 0) && (margin < printer_->paperRect().height() / 4)) {
        topmargin_ = margin;
    } else {
        topmargin_ = 0;
    }
}

///////////////////////////////////////////////////////////////////////////////
// bottomMargin()
///////////////////////////////////////////////////////////////////////////////
/// Return the bottom page margin size in millimeters.
///////////////////////////////////////////////////////////////////////////////

double TextPrinter::bottomMargin() const
{
    return bottommargin_;
}

///////////////////////////////////////////////////////////////////////////////
// setBottomMargin()
///////////////////////////////////////////////////////////////////////////////
/// Set the bottom margin size in millimeters. The default value is 15mm.
///////////////////////////////////////////////////////////////////////////////

void TextPrinter::setBottomMargin(double margin)
{
    if ((margin > 0) && (margin < printer_->paperRect().height() / 4)) {
        bottommargin_ = margin;
    } else {
        bottommargin_ = 0;
    }
}

///////////////////////////////////////////////////////////////////////////////
// setMargins()
///////////////////////////////////////////////////////////////////////////////
/// Set all margins to have the identical size. The default value is 15mm.
///////////////////////////////////////////////////////////////////////////////

void TextPrinter::setMargins(double margin)
{
    if ((margin > 0)
        && (margin < printer_->paperRect().height() / 2)
        && (margin < printer_->paperRect().width() / 2)) {
        leftmargin_ = rightmargin_ = topmargin_ = bottommargin_ = margin;
    } else {
        leftmargin_ = rightmargin_ = topmargin_ = bottommargin_ = 0;
    }
}

///////////////////////////////////////////////////////////////////////////////
// spacing()
///////////////////////////////////////////////////////////////////////////////
/// Return the spacing between the page content and the header and footer
/// blocks. This is defined in millimeters.
///////////////////////////////////////////////////////////////////////////////

double TextPrinter::spacing() const
{
    return spacing_;
}

///////////////////////////////////////////////////////////////////////////////
// setSpacing()
///////////////////////////////////////////////////////////////////////////////
/// Set the spacing between the page content and the header and footer blocks.
/// The default value is 5mm.
///////////////////////////////////////////////////////////////////////////////

void TextPrinter::setSpacing(double spacing)
{
    if ((spacing > 0) && (spacing <= printer_->paperRect().height() / 8)) {
        spacing_ = spacing;
    } else {
        spacing_ = 0;
    }
}

///////////////////////////////////////////////////////////////////////////////
// headerSize()
///////////////////////////////////////////////////////////////////////////////
/// Return the height of the header block  in millimeters.
///////////////////////////////////////////////////////////////////////////////

double TextPrinter::headerSize() const
{
    return headersize_;
}

///////////////////////////////////////////////////////////////////////////////
// setHeaderSize()
///////////////////////////////////////////////////////////////////////////////
/// Set the height of the header in millimeters. The default is zero (no
/// header).
///////////////////////////////////////////////////////////////////////////////

void TextPrinter::setHeaderSize(double size)
{
    if ((size > 0) && (size <= printer_->paperRect().height() / 8)) {
        headersize_ = size;
    } else {
        headersize_ = 0;
    }
}

///////////////////////////////////////////////////////////////////////////////
// headerRule()
///////////////////////////////////////////////////////////////////////////////
/// Return the size of the header rule in points. One point is 1/72 inch.
///////////////////////////////////////////////////////////////////////////////

double TextPrinter::headerRule() const
{
    return headerrule_;
}

///////////////////////////////////////////////////////////////////////////////
// setHeaderRule()
///////////////////////////////////////////////////////////////////////////////
/// Set the header rule size in points. By default, the header rule is one half
/// point (1/144 inch). To turn off the rule, set the rule size to 0. The rule
/// will be  drawn below the header area.
///////////////////////////////////////////////////////////////////////////////

void TextPrinter::setHeaderRule(double pointsize)
{
    headerrule_ = qMax(0.0, pointsize);
}

///////////////////////////////////////////////////////////////////////////////
// headerText()
///////////////////////////////////////////////////////////////////////////////
/// Return the text for the header.
///////////////////////////////////////////////////////////////////////////////

const QString &TextPrinter::headerText() const
{
    return headertext_;
}

///////////////////////////////////////////////////////////////////////////////
// setHeaderText()
///////////////////////////////////////////////////////////////////////////////
/// Set the text for the header. Rich text is supported. HTML tags may be used
/// to format the text and align elements. The following page variables may be
/// included in the text:
/// - \&page; - Insert current page number
/// - \&date; - Insert current date, using the format set with setPageFormat()
///////////////////////////////////////////////////////////////////////////////

void TextPrinter::setHeaderText(const QString &text)
{
    headertext_ = text;
}

///////////////////////////////////////////////////////////////////////////////
// footerSize()
///////////////////////////////////////////////////////////////////////////////
/// Return the height of the footer block in millimeters.
///////////////////////////////////////////////////////////////////////////////

double TextPrinter::footerSize() const
{
    return footersize_;
}

///////////////////////////////////////////////////////////////////////////////
// setFooterSize()
///////////////////////////////////////////////////////////////////////////////
/// Set the height of the footer in millimeters. The default is zero (no
/// header).
///////////////////////////////////////////////////////////////////////////////

void TextPrinter::setFooterSize(double size)
{
    if ((size > 0) && (size <= printer_->paperRect().height() / 8)) {
        footersize_ = size;
    } else {
        footersize_ = 0;
    }
}

///////////////////////////////////////////////////////////////////////////////
// footerRule()
///////////////////////////////////////////////////////////////////////////////
/// Return the size of the footer rule in points. One point is 1/72 inch.
///////////////////////////////////////////////////////////////////////////////

double TextPrinter::footerRule() const
{
    return footerrule_;
}

///////////////////////////////////////////////////////////////////////////////
// setFooterRule()
///////////////////////////////////////////////////////////////////////////////
/// Set the footer rule size in points. By default, the footer rule is one half
/// point (1/144 inch). To turn off the rule, set the rule size to 0. The rule
/// will be  drawn just above the footer area.
///////////////////////////////////////////////////////////////////////////////

void TextPrinter::setFooterRule(double pointsize)
{
    footerrule_ = qMax(0.0, pointsize);
}

///////////////////////////////////////////////////////////////////////////////
// footerText()
///////////////////////////////////////////////////////////////////////////////
/// Return the text for the footer.
///////////////////////////////////////////////////////////////////////////////

const QString &TextPrinter::footerText() const
{
    return footertext_;
}

///////////////////////////////////////////////////////////////////////////////
// setFooterText()
///////////////////////////////////////////////////////////////////////////////
/// Set the text for the footer. Rich text is supported. HTML tags may be used
/// to format the text and align elements. The following page variables may be
/// included in the text:
/// - \&page; - Insert current page number
/// - \&date; - Insert current date, using the format set with setPageFormat()
///////////////////////////////////////////////////////////////////////////////

void TextPrinter::setFooterText(const QString &text)
{
    footertext_ = text;
}

///////////////////////////////////////////////////////////////////////////////
// dateFormat()
///////////////////////////////////////////////////////////////////////////////
/// Return the currently set date format string.
///////////////////////////////////////////////////////////////////////////////

const QString &TextPrinter::dateFormat() const
{
    return dateformat_;
}

///////////////////////////////////////////////////////////////////////////////
// setDateFormat()
///////////////////////////////////////////////////////////////////////////////
/// Set the date format to be used for the \&date; page variable. The format
/// is the same as that used by QDate::toString(). If no format is set, the
/// format defaults to Qt::TextDate.
///////////////////////////////////////////////////////////////////////////////

void TextPrinter::setDateFormat(const QString &format)
{
    dateformat_ = format;
}

///////////////////////////////////////////////////////////////////////////////
// print()
///////////////////////////////////////////////////////////////////////////////
/// Print a document. A standard print dialog will be displayed. If a QPrinter
/// is not provided, a temporary printer object will be used. If the caption
/// parameter is not empty, it will be used as the title for the print
/// dialog.
///
/// \todo add overload taking html string
///////////////////////////////////////////////////////////////////////////////

void TextPrinter::print(const QTextDocument *document,
                        const QString &caption)
{
    if (!document) return;

    // setup printer
    printer_->setOutputFormat(QPrinter::NativeFormat);
    printer_->setOutputFileName(QString());

    // show print dialog
    QPrintDialog dialog(printer_, parent_);
    dialog.setWindowTitle(caption.isEmpty() ? "Print Document" : caption);
    if (dialog.exec() == QDialog::Rejected) return;

    // print it
    tempdoc_ = document->clone();
    print(printer_);

    delete tempdoc_;
    tempdoc_ = 0;
} 

///////////////////////////////////////////////////////////////////////////////
// exportPDF()
///////////////////////////////////////////////////////////////////////////////
/// Export the document in PDF format. If caption is not empty, it will be used
/// as the title for the dialog. If filename is empty, a standard file
/// selection dialog will be displayed.
///////////////////////////////////////////////////////////////////////////////

void TextPrinter::exportPdf(const QTextDocument *document,
                            const QString &caption,
                            const QString &filename)
{
    if (!document) return;

    // file save dialog
    QString dialogcaption = caption.isEmpty() ? "Export PDF" : caption;
    QString exportname;
    if (QFile::exists(filename)) {
        exportname = filename;
    } else {
        exportname = QFileDialog::getSaveFileName(parent_, dialogcaption,
                                                  filename, "*.pdf");
    }
    if (exportname.isEmpty()) return;
    if (QFileInfo(exportname).suffix().isEmpty())
        exportname.append(".pdf");

    // setup printer
    printer_->setOutputFormat(QPrinter::PdfFormat);
    printer_->setOutputFileName(exportname);

    // print it
    tempdoc_ = document->clone();
    print(printer_);

    delete tempdoc_;
    tempdoc_ = 0;
}

///////////////////////////////////////////////////////////////////////////////
// preview()
///////////////////////////////////////////////////////////////////////////////
/// Displays a print preview dialog. If caption is not empty, it will be used
/// as the title of the dialog.
///////////////////////////////////////////////////////////////////////////////

void TextPrinter::preview(const QTextDocument *document,
                          const QString &caption)
{

    QSize size = qApp->desktop()->availableGeometry().size();
    size.rheight() /= 1.1;
    size.rwidth()  /= 1.5;

    if (!document) return;

    QPrintPreviewDialog *dialog = new QPrintPreviewDialog(printer_, parent_);
    dialog->setWindowFlags(Qt::Window);
    dialog->resize(size);
    dialog->setWindowTitle(caption.isEmpty() ? tr("Aperçu Avant l'impression") : caption);

    connect(dialog, SIGNAL(paintRequested(QPrinter*)),
            this, SLOT(print(QPrinter*)));

    // preview it
    tempdoc_ = document->clone();
    dialog->exec();

    delete tempdoc_;
    tempdoc_ = 0;

    delete dialog;

}

///////////////////////////////////////////////////////////////////////////////
// private methods
///////////////////////////////////////////////////////////////////////////////

// paperRect() ////////////////////////////////////////////////////////////////
// Return the size of the paper, adjusted for DPI

QRectF TextPrinter::paperRect(QPaintDevice *device)
{
    // calculate size of paper
    QRectF rect = printer_->paperRect();
    // adjust for DPI
    rect.setWidth(rect.width() *
                  device->logicalDpiX() / printer_->logicalDpiX());
    rect.setHeight(rect.height() *
                  device->logicalDpiY() / printer_->logicalDpiY());

    return rect;
}

// contentRect() //////////////////////////////////////////////////////////////
// calculate the rect for the content block

QRectF TextPrinter::contentRect(QPaintDevice *device)
{
    // calculate size of content (paper - margins)
    QRectF rect = paperRect(device);

    rect.adjust(mmToInches(leftmargin_) * device->logicalDpiX(),
                mmToInches(topmargin_) * device->logicalDpiY(),
                -mmToInches(rightmargin_) * device->logicalDpiX(),
                -mmToInches(bottommargin_) * device->logicalDpiY());

    // header
    if (headersize_ > 0) {
        rect.adjust(0, mmToInches(headersize_) * device->logicalDpiY(), 0, 0);
        rect.adjust(0, mmToInches(spacing_) * device->logicalDpiY(), 0, 0);
    }
    // footer
    if (footersize_ > 0) {
        rect.adjust(0, 0, 0, -mmToInches(footersize_) * device->logicalDpiY());
        rect.adjust(0, 0, 0, -mmToInches(spacing_) * device->logicalDpiY());
    }

    return rect;
}

// headerRect() //////////////////////////////////////////////////////////////
// calculate the rect for the header block

QRectF TextPrinter::headerRect(QPaintDevice *device)
{
    QRectF rect = paperRect(device);
    rect.adjust(mmToInches(leftmargin_) * device->logicalDpiX(),
                mmToInches(topmargin_) * device->logicalDpiY(),
                -mmToInches(rightmargin_) * device->logicalDpiX(), 0);

    (headerrule_ / 144.0);

    rect.setBottom(rect.top() +
                   mmToInches(headersize_) * device->logicalDpiY());

    return rect;
};

// footerRect() ///////////////////////////////////////////////////////////////
// calculate the rect for the footer block

QRectF TextPrinter::footerRect(QPaintDevice *device)
{
    QRectF rect = paperRect(device);
    rect.adjust(mmToInches(leftmargin_) * device->logicalDpiX(), 0,
                -mmToInches(rightmargin_) * device->logicalDpiX(),
                -mmToInches(bottommargin_) * device->logicalDpiY());

    rect.setTop(rect.bottom() -
                mmToInches(footersize_) * device->logicalDpiY());

    return rect;
};

// print() ////////////////////////////////////////////////////////////////////
// Common printing routine. Print tempdoc_ to given printer device.

void TextPrinter::print(QPrinter *printer)
{
    if (!printer || !tempdoc_) return;

    tempdoc_->setUseDesignMetrics(true);
    tempdoc_->documentLayout()->setPaintDevice(printer);
    tempdoc_->setPageSize(contentRect(printer).size());
    // dump existing margin (if any)
    QTextFrameFormat fmt = tempdoc_->rootFrame()->frameFormat();
    fmt.setMargin(0);
    tempdoc_->rootFrame()->setFrameFormat(fmt);

    // to iterate through pages we have to worry about
    // copies, collation, page range, and print order

    // get num copies
    int doccopies;
    int pagecopies;
    if (printer->collateCopies()) {
        doccopies = 1;
        pagecopies = printer->numCopies();
    } else {
        doccopies = printer->numCopies();
        pagecopies = 1;
    }


    // get page range
    int firstpage = printer->fromPage();
    int lastpage = printer->toPage();
    if (firstpage == 0 && lastpage == 0) { // all pages
        firstpage = 1;
        lastpage = tempdoc_->pageCount();
    }

    // print order
    bool ascending = true;
    if (printer->pageOrder() == QPrinter::LastPageFirst) {
        int tmp = firstpage;
        firstpage = lastpage;
        lastpage = tmp;
        ascending = false;
    }

    // loop through and print pages
    QPainter painter(printer);
    painter.setRenderHints(QPainter::Antialiasing |
                           QPainter::TextAntialiasing |
                           QPainter::SmoothPixmapTransform, true);

    pageSum = lastpage;
    for (int dc=0; dc<doccopies; dc++) {
        int pagenum = firstpage;
        while (true) {
            for (int pc=0; pc<pagecopies; pc++) {
                if (printer->printerState() == QPrinter::Aborted ||
                    printer->printerState() == QPrinter::Error) {
                    return;
                }
                // print page
                paintPage(&painter, tempdoc_, pagenum);
                if (pc < pagecopies-1) printer->newPage();
            }
            if (pagenum == lastpage) break;
            if (ascending) pagenum++;
            else           pagenum--;
            printer->newPage();
        }

        if (dc < doccopies-1) printer->newPage();
    }
}

// paintPage() ////////////////////////////////////////////////////////////////
// paint an individual page of the document to the painter

void TextPrinter::paintPage(QPainter *painter,
                            QTextDocument *document,
                            int pagenum)
{
    QRectF rect;
    double onepoint = painter->device()->logicalDpiY() / 72.0;

    // header
    if (headersize_ > 0) {
        rect = headerRect(painter->device());
        if (headerrule_ > 0.0) {
            painter->save();
            // allow space between rule and header
      //     painter->translate(0, onepoint + (headerrule_ * onepoint / 2.0));
       //     painter->setPen(QPen(QColor("#fdbb2f"), headerrule_ * onepoint));
          //  painter->drawLine(rect.bottomLeft(), rect.bottomRight());

            // painter->drawLines(new QLineF(rect.bottomLeft(), rect.bottomRight()), 10);
           // painter->drawRect(QRect(rect.left(), rect.top(), rect.width(), rect.height()/2));
            painter->restore();
        }

        // replace page variables
        QString header = headertext_;
        header.replace("&page;", QString::number(pagenum));
        if (dateformat_.isEmpty()) {
            header.replace("&date;", QDate::currentDate().toString());
        } else {
            header.replace("&date;", QDate::currentDate().toString(dateformat_));
        }

        painter->save();
        painter->translate(rect.left(), rect.top());
        QRectF clip(0, 0, rect.width(), rect.height());
        QTextDocument doc;
        doc.setUseDesignMetrics(true);
        doc.setHtml(header);
        doc.documentLayout()->setPaintDevice(painter->device());
        doc.setPageSize(rect.size());

        // align text to bottom
        double newtop = clip.bottom() - doc.size().height();
        clip.setHeight(doc.size().height());
        painter->translate(0, newtop);

        doc.drawContents(painter, clip);
        painter->restore();
    }

    // footer
    if (footersize_ > 0) {
        rect = footerRect(painter->device());
        if (footerrule_ > 0.0) {
            painter->save();
            // allow space between rule and footer
            painter->translate(0, -onepoint + (-footerrule_ * onepoint / 2.0));
            painter->setPen(QPen(Qt::black, footerrule_ * onepoint));
            painter->drawLine(rect.topLeft(), rect.topRight());
            painter->restore();
        }

        // replace page variables
        QString footer = footertext_;
        footer.replace("&page;", QString::number(pagenum) + "/" + QString::number(pageSum));
        if (dateformat_.isEmpty()) {
            footer.replace("&date;", QDate::currentDate().toString());
        } else {
            footer.replace("&date;", QDate::currentDate().toString(dateformat_));
        }

        painter->save();
        painter->translate(rect.left(), rect.top());
        QRectF clip(0, 0, rect.width(), rect.height());
        QTextDocument doc;
        doc.setUseDesignMetrics(true);
        doc.setHtml(footer);
        doc.documentLayout()->setPaintDevice(painter->device());
        doc.setPageSize(rect.size());
        doc.drawContents(painter, clip);
        painter->restore();
    }

    // content
    painter->save();

    rect = contentRect(painter->device());
    painter->translate(rect.left(), rect.top() - (pagenum-1) * rect.height());
    QRectF clip(0, (pagenum-1) * rect.height(), rect.width(), rect.height());

    document->drawContents(painter, clip);

    painter->restore();
}
