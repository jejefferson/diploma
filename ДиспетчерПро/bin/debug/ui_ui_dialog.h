/********************************************************************************
** Form generated from reading UI file 'ui_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UI_DIALOG_H
#define UI_UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ui_Dialog
{
public:
    QProgressBar *progressBar;
    QPushButton *pushButton;

    void setupUi(QDialog *ui_Dialog)
    {
        if (ui_Dialog->objectName().isEmpty())
            ui_Dialog->setObjectName(QStringLiteral("ui_Dialog"));
        ui_Dialog->resize(400, 300);
        progressBar = new QProgressBar(ui_Dialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(70, 240, 118, 23));
        progressBar->setValue(24);
        pushButton = new QPushButton(ui_Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 240, 85, 27));

        retranslateUi(ui_Dialog);

        QMetaObject::connectSlotsByName(ui_Dialog);
    } // setupUi

    void retranslateUi(QDialog *ui_Dialog)
    {
        ui_Dialog->setWindowTitle(QApplication::translate("ui_Dialog", "Dialog", 0));
        pushButton->setText(QApplication::translate("ui_Dialog", "PushButton", 0));
    } // retranslateUi

};

namesUi_progressce Ui {
    class ui_Dialog: public Ui_ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UI_DIALOG_H
