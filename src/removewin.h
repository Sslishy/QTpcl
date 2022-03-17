#ifndef REMOVEWIN_H
#define REMOVEWIN_H

#include <QDialog>
#include<QPushButton>
#include"MyCloud.h"
#include <pcl/point_cloud.h>

namespace Ui {
class RemoveWin;
}

class RemoveWin : public QDialog
{
    Q_OBJECT

public:
    explicit RemoveWin(QWidget *parent = nullptr);
    ~RemoveWin();
    void sendslot();
    MyCloud Removepointcloud(MyCloud &mycloud);

private slots:
public slots:
    void OKButtonPressed();

private:
    Ui::RemoveWin *ui;
    int K = 20;
    float Distance = 1;
signals:
    void removesignal();
};

#endif // REMOVEWIN_H
