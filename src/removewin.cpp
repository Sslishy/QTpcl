#include "removewin.h"
#include"PointProcess.h"
#include "ui_removewin.h"
#include<QDebug>
using namespace std;
RemoveWin::RemoveWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveWin)
{

    ui->setupUi(this);
    QString QK= QString::number(this->K);
    QString QDistance= QString::number(this->Distance);
    ui->lineEdit->setText(QK);
    ui->lineEdit_2->setText(QDistance);

    connect(ui->OKButton,SIGNAL(clicked()),this,SLOT(OKButtonPressed()));
    connect(ui->OKButton,&QPushButton::clicked,this,&RemoveWin::sendslot);
    connect(ui->CancelButton,&QPushButton::released,this,&RemoveWin::close);
}

RemoveWin::~RemoveWin()
{
    delete ui;
}
MyCloud RemoveWin::Removepointcloud(MyCloud &mycloud)
{   
    PointProcess pp;
    pp.SetK(this->K);
    pp.SetStddevMulThresh(this->Distance);
    pp.Removepoint(mycloud.cloud);
    return mycloud;
}
void RemoveWin::OKButtonPressed()
{
    this->K = ui->lineEdit->text().toInt();
    this->Distance = ui->lineEdit_2->text().toInt();

    this->hide();


}
void RemoveWin::sendslot()
{
    emit removesignal();
}
