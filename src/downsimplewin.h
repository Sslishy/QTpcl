#ifndef DOWNSIMPLEWIN_H
#define DOWNSIMPLEWIN_H
#include"MyCloud.h"
#include<QPushButton>
#include <QDialog>

namespace Ui {
class DownSimpleWin;
}

class DownSimpleWin : public QDialog
{
    Q_OBJECT

public:
    explicit DownSimpleWin(QWidget *parent = nullptr);
    ~DownSimpleWin();
private:
    Ui::DownSimpleWin *ui;
    float m_leftsize = 0.0;
public slots:
    void sendslot();
    void OKButtonPressed();
    MyCloud DownSimple(MyCloud &mycloud);
signals:
    void downsimplesignal();
};

#endif // DOWNSIMPLEWIN_H
