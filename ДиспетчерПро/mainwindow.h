#include "ui_mainwindow.h"

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "parameters.h"
#include "logreader.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    void _refresh_lcd(QLCDNumber *, QString);
    void _refresh_control();
    ~MainWindow();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_modalButton_clicked();

    void on_action_2_triggered();

    void on_action_3_triggered();

    void on_action_4_triggered();

    void on_action_5_triggered();

    void on_action_triggered();

    void on_action_7_triggered();

    void on_action_10_triggered();

    void on_action_11_triggered();

    void on_action_12_triggered();

    void on_dial_valueChanged(int value);

    void on_action_8_triggered();

private:
    Ui::MainWindow *ui;
    void showEvent(QShowEvent * event);
    void closeEvent(QCloseEvent *event);
    bool tryConnect(const QString &energyObjectName, const QString &ipAddress);
    Parameters param;
};

#endif // MAINWINDOW_H
