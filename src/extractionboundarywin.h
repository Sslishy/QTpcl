#ifndef EXTRACTIONBOUNDARYWIN_H
#define EXTRACTIONBOUNDARYWIN_H

#include <QDialog>

namespace Ui {
class ExtractionBoundaryWin;
}

class ExtractionBoundaryWin : public QDialog
{
    Q_OBJECT

public:
    explicit ExtractionBoundaryWin(QWidget *parent = nullptr);
    ~ExtractionBoundaryWin();

private:
    Ui::ExtractionBoundaryWin *ui;
};

#endif // EXTRACTIONBOUNDARYWIN_H
