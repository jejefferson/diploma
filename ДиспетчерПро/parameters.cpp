#include <QString>
#include <QMessageBox>
#include "settings.h"
#include "parameters.h"

Parameters::Parameters(int start_voltage, int delta) {
        U = start_voltage;
        deltaU=delta;
}

bool Parameters::increase_delta_U() {
    if ((U + deltaU) < nominal + dopusk) {
        deltaU += 100;
        return 1;
    } else {
        deltaU = nominal+dopusk-U;
        return 0;
    }
}

bool Parameters::decrease_delta_U() {
    if ((U + deltaU) > 0) {
        deltaU -= 100;
        return 1;
    } else {
        deltaU = -U;
        return 0;
    }
}

int Parameters::get_delta_U() {
        return deltaU;
}

bool Parameters::reset_deltaU() {
        deltaU = 0;
        return 0;
}

bool Parameters::increaseU_bydelta(int delta) {
        U += deltaU;
        U += delta;
        return 0;
}

int Parameters::get_U() {
        return U;
}

void Parameters::toggle_section() {
        section = 1;
}

void Parameters::toggle_section2() {
        section = 2;
}

short Parameters::current_section() {
        return section;
}

QString Parameters::get_password() {
        return password;
}

QString Parameters::get_control() {
        return control;
}

void Parameters::set_control(QString cont) {
        control = cont;
}

QString Parameters::get_logfile() {
    return logfile;
}

QList<QString>* Parameters::get_eobject() {
    QList<QString> *eobject = new QList<QString>();
    eobject->append(objectname);
    eobject->append(objectaddress);
    return eobject;
}

void Parameters::init_parameters_from_file() {
        password = Settings::read("password").toString();
        control = Settings::read("control").toString();
        section = Settings::read("section").toInt();
        logfile = Settings::read("logfile").toString();
        objectname = Settings::read("objectname").toString();
        objectaddress = Settings::read("objectaddress").toString();
}
