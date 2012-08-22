///////////////////////////////////////////////////////////////////////////////
// textprinter.h
// -------------------
// Copyright (c) 2007 David Johnson <david@usermode.org>
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
///////////////////////////////////////////////////////////////////////////////

#ifndef TEXTPRINTER_H
#define TEXTPRINTER_H

#include <QObject>
#include <QPrinter>

class QTextDocument;
class QWidget;

///////////////////////////////////////////////////////////////////////////////
/// \class TextPrinter
/// \version 0.3
///
/// TextPrinter is a printing utility class. It provides methods to print,
/// preview, and export to PDF. The page format, including header and footers,
/// can be defined. The content to be printed is provided as a QTextDocument
/// object.
///////////////////////////////////////////////////////////////////////////////

class TextPrinter : public QObject
{
    Q_OBJECT
public:
    /// Default constructor
    explicit TextPrinter(QObject *parent=0);
    /// Destructor
    ~TextPrinter();

    /// Print the document
    void print(const QTextDocument *document,
               const QString &caption=QString());
    /// Export the document to PDF
    void exportPdf(const QTextDocument *document,
                   const QString &caption=QString(),
                   const QString &filename=QString());
    /// Display the document in a preview dialog
    void preview(const QTextDocument *document,
                 const QString &caption=QString());

    /// Get page size
    QPrinter::PageSize pageSize() const;
    /// Set page size
    void setPageSize(QPrinter::PageSize size);
    /// Get page orientation
    QPrinter::Orientation orientation() const;
    /// Set page orientation
    void setOrientation(QPrinter::Orientation orientation);

    /// Get left margin width
    double leftMargin() const;
    /// Set left margin width
    void setLeftMargin(double margin);
    /// Get right margin width
    double rightMargin() const;
    /// Set right margin width
    void setRightMargin(double margin);
    /// Get top margin width
    double topMargin() const;
    /// Set top margin width
    void setTopMargin(double margin);
    /// Get bottom margin width
    double bottomMargin() const;
    /// Set bottom margin width
    void setBottomMargin(double margin);
    /// Set all margins
    void setMargins(double margin);

    /// Get spacing between content and header and footer
    double spacing() const;
    /// Set spacing between content and header and footer
    void setSpacing(double spacing);

    /// Get header size
    double headerSize() const;
    /// Set header size
    void setHeaderSize(double size);
    /// Set header rule size
    double headerRule() const;
    /// Get header rule size
    void setHeaderRule(double pointsize);
    /// Get header text
    const QString &headerText() const;
    /// Set header text
    void setHeaderText(const QString &text);

    /// Get footer size
    double footerSize() const;
    /// Set footer size
    void setFooterSize(double size);
    /// Get footer rule size
    double footerRule() const;
    /// Set footer rule size
    void setFooterRule(double pointsize);
    /// Get footer text
    const QString &footerText() const;
    /// Set footer text
    void setFooterText(const QString &text);

    /// Get date format
    const QString &dateFormat() const;
    /// Set date format
    void setDateFormat(const QString &format);

private:
    // not copyable
    TextPrinter(const TextPrinter&);
    TextPrinter &operator=(const TextPrinter&);

    // return paper rect
    QRectF paperRect(QPaintDevice *device);
    // return printable rects
    QRectF contentRect(QPaintDevice *device);
    QRectF headerRect(QPaintDevice *device);
    QRectF footerRect(QPaintDevice *device);

    // paint specific page
    void paintPage(QPainter *painter,
                   QTextDocument *document,
                   int pagenum);
private slots:
    // common print routine
    void print(QPrinter *printer);

private:
    QWidget *parent_;
    QPrinter *printer_;

    QTextDocument *tempdoc_;

    double leftmargin_;
    double rightmargin_;
    double topmargin_;
    double bottommargin_;
    double spacing_;

    double headersize_;
    double headerrule_;
    QString headertext_;
    double footersize_;
    double footerrule_;
    QString footertext_;

    QString dateformat_;

    int pageSum;
};

#endif // TEXTPRINTER_H
