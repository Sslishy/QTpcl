#include "downsimplewin.h"
#include "ui_downsimplewin.h"
#include"PointProcess.h"
DownSimpleWin::DownSimpleWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DownSimpleWin)
{
    ui->setupUi(this);
    QString QLeftsize = QString::number(this->m_leftsize);
    ui->lineEdit->setText(QLeftsize);
    connect(ui->OKButton,SIGNAL(clicked()),this,SLOT(OKButtonPressed()));
    connect(ui->OKButton,&QPushButton::clicked,this,&DownSimpleWin::sendslot);
    connect(ui->CancelButton,&QPushButton::released,this,&DownSimpleWin::close);

}

DownSimpleWin::~DownSimpleWin()
{
    delete ui;
}
void DownSimpleWin::sendslot()
{
    emit downsimplesignal();
}

MyCloud DownSimpleWin::DownSimple(MyCloud &mycloud)
{
    PointProcess pp;
    pp.SetLeafSize(this->m_leftsize);
    pp.DownSimple(mycloud.cloud);
    return mycloud;
}
void DownSimpleWin::OKButtonPressed()
{
    this->m_leftsize = ui->lineEdit->text().toFloat();
    this->hide();
}
