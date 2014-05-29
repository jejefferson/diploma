/********************************************************************************
** Form generated from reading UI file 'logreader.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGREADER_H
#define UI_LOGREADER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_LogReader
{
public:
    QDialogButtonBox *buttonBox;
    QTextBrowser *LogBrowser;

    void setupUi(QDialog *LogReader)
    {
        if (LogReader->objectName().isEmpty())
            LogReader->setObjectName(QStringLiteral("LogReader"));
        LogReader->resize(791, 482);
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        font.setPointSize(11);
        LogReader->setFont(font);
        buttonBox = new QDialogButtonBox(LogReader);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(410, 440, 341, 32));
        QFont font1;
        font1.setPointSize(10);
        buttonBox->setFont(font1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        LogBrowser = new QTextBrowser(LogReader);
        LogBrowser->setObjectName(QStringLiteral("LogBrowser"));
        LogBrowser->setGeometry(QRect(40, 20, 711, 381));

        retranslateUi(LogReader);
        QObject::connect(buttonBox, SIGNAL(accepted()), LogReader, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LogReader, SLOT(reject()));

        QMetaObject::connectSlotsByName(LogReader);
    } // setupUi

    void retranslateUi(QDialog *LogReader)
    {
        LogReader->setWindowTitle(QApplication::translate("LogReader", "\320\226\321\203\321\200\320\275\320\260\320\273", 0));
    } // retranslateUi

};

namespace Ui {
    class LogReader: public Ui_LogReader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGREADER_H
