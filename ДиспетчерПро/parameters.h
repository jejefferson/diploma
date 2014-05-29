#ifndef PARAMETERS_H
#define PARAMETERS_H
#include <QString>
#include "settings.h"

#define nominal 10000
#define dopusk 2000

class Parameters
{
public:
    Parameters(int start_voltage=10000, int delta=0);

    bool increase_delta_U();
    bool decrease_delta_U();
    int get_delta_U();
    bool reset_deltaU();
    bool increaseU_bydelta(int delta = 0);
    int get_U();
    void toggle_section();
    void toggle_section2();
    QString get_password();
    QString get_control();
    QString get_logfile();
    QList<QString>* get_eobject();
    short current_section();
    void set_control(QString cont);
    void init_parameters_from_file();
private:
    int deltaU;
    int U;
    short section;
    QString control;
    QString password;
    QString logfile;
    QString objectname;
    QString objectaddress;
};

#endif // PARAMETERS_H
