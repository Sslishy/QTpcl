/********************************************************************************
** Form generated from reading UI file 'CloudViewer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOUDVIEWER_H
#define UI_CLOUDVIEWER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_CloudViewerClass
{
public:
    QAction *openAction;
    QAction *saveAction;
    QAction *saveasAction;
    QAction *cubeAction;
    QAction *helpAction;
    QAction *aboutAction;
    QAction *changeAction;
    QAction *exitAction;
    QAction *pointcolorAction;
    QAction *bgcolorAction;
    QAction *mainviewAction;
    QAction *leftviewAction;
    QAction *topviewAction;
    QAction *dataAction;
    QAction *propertyAction;
    QAction *consoleAction;
    QAction *RGBAction;
    QAction *clearAction;
    QAction *addAction;
    QAction *sphereAction;
    QAction *cylinderAction;
    QAction *meshsurfaceAction;
    QAction *wireframeAction;
    QAction *windowsThemeAction;
    QAction *darculaThemeAction;
    QAction *englishAction;
    QAction *chineseAction;
    QAction *saveBinaryAction;
    QAction *actionBilateralFilter;
    QAction *actionRotate90;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_5;
    QVTKWidget *screen;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuGenerate;
    QMenu *menuBasic_shapes;
    QMenu *menuAbout;
    QMenu *menuOption;
    QMenu *themeAction;
    QMenu *langAction;
    QMenu *menuView;
    QMenu *menuAngle_view;
    QMenu *menuProcess;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *RGBDock;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *cooCbx;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_1;
    QLCDNumber *rLCD;
    QSlider *rSlider;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLCDNumber *gLCD;
    QSlider *gSlider;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLCDNumber *bLCD;
    QSlider *bSlider;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLCDNumber *sizeLCD;
    QSlider *pSlider;
    QPushButton *colorBtn;
    QCheckBox *bgcCbx;
    QDockWidget *dataDock;
    QWidget *dockWidgetContents_5;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *dataTree;
    QDockWidget *propertyDock;
    QWidget *dockWidgetContents_6;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *propertyTable;
    QDockWidget *consoleDock;
    QWidget *dockWidgetContents_7;
    QVBoxLayout *verticalLayout_5;
    QTableWidget *consoleTable;

    void setupUi(QMainWindow *CloudViewerClass)
    {
        if (CloudViewerClass->objectName().isEmpty())
            CloudViewerClass->setObjectName(QString::fromUtf8("CloudViewerClass"));
        CloudViewerClass->resize(1041, 650);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(85);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CloudViewerClass->sizePolicy().hasHeightForWidth());
        CloudViewerClass->setSizePolicy(sizePolicy);
        CloudViewerClass->setMinimumSize(QSize(900, 650));
        CloudViewerClass->setMaximumSize(QSize(16777215, 16777215));
        CloudViewerClass->setStyleSheet(QString::fromUtf8(""));
        CloudViewerClass->setAnimated(true);
        CloudViewerClass->setTabShape(QTabWidget::Rounded);
        CloudViewerClass->setDockNestingEnabled(false);
        openAction = new QAction(CloudViewerClass);
        openAction->setObjectName(QString::fromUtf8("openAction"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Resources/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        openAction->setIcon(icon);
        saveAction = new QAction(CloudViewerClass);
        saveAction->setObjectName(QString::fromUtf8("saveAction"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Resources/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveAction->setIcon(icon1);
        saveasAction = new QAction(CloudViewerClass);
        saveasAction->setObjectName(QString::fromUtf8("saveasAction"));
        cubeAction = new QAction(CloudViewerClass);
        cubeAction->setObjectName(QString::fromUtf8("cubeAction"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Resources/images/cube.png"), QSize(), QIcon::Normal, QIcon::Off);
        cubeAction->setIcon(icon2);
        helpAction = new QAction(CloudViewerClass);
        helpAction->setObjectName(QString::fromUtf8("helpAction"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Resources/images/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        helpAction->setIcon(icon3);
        aboutAction = new QAction(CloudViewerClass);
        aboutAction->setObjectName(QString::fromUtf8("aboutAction"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Resources/images/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        aboutAction->setIcon(icon4);
        changeAction = new QAction(CloudViewerClass);
        changeAction->setObjectName(QString::fromUtf8("changeAction"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Resources/images/change.png"), QSize(), QIcon::Normal, QIcon::Off);
        changeAction->setIcon(icon5);
        exitAction = new QAction(CloudViewerClass);
        exitAction->setObjectName(QString::fromUtf8("exitAction"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Resources/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        exitAction->setIcon(icon6);
        pointcolorAction = new QAction(CloudViewerClass);
        pointcolorAction->setObjectName(QString::fromUtf8("pointcolorAction"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Resources/images/pointcolor.png"), QSize(), QIcon::Normal, QIcon::Off);
        pointcolorAction->setIcon(icon7);
        bgcolorAction = new QAction(CloudViewerClass);
        bgcolorAction->setObjectName(QString::fromUtf8("bgcolorAction"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/Resources/images/bgcolor.png"), QSize(), QIcon::Normal, QIcon::Off);
        bgcolorAction->setIcon(icon8);
        mainviewAction = new QAction(CloudViewerClass);
        mainviewAction->setObjectName(QString::fromUtf8("mainviewAction"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/Resources/images/zhengshi.png"), QSize(), QIcon::Normal, QIcon::Off);
        mainviewAction->setIcon(icon9);
        leftviewAction = new QAction(CloudViewerClass);
        leftviewAction->setObjectName(QString::fromUtf8("leftviewAction"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/Resources/images/zuoshi.png"), QSize(), QIcon::Normal, QIcon::Off);
        leftviewAction->setIcon(icon10);
        topviewAction = new QAction(CloudViewerClass);
        topviewAction->setObjectName(QString::fromUtf8("topviewAction"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/Resources/images/fushi.png"), QSize(), QIcon::Normal, QIcon::Off);
        topviewAction->setIcon(icon11);
        dataAction = new QAction(CloudViewerClass);
        dataAction->setObjectName(QString::fromUtf8("dataAction"));
        dataAction->setCheckable(true);
        dataAction->setChecked(true);
        propertyAction = new QAction(CloudViewerClass);
        propertyAction->setObjectName(QString::fromUtf8("propertyAction"));
        propertyAction->setCheckable(true);
        propertyAction->setChecked(true);
        consoleAction = new QAction(CloudViewerClass);
        consoleAction->setObjectName(QString::fromUtf8("consoleAction"));
        consoleAction->setCheckable(true);
        consoleAction->setChecked(true);
        RGBAction = new QAction(CloudViewerClass);
        RGBAction->setObjectName(QString::fromUtf8("RGBAction"));
        RGBAction->setCheckable(true);
        RGBAction->setChecked(true);
        clearAction = new QAction(CloudViewerClass);
        clearAction->setObjectName(QString::fromUtf8("clearAction"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/Resources/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clearAction->setIcon(icon12);
        addAction = new QAction(CloudViewerClass);
        addAction->setObjectName(QString::fromUtf8("addAction"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/Resources/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addAction->setIcon(icon13);
        sphereAction = new QAction(CloudViewerClass);
        sphereAction->setObjectName(QString::fromUtf8("sphereAction"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/Resources/images/sphere.png"), QSize(), QIcon::Normal, QIcon::Off);
        sphereAction->setIcon(icon14);
        cylinderAction = new QAction(CloudViewerClass);
        cylinderAction->setObjectName(QString::fromUtf8("cylinderAction"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/Resources/images/cylinder.png"), QSize(), QIcon::Normal, QIcon::Off);
        cylinderAction->setIcon(icon15);
        meshsurfaceAction = new QAction(CloudViewerClass);
        meshsurfaceAction->setObjectName(QString::fromUtf8("meshsurfaceAction"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/Resources/images/mesh.png"), QSize(), QIcon::Normal, QIcon::Off);
        meshsurfaceAction->setIcon(icon16);
        wireframeAction = new QAction(CloudViewerClass);
        wireframeAction->setObjectName(QString::fromUtf8("wireframeAction"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/Resources/images/frame.png"), QSize(), QIcon::Normal, QIcon::Off);
        wireframeAction->setIcon(icon17);
        windowsThemeAction = new QAction(CloudViewerClass);
        windowsThemeAction->setObjectName(QString::fromUtf8("windowsThemeAction"));
        darculaThemeAction = new QAction(CloudViewerClass);
        darculaThemeAction->setObjectName(QString::fromUtf8("darculaThemeAction"));
        englishAction = new QAction(CloudViewerClass);
        englishAction->setObjectName(QString::fromUtf8("englishAction"));
        chineseAction = new QAction(CloudViewerClass);
        chineseAction->setObjectName(QString::fromUtf8("chineseAction"));
        saveBinaryAction = new QAction(CloudViewerClass);
        saveBinaryAction->setObjectName(QString::fromUtf8("saveBinaryAction"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/Resources/images/saveBinary.png"), QSize(), QIcon::Normal, QIcon::Off);
        saveBinaryAction->setIcon(icon18);
        actionBilateralFilter = new QAction(CloudViewerClass);
        actionBilateralFilter->setObjectName(QString::fromUtf8("actionBilateralFilter"));
        actionRotate90 = new QAction(CloudViewerClass);
        actionRotate90->setObjectName(QString::fromUtf8("actionRotate90"));
        centralWidget = new QWidget(CloudViewerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        horizontalLayout_5 = new QHBoxLayout(centralWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        screen = new QVTKWidget(centralWidget);
        screen->setObjectName(QString::fromUtf8("screen"));
        screen->setMinimumSize(QSize(600, 400));

        horizontalLayout_5->addWidget(screen);

        CloudViewerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CloudViewerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1041, 28));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        menuBar->setFont(font);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuGenerate = new QMenu(menuBar);
        menuGenerate->setObjectName(QString::fromUtf8("menuGenerate"));
        menuBasic_shapes = new QMenu(menuGenerate);
        menuBasic_shapes->setObjectName(QString::fromUtf8("menuBasic_shapes"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/Resources/images/shape.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuBasic_shapes->setIcon(icon19);
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuOption = new QMenu(menuBar);
        menuOption->setObjectName(QString::fromUtf8("menuOption"));
        themeAction = new QMenu(menuOption);
        themeAction->setObjectName(QString::fromUtf8("themeAction"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/Resources/images/theme.png"), QSize(), QIcon::Normal, QIcon::Off);
        themeAction->setIcon(icon20);
        langAction = new QMenu(menuOption);
        langAction->setObjectName(QString::fromUtf8("langAction"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/Resources/images/language.png"), QSize(), QIcon::Normal, QIcon::Off);
        langAction->setIcon(icon21);
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuAngle_view = new QMenu(menuView);
        menuAngle_view->setObjectName(QString::fromUtf8("menuAngle_view"));
        menuProcess = new QMenu(menuBar);
        menuProcess->setObjectName(QString::fromUtf8("menuProcess"));
        CloudViewerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CloudViewerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CloudViewerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CloudViewerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CloudViewerClass->setStatusBar(statusBar);
        RGBDock = new QDockWidget(CloudViewerClass);
        RGBDock->setObjectName(QString::fromUtf8("RGBDock"));
        RGBDock->setMinimumSize(QSize(245, 400));
        RGBDock->setMaximumSize(QSize(300, 524287));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents_4);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        cooCbx = new QCheckBox(dockWidgetContents_4);
        cooCbx->setObjectName(QString::fromUtf8("cooCbx"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        cooCbx->setFont(font1);

        verticalLayout_2->addWidget(cooCbx);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_1 = new QLabel(dockWidgetContents_4);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_1->sizePolicy().hasHeightForWidth());
        label_1->setSizePolicy(sizePolicy2);
        label_1->setFont(font1);

        horizontalLayout->addWidget(label_1);

        rLCD = new QLCDNumber(dockWidgetContents_4);
        rLCD->setObjectName(QString::fromUtf8("rLCD"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(rLCD->sizePolicy().hasHeightForWidth());
        rLCD->setSizePolicy(sizePolicy3);
        rLCD->setAutoFillBackground(false);
        rLCD->setInputMethodHints(Qt::ImhNone);
        rLCD->setFrameShape(QFrame::Panel);
        rLCD->setFrameShadow(QFrame::Raised);
        rLCD->setLineWidth(1);
        rLCD->setSmallDecimalPoint(false);
        rLCD->setDigitCount(3);
        rLCD->setMode(QLCDNumber::Dec);
        rLCD->setProperty("value", QVariant(255.000000000000000));
        rLCD->setProperty("intValue", QVariant(255));

        horizontalLayout->addWidget(rLCD);


        verticalLayout->addLayout(horizontalLayout);

        rSlider = new QSlider(dockWidgetContents_4);
        rSlider->setObjectName(QString::fromUtf8("rSlider"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(rSlider->sizePolicy().hasHeightForWidth());
        rSlider->setSizePolicy(sizePolicy4);
        rSlider->setMinimumSize(QSize(132, 0));
        rSlider->setMaximum(255);
        rSlider->setSliderPosition(255);
        rSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(rSlider);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(dockWidgetContents_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        gLCD = new QLCDNumber(dockWidgetContents_4);
        gLCD->setObjectName(QString::fromUtf8("gLCD"));
        sizePolicy3.setHeightForWidth(gLCD->sizePolicy().hasHeightForWidth());
        gLCD->setSizePolicy(sizePolicy3);
        gLCD->setFrameShape(QFrame::Panel);
        gLCD->setDigitCount(3);
        gLCD->setProperty("intValue", QVariant(255));

        horizontalLayout_2->addWidget(gLCD);


        verticalLayout->addLayout(horizontalLayout_2);

        gSlider = new QSlider(dockWidgetContents_4);
        gSlider->setObjectName(QString::fromUtf8("gSlider"));
        sizePolicy4.setHeightForWidth(gSlider->sizePolicy().hasHeightForWidth());
        gSlider->setSizePolicy(sizePolicy4);
        gSlider->setMinimumSize(QSize(132, 0));
        gSlider->setMaximum(255);
        gSlider->setSliderPosition(255);
        gSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(gSlider);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(dockWidgetContents_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setFont(font1);

        horizontalLayout_3->addWidget(label_3);

        bLCD = new QLCDNumber(dockWidgetContents_4);
        bLCD->setObjectName(QString::fromUtf8("bLCD"));
        sizePolicy3.setHeightForWidth(bLCD->sizePolicy().hasHeightForWidth());
        bLCD->setSizePolicy(sizePolicy3);
        bLCD->setFrameShape(QFrame::Panel);
        bLCD->setDigitCount(3);
        bLCD->setProperty("intValue", QVariant(255));

        horizontalLayout_3->addWidget(bLCD);


        verticalLayout->addLayout(horizontalLayout_3);

        bSlider = new QSlider(dockWidgetContents_4);
        bSlider->setObjectName(QString::fromUtf8("bSlider"));
        sizePolicy4.setHeightForWidth(bSlider->sizePolicy().hasHeightForWidth());
        bSlider->setSizePolicy(sizePolicy4);
        bSlider->setMinimumSize(QSize(132, 0));
        bSlider->setMaximum(255);
        bSlider->setSliderPosition(255);
        bSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(bSlider);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(dockWidgetContents_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setFont(font1);

        horizontalLayout_4->addWidget(label_4);

        sizeLCD = new QLCDNumber(dockWidgetContents_4);
        sizeLCD->setObjectName(QString::fromUtf8("sizeLCD"));
        sizePolicy3.setHeightForWidth(sizeLCD->sizePolicy().hasHeightForWidth());
        sizeLCD->setSizePolicy(sizePolicy3);
        sizeLCD->setDigitCount(1);
        sizeLCD->setSegmentStyle(QLCDNumber::Filled);
        sizeLCD->setProperty("intValue", QVariant(1));

        horizontalLayout_4->addWidget(sizeLCD);


        verticalLayout->addLayout(horizontalLayout_4);

        pSlider = new QSlider(dockWidgetContents_4);
        pSlider->setObjectName(QString::fromUtf8("pSlider"));
        sizePolicy4.setHeightForWidth(pSlider->sizePolicy().hasHeightForWidth());
        pSlider->setSizePolicy(sizePolicy4);
        pSlider->setMinimumSize(QSize(132, 0));
        pSlider->setMinimum(1);
        pSlider->setMaximum(10);
        pSlider->setSliderPosition(1);
        pSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(pSlider);

        colorBtn = new QPushButton(dockWidgetContents_4);
        colorBtn->setObjectName(QString::fromUtf8("colorBtn"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Times New Roman"));
        font2.setPointSize(11);
        colorBtn->setFont(font2);
        colorBtn->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(colorBtn);


        verticalLayout_2->addLayout(verticalLayout);

        bgcCbx = new QCheckBox(dockWidgetContents_4);
        bgcCbx->setObjectName(QString::fromUtf8("bgcCbx"));
        bgcCbx->setFont(font1);

        verticalLayout_2->addWidget(bgcCbx);

        RGBDock->setWidget(dockWidgetContents_4);
        CloudViewerClass->addDockWidget(static_cast<Qt::DockWidgetArea>(2), RGBDock);
        dataDock = new QDockWidget(CloudViewerClass);
        dataDock->setObjectName(QString::fromUtf8("dataDock"));
        dataDock->setMinimumSize(QSize(250, 233));
        dataDock->setMaximumSize(QSize(300, 524287));
        dataDock->setFont(font1);
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents_5);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        dataTree = new QTreeWidget(dockWidgetContents_5);
        dataTree->setObjectName(QString::fromUtf8("dataTree"));
        dataTree->setMinimumSize(QSize(0, 180));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(9);
        dataTree->setFont(font3);
        dataTree->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout_3->addWidget(dataTree);

        dataDock->setWidget(dockWidgetContents_5);
        CloudViewerClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dataDock);
        propertyDock = new QDockWidget(CloudViewerClass);
        propertyDock->setObjectName(QString::fromUtf8("propertyDock"));
        propertyDock->setMinimumSize(QSize(250, 233));
        propertyDock->setFont(font1);
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName(QString::fromUtf8("dockWidgetContents_6"));
        verticalLayout_4 = new QVBoxLayout(dockWidgetContents_6);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        propertyTable = new QTableWidget(dockWidgetContents_6);
        if (propertyTable->columnCount() < 2)
            propertyTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        propertyTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        propertyTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (propertyTable->rowCount() < 4)
            propertyTable->setRowCount(4);
        propertyTable->setObjectName(QString::fromUtf8("propertyTable"));
        propertyTable->setMinimumSize(QSize(0, 180));
        propertyTable->setFont(font3);
        propertyTable->setFrameShadow(QFrame::Sunken);
        propertyTable->setMidLineWidth(0);
        propertyTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        propertyTable->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        propertyTable->setAutoScroll(true);
        propertyTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        propertyTable->setTabKeyNavigation(true);
        propertyTable->setProperty("showDropIndicator", QVariant(true));
        propertyTable->setDragDropOverwriteMode(true);
        propertyTable->setAlternatingRowColors(false);
        propertyTable->setSelectionMode(QAbstractItemView::ExtendedSelection);
        propertyTable->setTextElideMode(Qt::ElideLeft);
        propertyTable->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        propertyTable->setShowGrid(false);
        propertyTable->setWordWrap(true);
        propertyTable->setCornerButtonEnabled(true);
        propertyTable->setRowCount(4);
        propertyTable->setColumnCount(2);
        propertyTable->horizontalHeader()->setCascadingSectionResizes(false);
        propertyTable->horizontalHeader()->setMinimumSectionSize(25);
        propertyTable->horizontalHeader()->setDefaultSectionSize(100);
        propertyTable->horizontalHeader()->setHighlightSections(true);
        propertyTable->horizontalHeader()->setStretchLastSection(true);
        propertyTable->verticalHeader()->setVisible(false);
        propertyTable->verticalHeader()->setCascadingSectionResizes(false);

        verticalLayout_4->addWidget(propertyTable);

        propertyDock->setWidget(dockWidgetContents_6);
        CloudViewerClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), propertyDock);
        consoleDock = new QDockWidget(CloudViewerClass);
        consoleDock->setObjectName(QString::fromUtf8("consoleDock"));
        consoleDock->setMinimumSize(QSize(200, 140));
        consoleDock->setMaximumSize(QSize(524287, 220));
        dockWidgetContents_7 = new QWidget();
        dockWidgetContents_7->setObjectName(QString::fromUtf8("dockWidgetContents_7"));
        verticalLayout_5 = new QVBoxLayout(dockWidgetContents_7);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        consoleTable = new QTableWidget(dockWidgetContents_7);
        if (consoleTable->columnCount() < 5)
            consoleTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        consoleTable->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        consoleTable->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        consoleTable->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        consoleTable->setHorizontalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        consoleTable->setHorizontalHeaderItem(4, __qtablewidgetitem6);
        consoleTable->setObjectName(QString::fromUtf8("consoleTable"));
        consoleTable->setShowGrid(false);
        consoleTable->setGridStyle(Qt::SolidLine);
        consoleTable->setRowCount(0);
        consoleTable->setColumnCount(5);
        consoleTable->horizontalHeader()->setVisible(true);
        consoleTable->horizontalHeader()->setDefaultSectionSize(200);
        consoleTable->horizontalHeader()->setStretchLastSection(true);
        consoleTable->verticalHeader()->setVisible(false);

        verticalLayout_5->addWidget(consoleTable);

        consoleDock->setWidget(dockWidgetContents_7);
        CloudViewerClass->addDockWidget(static_cast<Qt::DockWidgetArea>(8), consoleDock);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuGenerate->menuAction());
        menuBar->addAction(menuProcess->menuAction());
        menuBar->addAction(menuOption->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(openAction);
        menuFile->addAction(addAction);
        menuFile->addAction(clearAction);
        menuFile->addAction(saveAction);
        menuFile->addAction(saveBinaryAction);
        menuFile->addAction(exitAction);
        menuGenerate->addAction(cubeAction);
        menuGenerate->addAction(menuBasic_shapes->menuAction());
        menuBasic_shapes->addAction(sphereAction);
        menuBasic_shapes->addAction(cylinderAction);
        menuAbout->addAction(helpAction);
        menuAbout->addAction(aboutAction);
        menuOption->addAction(themeAction->menuAction());
        menuOption->addAction(langAction->menuAction());
        themeAction->addAction(windowsThemeAction);
        themeAction->addAction(darculaThemeAction);
        langAction->addAction(englishAction);
        langAction->addAction(chineseAction);
        menuView->addAction(pointcolorAction);
        menuView->addAction(bgcolorAction);
        menuView->addAction(menuAngle_view->menuAction());
        menuAngle_view->addAction(mainviewAction);
        menuAngle_view->addAction(leftviewAction);
        menuAngle_view->addAction(topviewAction);
        menuProcess->addAction(meshsurfaceAction);
        menuProcess->addAction(wireframeAction);
        mainToolBar->addAction(openAction);
        mainToolBar->addAction(addAction);
        mainToolBar->addAction(clearAction);
        mainToolBar->addAction(saveAction);
        mainToolBar->addAction(saveBinaryAction);
        mainToolBar->addSeparator();
        mainToolBar->addAction(pointcolorAction);
        mainToolBar->addAction(bgcolorAction);
        mainToolBar->addSeparator();
        mainToolBar->addAction(mainviewAction);
        mainToolBar->addAction(leftviewAction);
        mainToolBar->addAction(topviewAction);
        mainToolBar->addSeparator();
        mainToolBar->addAction(cubeAction);
        mainToolBar->addSeparator();
        mainToolBar->addAction(meshsurfaceAction);
        mainToolBar->addAction(wireframeAction);
        mainToolBar->addSeparator();
        mainToolBar->addAction(helpAction);
        mainToolBar->addAction(aboutAction);

        retranslateUi(CloudViewerClass);

        QMetaObject::connectSlotsByName(CloudViewerClass);
    } // setupUi

    void retranslateUi(QMainWindow *CloudViewerClass)
    {
        CloudViewerClass->setWindowTitle(QApplication::translate("CloudViewerClass", "CloudViewer", nullptr));
        openAction->setText(QApplication::translate("CloudViewerClass", "Open", nullptr));
#ifndef QT_NO_STATUSTIP
        openAction->setStatusTip(QApplication::translate("CloudViewerClass", "open a exsting file", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        openAction->setShortcut(QApplication::translate("CloudViewerClass", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        saveAction->setText(QApplication::translate("CloudViewerClass", "Save", nullptr));
#ifndef QT_NO_STATUSTIP
        saveAction->setStatusTip(QApplication::translate("CloudViewerClass", "save the file", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        saveAction->setShortcut(QApplication::translate("CloudViewerClass", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        saveasAction->setText(QApplication::translate("CloudViewerClass", "Save as...", nullptr));
        cubeAction->setText(QApplication::translate("CloudViewerClass", "Generate cube", nullptr));
#ifndef QT_NO_STATUSTIP
        cubeAction->setStatusTip(QApplication::translate("CloudViewerClass", "generate a cube point cloud", nullptr));
#endif // QT_NO_STATUSTIP
        helpAction->setText(QApplication::translate("CloudViewerClass", "Help", nullptr));
#ifndef QT_NO_STATUSTIP
        helpAction->setStatusTip(QApplication::translate("CloudViewerClass", "show help information", nullptr));
#endif // QT_NO_STATUSTIP
        aboutAction->setText(QApplication::translate("CloudViewerClass", "About", nullptr));
#ifndef QT_NO_STATUSTIP
        aboutAction->setStatusTip(QApplication::translate("CloudViewerClass", "show some information of the software", nullptr));
#endif // QT_NO_STATUSTIP
        changeAction->setText(QApplication::translate("CloudViewerClass", "Change", nullptr));
#ifndef QT_NO_STATUSTIP
        changeAction->setStatusTip(QApplication::translate("CloudViewerClass", "change the format of the file", nullptr));
#endif // QT_NO_STATUSTIP
        exitAction->setText(QApplication::translate("CloudViewerClass", "Exit", nullptr));
#ifndef QT_NO_SHORTCUT
        exitAction->setShortcut(QApplication::translate("CloudViewerClass", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        pointcolorAction->setText(QApplication::translate("CloudViewerClass", "Point cloud color", nullptr));
        bgcolorAction->setText(QApplication::translate("CloudViewerClass", "Background color", nullptr));
        mainviewAction->setText(QApplication::translate("CloudViewerClass", "Main view", nullptr));
        leftviewAction->setText(QApplication::translate("CloudViewerClass", "Left view", nullptr));
        topviewAction->setText(QApplication::translate("CloudViewerClass", "Top view", nullptr));
        dataAction->setText(QApplication::translate("CloudViewerClass", "Data Manager", nullptr));
        propertyAction->setText(QApplication::translate("CloudViewerClass", "Property Manager", nullptr));
        consoleAction->setText(QApplication::translate("CloudViewerClass", "Console", nullptr));
        RGBAction->setText(QApplication::translate("CloudViewerClass", "RGB Manager", nullptr));
        clearAction->setText(QApplication::translate("CloudViewerClass", "Clear", nullptr));
        addAction->setText(QApplication::translate("CloudViewerClass", "Add", nullptr));
        sphereAction->setText(QApplication::translate("CloudViewerClass", "Sphere", nullptr));
        cylinderAction->setText(QApplication::translate("CloudViewerClass", "Cylinder", nullptr));
        meshsurfaceAction->setText(QApplication::translate("CloudViewerClass", "Surface", nullptr));
        wireframeAction->setText(QApplication::translate("CloudViewerClass", "Wireframe", nullptr));
        windowsThemeAction->setText(QApplication::translate("CloudViewerClass", "Windows", nullptr));
        darculaThemeAction->setText(QApplication::translate("CloudViewerClass", "Darcula", nullptr));
        englishAction->setText(QApplication::translate("CloudViewerClass", "English", nullptr));
        chineseAction->setText(QApplication::translate("CloudViewerClass", "Chinese", nullptr));
        saveBinaryAction->setText(QApplication::translate("CloudViewerClass", "Save as binary", nullptr));
#ifndef QT_NO_STATUSTIP
        saveBinaryAction->setStatusTip(QApplication::translate("CloudViewerClass", "Save point cloud as binary file", nullptr));
#endif // QT_NO_STATUSTIP
        actionBilateralFilter->setText(QApplication::translate("CloudViewerClass", "BilateralFilter", nullptr));
        actionRotate90->setText(QApplication::translate("CloudViewerClass", "Rotate90", nullptr));
        menuFile->setTitle(QApplication::translate("CloudViewerClass", "File", nullptr));
        menuGenerate->setTitle(QApplication::translate("CloudViewerClass", "Generate", nullptr));
        menuBasic_shapes->setTitle(QApplication::translate("CloudViewerClass", "Basic shapes", nullptr));
        menuAbout->setTitle(QApplication::translate("CloudViewerClass", "About", nullptr));
        menuOption->setTitle(QApplication::translate("CloudViewerClass", "Option", nullptr));
        themeAction->setTitle(QApplication::translate("CloudViewerClass", "Theme", nullptr));
        langAction->setTitle(QApplication::translate("CloudViewerClass", "Language", nullptr));
        menuView->setTitle(QApplication::translate("CloudViewerClass", "Display", nullptr));
        menuAngle_view->setTitle(QApplication::translate("CloudViewerClass", "Angle view", nullptr));
        menuProcess->setTitle(QApplication::translate("CloudViewerClass", "Process", nullptr));
        RGBDock->setWindowTitle(QApplication::translate("CloudViewerClass", "RGB", nullptr));
        cooCbx->setText(QApplication::translate("CloudViewerClass", "Coordinate", nullptr));
        label_1->setText(QApplication::translate("CloudViewerClass", "Red", nullptr));
        label_2->setText(QApplication::translate("CloudViewerClass", "Green", nullptr));
        label_3->setText(QApplication::translate("CloudViewerClass", "Blue", nullptr));
        label_4->setText(QApplication::translate("CloudViewerClass", "Point Size", nullptr));
        colorBtn->setText(QApplication::translate("CloudViewerClass", "Color", nullptr));
        bgcCbx->setText(QApplication::translate("CloudViewerClass", "Backgronud:Dark/Light", nullptr));
        dataDock->setWindowTitle(QApplication::translate("CloudViewerClass", "PointCloud", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = dataTree->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("CloudViewerClass", "Point Cloud File", nullptr));
        propertyDock->setWindowTitle(QApplication::translate("CloudViewerClass", "Properties", nullptr));
        QTableWidgetItem *___qtablewidgetitem = propertyTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CloudViewerClass", "Property", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = propertyTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CloudViewerClass", "Value", nullptr));
        consoleDock->setWindowTitle(QApplication::translate("CloudViewerClass", "Console", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = consoleTable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("CloudViewerClass", "Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = consoleTable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("CloudViewerClass", "Operation", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = consoleTable->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("CloudViewerClass", "Operation Object", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = consoleTable->horizontalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("CloudViewerClass", "Details", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = consoleTable->horizontalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("CloudViewerClass", "Note", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CloudViewerClass: public Ui_CloudViewerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOUDVIEWER_H
