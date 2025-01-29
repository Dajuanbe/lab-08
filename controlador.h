#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include "Dispositivo.h"
#include "Sensor.h"
#include <vector>

class Controlador : public Dispositivo {
private:
    vector<Sensor*> sensores;

public:
    Controlador(const string& id, const string& nombre);
    ~Controlador();

    void registrarSensor(Sensor* sensor);
    void eliminarSensor(const string& idSensor);
    void mostrarEstado() const;
};

#endif
