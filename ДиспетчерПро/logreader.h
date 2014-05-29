#ifndef LOGREADER_H
#define LOGREADER_H

#include <QDialog>
#include <QXmlStreamWriter>
#include <QFile>
#include <QTextStream>

namespace Ui {
class LogReader;
class LogMessage;
}

enum MessageType
{
    Alert = 3,
    Info = 2,
    Notify = 1,
};

class LogMessage
{
    MessageType _type;
    QString _text;

public:
    LogMessage ();
    LogMessage (const QString & str);
    void fromString(const QString & str);
    QString ToHtml();
};

class LogReader : public QDialog
{
    Q_OBJECT
    
public:
    explicit LogReader(QWidget *parent = 0);
    ~LogReader();
    
private:
    Ui::LogReader *ui;
    void showEvent(QShowEvent *event);
    QList<LogMessage *> GetMessages(const QString & filename);
    QString MessagesToHtml(const QList<LogMessage *> & messages);
};

#endif // LOGREADER_H
