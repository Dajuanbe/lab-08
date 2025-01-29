#include "Sensor.h"
#include <cstdlib>

Sensor::Sensor(const string& id, const string& nombre) : Dispositivo(id, nombre) {}

Sensor::~Sensor() {}

int Sensor::leerDato() const {
    return rand() % 100; // Retorna un dato aleatorio entre 0 y 99.
}
