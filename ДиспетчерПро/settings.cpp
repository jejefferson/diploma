#include "settings.h"

QVariant Settings::read(QString value) {
    QSettings *settings = new QSettings("settings.conf",QSettings::NativeFormat);
    settings->setIniCodec("utf-8");
    return settings->value(value);
    delete settings;
};

bool Settings::write(QString key, QVariant value) {
        QSettings *settings = new QSettings("settings.conf",QSettings::NativeFormat);
        settings->setValue(key, value);
        settings->sync();
        delete settings;
        return 0;
};
