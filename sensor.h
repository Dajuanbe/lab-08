#ifndef SENSOR_H
#define SENSOR_H

#include "Dispositivo.h"

class Sensor : public Dispositivo {
public:
    Sensor(const string& id, const string& nombre);
    ~Sensor();

    int leerDato() const;
};

#endif
