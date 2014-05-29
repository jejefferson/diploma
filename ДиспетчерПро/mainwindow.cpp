#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "parameters.h"
#include <QCryptographicHash>
#include <QMessageBox>
#include <QShowEvent>
#include "settings.h"
#include <QProgressDialog>
#include <QTime>
#include <QDebug>
#include <iostream>
#include "aboutdialog.h"
#include "logreader.h"

bool isInitialized = false; // first show mainwindow's trigger

void delay()
{
    QTime dieTime= QTime::currentTime().addMSecs(100);
    while( QTime::currentTime() < dieTime )
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void SimpleLoggingHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg) {
    QStringList split(msg.split("|"));
    QString filename = split.value(0).split('"').value(1);
    QString mesg = split.value(1);
    QFile file(filename);
    file.open(QIODevice::Append);
    QTextStream logfile( &file );
    switch (type) {
        case QtDebugMsg:
            logfile << QDateTime::currentDateTime().toString() <<" Event: " << mesg << "\n";
            break;
        case QtCriticalMsg:
            logfile << QDateTime::currentDateTime().toString() <<" Error: " << mesg << "\n";
            break;
        case QtWarningMsg:
            logfile << QDateTime::currentDateTime().toString() <<" Warning: " << mesg << "\n";
            break;
        case QtFatalMsg:
            logfile << "Fatal: " << mesg << "\n";
            abort();
        }
    file.close();
}


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::_refresh_control(){
    if (!param.get_control().compare("auto")){
        ui->lineEdit_2->setText("авто");
    }
    else {
             ui->lineEdit_2->setText("ручной");
    }
}

void MainWindow::showEvent(QShowEvent *event)
{
    //QDialog::showEvent(event);
    //QCoreApplication::processEvents();

    if( event->spontaneous())
        return;

    if(isInitialized) {
        return;
    }
    param.init_parameters_from_file();
    QString strnum;
    _refresh_lcd(ui->lcdNumber_2, strnum.sprintf("%d", param.get_U()));
    _refresh_lcd(ui->lcdNumber_3, "9945"); //temp function, maybe to fill with random due to no network support?
    _refresh_control();
    if (param.get_control() == "auto") {
        ui->radioButton->setDisabled(true);
        ui->radioButton_2->setDisabled(true);
        ui->pushButton->setDisabled(true);
        ui->pushButton_2->setDisabled(true);
    }
    ui->lineEdit_3->setText(strnum.sprintf("%d", param.current_section()));
    qInstallMessageHandler(SimpleLoggingHandler);
    qDebug() << param.get_logfile() << "|запуск приложения";
    QList<QString> *eobject = param.get_eobject();
    if (tryConnect((*eobject)[0], (*eobject)[1])) {
        on_action_triggered();
    } else {
        on_action_7_triggered();
    }
    delete eobject;
    ui->label_block->setStyleSheet("background-image: url(:/new/prefix1/green_lock.png);"
                                     "background-repeat: no-repeat;");
    isInitialized = true;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
     QMessageBox::StandardButton ret;
    ret = QMessageBox::question( this,  QApplication::applicationName(), tr("Вы действительно хотите закрыть программу?"),
                                 QMessageBox::Yes | QMessageBox::No , QMessageBox::No );
    if (ret == QMessageBox::No) {
        event->ignore();
    } else {
        qDebug() << param.get_logfile() << "|выход из программы";
    }

}

//refresh_lcd
void MainWindow::_refresh_lcd(QLCDNumber *lcd, QString text = NULL) {
    lcd->repaint();
    if (text == NULL) {
        lcd->display(ui->dial->value() + param.get_delta_U());
    }
    else lcd->display(text);
}

bool MainWindow::tryConnect(const QString &energyObjectName, const QString &ipAddress) {
    //here your network support, connect method
    //i didn't have a time to implement this, and this were no required in my diploma
    ui->objectName->setText(energyObjectName);
    ui->ipAddress->setText(ipAddress);
    return 1;
}

//increase
void MainWindow::on_pushButton_clicked() {
    if (!param.increase_delta_U()) {
        QMessageBox::information(this, "Ошибка ввода","Изменение превышает номинал");
        ui->dial->setValue(0);
    }
    _refresh_lcd(ui->lcdNumber);
}

//decrease
void MainWindow::on_pushButton_2_clicked()
{
    if (!param.decrease_delta_U()) {
        QMessageBox::information(this, "Ошибка ввода","Изменение превышает номинал");
        ui->dial->setValue(0);
    }
    _refresh_lcd(ui->lcdNumber);
}

//reset
void MainWindow::on_pushButton_3_clicked()
{
    ui->dial->setValue(0);
    param.reset_deltaU();
    _refresh_lcd(ui->lcdNumber, "0");
}

void MainWindow::on_radioButton_4_clicked()
{
    param.set_control("auto");
}

void MainWindow::on_radioButton_3_clicked()
{
    param.set_control("manual");
}

void MainWindow::on_radioButton_clicked()
{
    param.toggle_section();
}

void MainWindow::on_radioButton_2_clicked()
{
    param.toggle_section2();
}

void MainWindow::on_modalButton_clicked()
{
    QCryptographicHash datahash(QCryptographicHash::Sha1);
    datahash.addData(ui->lineEdit->text().toUtf8());
    QByteArray hashByteArray = datahash.result();
    if ((hashByteArray.toHex())==(param.get_password())) {
        if (abs(param.get_delta_U()) >= 2000) {
            QMessageBox msgBox;
            msgBox.setWindowTitle("Подтверждение");
            msgBox.setText(QString("Подтвердить ввод изменения на %1 В?").arg(ui->lcdNumber->value()));
            msgBox.setStandardButtons(QMessageBox::Yes| QMessageBox::No);
            if(msgBox.exec() == QMessageBox::No) {
                on_pushButton_3_clicked();
                return;
            }
        }
        int numTasks = 50;
        QProgressDialog progress("Идёт передача сигнала", "Отменить", 0, numTasks, this);
        progress.setWindowTitle("Передача сигнала");
        progress.setWindowModality(Qt::WindowModal);
        //progressbar cycle
        for (int i = 0; i < numTasks; i++) {
            delay();
            progress.setValue(i);
            if (progress.wasCanceled())
                return;
        }
        progress.setValue(numTasks);
        QString strnum;
        //U was changed?
        if (param.get_delta_U() != 0 || ui->dial->value() != 0) {
            param.increaseU_bydelta(ui->dial->value());
            qDebug() << param.get_logfile() << "|напряжение изменено на:" << param.get_delta_U() + ui->dial->value();
            qDebug() << param.get_logfile() << "|текущее напряжение:" << param.get_U();
            param.reset_deltaU(); //control and section need too
            _refresh_lcd(ui->lcdNumber, "0");
            ui->dial->setValue(0);
            _refresh_lcd(ui->lcdNumber_2, strnum.sprintf("%d", param.get_U()));
        }
        //control was changed?
        if (ui->radioButton_3->isChecked() || ui->radioButton_4->isChecked()) {
            if (ui->radioButton_3->isChecked()) {
                ui->radioButton_3->setCheckable(false);
                ui->radioButton_3->setCheckable(true);
                ui->radioButton->setDisabled(false);
                ui->radioButton_2->setDisabled(false);
                ui->pushButton->setDisabled(false);
                ui->pushButton_2->setDisabled(false);
            }
            else {
                ui->radioButton_4->setCheckable(false);
                ui->radioButton_4->setCheckable(true);
                ui->radioButton->setDisabled(true);
                ui->radioButton_2->setDisabled(true);
                ui->pushButton->setDisabled(true);
                ui->pushButton_2->setDisabled(true);
            }
            _refresh_control();
            Settings::write("control", param.get_control());
            qDebug() << param.get_logfile() << "|управление изменено на:" << param.get_control();
        }
        //section was changed?
        if (ui->radioButton->isChecked() || ui->radioButton_2->isChecked()){
            ui->radioButton->setCheckable(false);
            ui->radioButton_2->setCheckable(false);
            ui->radioButton->setCheckable(true);
            ui->radioButton_2->setCheckable(true);
            Settings::write("section", param.current_section());
            ui->lineEdit_3->setText(strnum.sprintf("%d", param.current_section()));
            qDebug() << param.get_logfile() << "|активная секция изменена на:" << param.current_section();
        }
    }
    else {
        qCritical() << param.get_logfile() << "|ввод неправильного пароля";
        QMessageBox::warning(this, "Error", "Неправильный пароль", QMessageBox::Ok);
    }
    ui->lineEdit->setText("");
}

void MainWindow::on_action_2_triggered()
{
    close();
}

void MainWindow::on_action_3_triggered()
{
    ui->radioButton_3->setChecked(true);
    on_radioButton_3_clicked();
}

void MainWindow::on_action_4_triggered()
{
    ui->radioButton_4->setChecked(true);
    on_radioButton_4_clicked();
}

//about program dialog
void MainWindow::on_action_5_triggered()
{
    AboutDialog *dialog = new AboutDialog;
    dialog->setModal(true);
    dialog->exec();
    delete dialog;
}

//connect
void MainWindow::on_action_triggered()
{
    qWarning() << param.get_logfile() << "|соединение установлено";
    ui->label_connect->setStyleSheet("background-image: url(:/new/prefix1/green_connect.png);"
                                     "background-repeat: no-repeat;");
}

//disconnect
void MainWindow::on_action_7_triggered()
{
    qCritical() << param.get_logfile() << "|нет соединения, работа в автономном режиме";
    ui->label_connect->setStyleSheet("background-image: url(:/new/prefix1/red_connect.png);"
                                     "background-repeat: no-repeat;");
}

//control block
void MainWindow::on_action_10_triggered()
{
    ui->radioButton->setDisabled(true);
    ui->radioButton_2->setDisabled(true);
    ui->radioButton_3->setDisabled(true);
    ui->radioButton_4->setDisabled(true);
    ui->pushButton->setDisabled(true);
    ui->pushButton_2->setDisabled(true);
    ui->pushButton_3->setDisabled(true);
    ui->lineEdit->setDisabled(true);
    ui->modalButton->setDisabled(true);
    ui->label_16->setText("Управление заблокировано");
    qCritical() << param.get_logfile() << "|управление заблокировано";
    ui->label_block->setStyleSheet("background-image: url(:/new/prefix1/red_lock.png);"
                                     "background-repeat: no-repeat;");
}

//control unblock
void MainWindow::on_action_11_triggered()
{
    ui->radioButton->setDisabled(false);
    ui->radioButton_2->setDisabled(false);
    ui->radioButton_3->setDisabled(false);
    ui->radioButton_4->setDisabled(false);
    ui->pushButton->setDisabled(false);
    ui->pushButton_2->setDisabled(false);
    ui->pushButton_3->setDisabled(false);
    ui->lineEdit->setDisabled(false);
    ui->modalButton->setDisabled(false);
    ui->label_16->setText("Управление доступно");
    qWarning() << param.get_logfile() << "|управление доступно";
    ui->label_block->setStyleSheet("background-image: url(:/new/prefix1/green_lock.png);"
                                     "background-repeat: no-repeat;");
}

void MainWindow::on_action_12_triggered()
{
    LogReader *log = new LogReader;
    log->setModal(true);
    log->exec();
    delete log;
}

void MainWindow::on_dial_valueChanged(int value)
{
    int temp;
    temp = param.get_delta_U();
    ui->lcdNumber->display(temp + ui->dial->value());
}

void MainWindow::on_action_8_triggered()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Подтверждение");
    msgBox.setText("Вы действительно хотите очистить журнал?");
    msgBox.setStandardButtons(QMessageBox::Yes| QMessageBox::No);
    if(msgBox.exec() == QMessageBox::Yes) {
        bool result = QFile::remove(param.get_logfile());
        if (result) {
            QMessageBox::information(this, "Предупреждение", "Журнал успешно очищен!");
            qWarning() << param.get_logfile() << "|журнал очищен";
        } else {
            QMessageBox::information(this, "Ошибка", "Журнал не очищен!");
        }
    }
}
