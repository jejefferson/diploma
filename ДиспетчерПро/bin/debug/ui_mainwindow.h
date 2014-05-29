/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDial>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_10;
    QAction *action_11;
    QAction *action_12;
    QAction *action_8;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QFrame *line;
    QLabel *label_5;
    QPushButton *pushButton_3;
    QPushButton *modalButton;
    QCalendarWidget *calendarWidget;
    QTimeEdit *timeEdit;
    QRadioButton *radioButton_3;
    QLabel *label_6;
    QRadioButton *radioButton_4;
    QLabel *label_7;
    QLCDNumber *lcdNumber_2;
    QFrame *line_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLCDNumber *lcdNumber_3;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_14;
    QLabel *label_connect;
    QFrame *line_3;
    QLabel *label_15;
    QFrame *line_4;
    QLabel *label_16;
    QLabel *label_block;
    QFrame *line_5;
    QLabel *label_17;
    QFrame *line_6;
    QLabel *objectName;
    QLabel *label_18;
    QLabel *ipAddress;
    QDial *dial;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(854, 689);
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        font.setPointSize(11);
        MainWindow->setFont(font);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QStringLiteral("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QStringLiteral("action_5"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QStringLiteral("action_7"));
        action_10 = new QAction(MainWindow);
        action_10->setObjectName(QStringLiteral("action_10"));
        action_11 = new QAction(MainWindow);
        action_11->setObjectName(QStringLiteral("action_11"));
        action_12 = new QAction(MainWindow);
        action_12->setObjectName(QStringLiteral("action_12"));
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QStringLiteral("action_8"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 400, 91, 27));
        QFont font1;
        font1.setFamily(QStringLiteral("Monospace"));
        font1.setPointSize(10);
        pushButton->setFont(font1);
        radioButton = new QRadioButton(centralWidget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(300, 280, 211, 21));
        radioButton_2 = new QRadioButton(centralWidget);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(300, 310, 211, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 230, 171, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(400, 60, 301, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(290, 350, 221, 21));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(660, 400, 151, 61));
        QPalette palette;
        QBrush brush(QColor(13, 195, 204, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush);
        lcdNumber->setPalette(palette);
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        lcdNumber->setFont(font2);
        lcdNumber->setDigitCount(8);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 430, 91, 27));
        pushButton_2->setFont(font1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(480, 420, 161, 21));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(540, 510, 113, 23));
        lineEdit->setEchoMode(QLineEdit::Password);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(290, 460, 501, 21));
        line->setStyleSheet(QStringLiteral(""));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(570, 490, 57, 15));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 480, 161, 27));
        pushButton_3->setFont(font1);
        modalButton = new QPushButton(centralWidget);
        modalButton->setObjectName(QStringLiteral("modalButton"));
        modalButton->setGeometry(QRect(300, 510, 161, 27));
        modalButton->setFont(font1);
        calendarWidget = new QCalendarWidget(centralWidget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(540, 140, 264, 159));
        QFont font3;
        font3.setFamily(QStringLiteral("Times New Roman"));
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        calendarWidget->setFont(font3);
        timeEdit = new QTimeEdit(centralWidget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(690, 310, 118, 23));
        radioButton_3 = new QRadioButton(centralWidget);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(300, 180, 181, 21));
        radioButton_3->setStyleSheet(QStringLiteral(""));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(290, 100, 151, 31));
        radioButton_4 = new QRadioButton(centralWidget);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(300, 150, 221, 21));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(580, 110, 201, 16));
        lcdNumber_2 = new QLCDNumber(centralWidget);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(40, 140, 181, 61));
        QPalette palette1;
        QBrush brush1(QColor(0, 0, 102, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        lcdNumber_2->setPalette(palette1);
        lcdNumber_2->setFont(font2);
        lcdNumber_2->setStyleSheet(QLatin1String("border-color: rgb(255, 0, 0);\n"
"background-color: rgb(0, 0, 102);"));
        lcdNumber_2->setDigitCount(8);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(250, 70, 20, 451));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, 60, 171, 21));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(260, 130, 31, 51));
        label_9->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/calculator-24.png)"));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(260, 160, 31, 51));
        label_10->setStyleSheet(QStringLiteral("image: url(:/new/prefix1/user-24.png);"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 100, 221, 31));
        lcdNumber_3 = new QLCDNumber(centralWidget);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(40, 250, 181, 61));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        lcdNumber_3->setPalette(palette2);
        lcdNumber_3->setFont(font2);
        lcdNumber_3->setStyleSheet(QLatin1String("border-color: rgb(255, 0, 0);\n"
"background-color: rgb(0, 0, 102);"));
        lcdNumber_3->setDigitCount(8);
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 210, 201, 31));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 330, 161, 21));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(40, 360, 181, 61));
        QFont font4;
        font4.setFamily(QStringLiteral("Times New Roman"));
        font4.setPointSize(22);
        lineEdit_2->setFont(font4);
        lineEdit_2->setMouseTracking(false);
        lineEdit_2->setStyleSheet(QLatin1String("border-color: rgb(255, 0, 0);\n"
"background-color: rgb(0, 0, 102);\n"
"color: rgb(85, 255, 255);"));
        lineEdit_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_2->setReadOnly(true);
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(40, 470, 181, 61));
        lineEdit_3->setFont(font4);
        lineEdit_3->setMouseTracking(false);
        lineEdit_3->setStyleSheet(QLatin1String("border-color: rgb(255, 0, 0);\n"
"background-color: rgb(0, 0, 102);\n"
"color: rgb(85, 255, 255);"));
        lineEdit_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_3->setReadOnly(true);
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 440, 151, 21));
        label_connect = new QLabel(centralWidget);
        label_connect->setObjectName(QStringLiteral("label_connect"));
        label_connect->setGeometry(QRect(20, 560, 51, 51));
        label_connect->setScaledContents(true);
        label_connect->setAlignment(Qt::AlignCenter);
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(10, 540, 821, 21));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(80, 580, 181, 16));
        QFont font5;
        font5.setFamily(QStringLiteral("Monospace"));
        font5.setPointSize(11);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(50);
        label_15->setFont(font5);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(260, 560, 3, 61));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(340, 580, 221, 16));
        label_block = new QLabel(centralWidget);
        label_block->setObjectName(QStringLiteral("label_block"));
        label_block->setGeometry(QRect(280, 560, 51, 51));
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(590, 560, 3, 61));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(20, 20, 161, 16));
        label_17->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(20, 50, 801, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        objectName = new QLabel(centralWidget);
        objectName->setObjectName(QStringLiteral("objectName"));
        objectName->setGeometry(QRect(200, 20, 191, 16));
        objectName->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(420, 20, 131, 16));
        label_18->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));
        ipAddress = new QLabel(centralWidget);
        ipAddress->setObjectName(QStringLiteral("ipAddress"));
        ipAddress->setGeometry(QRect(570, 20, 111, 16));
        ipAddress->setStyleSheet(QStringLiteral("color: rgb(0, 0, 127);"));
        dial = new QDial(centralWidget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(410, 400, 50, 64));
        dial->setMinimum(-100);
        dial->setMaximum(100);
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(320, 380, 57, 15));
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(410, 380, 57, 15));
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(410, 400, 61, 16));
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(430, 400, 16, 16));
        QFont font6;
        font6.setPointSize(10);
        label_22->setFont(font6);
        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(230, 160, 21, 31));
        QFont font7;
        font7.setPointSize(20);
        label_23->setFont(font7);
        label_24 = new QLabel(centralWidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(230, 270, 21, 31));
        label_24->setFont(font7);
        label_25 = new QLabel(centralWidget);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(820, 420, 21, 31));
        label_25->setFont(font7);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 854, 24));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(action_2);
        menu_2->addAction(action);
        menu_2->addAction(action_7);
        menu_2->addSeparator();
        menu_2->addAction(action_3);
        menu_2->addAction(action_4);
        menu_2->addSeparator();
        menu_2->addAction(action_10);
        menu_2->addAction(action_11);
        menu_3->addAction(action_5);
        menu_3->addAction(action_6);
        menu_4->addAction(action_12);
        menu_4->addAction(action_8);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\232\320\276\320\275\321\202\321\200\320\276\320\273\321\214 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\276\320\262 \320\277\320\276\320\264\321\201\321\202\320\260\320\275\321\206\320\270\320\270 ProDispatcher", 0));
        action->setText(QApplication::translate("MainWindow", "\320\241\320\262\321\217\320\267\320\260\321\202\321\214\321\201\321\217 \321\201 \320\277\320\276\320\264\321\201\321\202\320\260\320\275\321\206\320\270\320\265\320\271", 0));
        action_2->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        action_3->setText(QApplication::translate("MainWindow", "\320\240\321\203\321\207\320\275\320\276\320\265 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", 0));
        action_4->setText(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", 0));
        action_5->setText(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0));
        action_6->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\273\321\203\321\207\320\270\321\202\321\214 \321\201\320\277\321\200\320\260\320\262\320\272\321\203", 0));
        action_7->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\262\320\265\321\200\321\210\320\270\321\202\321\214 \321\201\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265", 0));
        action_10->setText(QApplication::translate("MainWindow", "\320\221\320\273\320\276\320\272\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", 0));
        action_11->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\267\320\261\320\273\320\276\320\272\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", 0));
        action_12->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\321\207\320\270\321\202\320\260\321\202\321\214 \320\266\321\203\321\200\320\275\320\260\320\273", 0));
        action_8->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\266\321\203\321\200\320\275\320\260\320\273", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        radioButton->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\263\321\203\320\273\320\270\321\200\321\203\320\265\321\202\321\201\321\217 \321\201\320\265\320\272\321\206\320\270\321\217 1", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\263\321\203\320\273\320\270\321\200\321\203\320\265\321\202\321\201\321\217 \321\201\320\265\320\272\321\206\320\270\321\217 2", 0));
        label->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \321\201\320\265\320\272\321\206\320\270\320\271", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\320\260\320\274\320\270 \320\277\320\276\320\264\321\201\321\202\320\260\320\275\321\206\320\270\320\270", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265\320\274", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\243\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        label_4->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\272\321\203\321\211\320\265\320\265 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265", 0));
        lineEdit->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", 0));
        modalButton->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\321\217", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "\320\240\321\203\321\207\320\275\320\276\320\265 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", 0));
        label_6->setText(QApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\265", 0));
        label_7->setText(QApplication::translate("MainWindow", "\320\237\320\273\320\260\320\275\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\270\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\271", 0));
        label_8->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\272\321\203\321\211\320\270\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", 0));
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\273\320\265\320\275\320\276 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265", 0));
        label_12->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\321\200\320\265\320\275\320\275\320\276\320\265 \320\275\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265", 0));
        label_13->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\272\321\203\321\211\320\265\320\265 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", 0));
        label_14->setText(QApplication::translate("MainWindow", "\320\220\320\272\321\202\320\270\320\262\320\275\320\260\321\217 \321\201\320\265\320\272\321\206\320\270\321\217", 0));
        label_connect->setText(QString());
        label_15->setText(QApplication::translate("MainWindow", "\320\241\320\262\321\217\320\267\321\214 \321\201 \320\277\320\276\320\264\321\201\321\202\320\260\320\275\321\206\320\270\320\265\320\271", 0));
        label_16->setText(QApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\264\320\276\321\201\321\202\321\203\320\277\320\275\320\276", 0));
        label_block->setText(QString());
        label_17->setText(QApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\272\321\202 \321\203\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\321\217:", 0));
        objectName->setText(QApplication::translate("MainWindow", "NO", 0));
        label_18->setText(QApplication::translate("MainWindow", "\320\241\320\265\321\202\320\265\320\262\320\276\320\271 \320\260\320\264\321\200\320\265\321\201:", 0));
        ipAddress->setText(QApplication::translate("MainWindow", "NO", 0));
        label_19->setText(QApplication::translate("MainWindow", "\320\223\321\200\321\203\320\261\320\276", 0));
        label_20->setText(QApplication::translate("MainWindow", "\320\242\320\276\321\207\320\275\320\276", 0));
        label_21->setText(QApplication::translate("MainWindow", "-   +", 0));
        label_22->setText(QApplication::translate("MainWindow", "0", 0));
        label_23->setText(QApplication::translate("MainWindow", "\320\222", 0));
        label_24->setText(QApplication::translate("MainWindow", "\320\222", 0));
        label_25->setText(QApplication::translate("MainWindow", "\320\222", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\241\320\262\321\217\320\267\321\214", 0));
        menu_3->setTitle(QApplication::translate("MainWindow", "\320\237\320\276\320\274\320\276\321\211\321\214", 0));
        menu_4->setTitle(QApplication::translate("MainWindow", "\320\226\321\203\321\200\320\275\320\260\320\273", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
