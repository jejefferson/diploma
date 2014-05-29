#include "logreader.h"
#include "ui_logreader.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include "parameters.h"

LogReader::LogReader(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogReader)
{
    ui->setupUi(this);
}

void LogReader::showEvent(QShowEvent *event)
{
    Parameters param;
    param.init_parameters_from_file();
    QList<LogMessage *> logmessages = GetMessages(param.get_logfile());
    QString html = MessagesToHtml(logmessages);
    ui->LogBrowser->insertHtml(html);
}
LogReader::~LogReader()
{
    delete ui;
}

QList<LogMessage *> LogReader::GetMessages(const QString & filename) {
    QList<LogMessage *> result;
    QFile file(filename);

    if(file.open(QIODevice::ReadOnly)) {
        QTextStream stream(&file);
        QString line;
        do {
            line = stream.readLine();
            result.append(new LogMessage(line));
        } while (!line.isNull());
    }
    return result;
}

QString LogReader::MessagesToHtml(const QList<LogMessage *> & messages) {
    QString result = "";
    foreach (LogMessage * msg, messages)
    {
        result.append(msg->ToHtml());
        result.append("<br>");
    }
    return result;
}

LogMessage::LogMessage () : _type(Notify), _text("") {
    }

LogMessage::LogMessage (const QString & str) {
    this->fromString(str);
}

void LogMessage::fromString(const QString & str) {
    if (str.contains("Event")) {
        _type = Info;
    } else if (str.contains("Error")) {
        _type = Alert;
    } else {
        _type = Notify;
    }

    _text = str.trimmed();
}

QString LogMessage::ToHtml() {
    QString result = "";
    QXmlStreamWriter stream(&result);
    stream.setAutoFormatting(true);
    stream.writeStartElement("font");

    switch (_type)
    {
    case Alert:
        stream.writeAttribute("color", "Red");
        break;
    case Notify:
        stream.writeAttribute("color", "Lime");
        break;
    case Info:
        stream.writeAttribute("color", "Aqua");
        break;
    }

    stream.writeCharacters(_text);
    stream.writeEndElement();
    return result;
}
