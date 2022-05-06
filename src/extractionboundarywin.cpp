#include "extractionboundarywin.h"
#include "ui_extractionboundarywin.h"

ExtractionBoundaryWin::ExtractionBoundaryWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExtractionBoundaryWin)
{
    ui->setupUi(this);
}

ExtractionBoundaryWin::~ExtractionBoundaryWin()
{
    delete ui;
}
