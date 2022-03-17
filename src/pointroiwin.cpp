#include "pointroiwin.h"
#include "ui_pointroiwin.h"

PointROIWin::PointROIWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PointROIWin)
{
    ui->setupUi(this);
    QString QXmax= QString::number(this->m_Xmax);
    QString QXmin= QString::number(this->m_Xmin);
    QString QYmax= QString::number(this->m_Ymax);
    QString QYmin= QString::number(this->m_Ymin);
    QString QZmax= QString::number(this->m_Zmax);
    QString QZmin= QString::number(this->m_Zmin);
    ui->XmaxlineEdit->setText(QXmax);
    ui->YmaxlineEdit->setText(QYmax);
    ui->ZmaxlineEdit->setText(QXmax);
    ui->XminlineEdit->setText(QXmin);
    ui->YminlineEdit->setText(QYmin);
    ui->ZminlineEdit->setText(QZmin);
    connect(ui->OKButton,SIGNAL(clicked()),this,SLOT(OKButtonPressed()));
    connect(ui->OKButton,&QPushButton::clicked,this,&PointROIWin::sendslot);
    connect(ui->CancelButton,&QPushButton::released,this,&PointROIWin::close);

}
void PointROIWin::sendslot()
{
    emit pointroisignal();
}
void PointROIWin::OKButtonPressed()
{
    this->m_Xmax = ui->XmaxlineEdit->text().toFloat();
    this->m_Ymax = ui->YmaxlineEdit->text().toFloat();
    this->m_Zmax = ui->ZmaxlineEdit->text().toFloat();
    this->m_Xmin = ui->XminlineEdit->text().toFloat();
    this->m_Ymin = ui->YminlineEdit->text().toFloat();
    this->m_Zmin = ui->ZminlineEdit->text().toFloat();
    this->hide();
}
MyCloud PointROIWin::setroi(MyCloud &mycloud)
{
    PointProcess pp;
    pp.MaxValues(this->m_Xmax);
    pp.MinValues(this->m_Xmin);
    pp.limitX(mycloud.cloud);
    pp.MaxValues(this->m_Ymax);
    pp.MinValues(this->m_Ymin);
    pp.limitY(mycloud.cloud);
    pp.MaxValues(this->m_Zmax);
    pp.MinValues(this->m_Zmin);
    pp.limitZ(mycloud.cloud);
    return mycloud;

}
PointROIWin::~PointROIWin()
{
    delete ui;
}
