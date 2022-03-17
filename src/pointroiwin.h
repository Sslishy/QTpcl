#ifndef POINTROIWIN_H
#define POINTROIWIN_H
#include"PointProcess.h"
#include"MyCloud.h"
#include <QDialog>
#include<QPushButton>
namespace Ui {
class PointROIWin;
}

class PointROIWin : public QDialog
{
    Q_OBJECT

public:
    explicit PointROIWin(QWidget *parent = nullptr);
    ~PointROIWin();
public slots:
    void sendslot();
    void OKButtonPressed();
    MyCloud setroi(MyCloud &mycloud);
private:
    Ui::PointROIWin *ui;
    float m_Xmax = 9999.0;
    float m_Xmin = -9999.0;
    float m_Ymax = 9999.0;
    float m_Ymin = -9999.0;
    float m_Zmax = 9999.0;
    float m_Zmin = -9999.0;
signals:
    void pointroisignal();
};

#endif // POINTROIWIN_H
