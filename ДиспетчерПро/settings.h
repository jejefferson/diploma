#ifndef SETTINGS_H
#define SETTINGS_H
#include <QSettings>

class Settings {
public:
    static QVariant read(QString value);
    static bool write(QString key, QVariant value);
};

#endif // SETTINGS_H
