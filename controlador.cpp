#include "Controlador.h"
#include <iostream>

Controlador::Controlador(const string& id, const string& nombre) : Dispositivo(id, nombre) {}

Controlador::~Controlador() {}

void Controlador::registrarSensor(Sensor* sensor) {
    sensores.push_back(sensor);
    cout << "Sensor registrado: " << sensor->getId() << "\n";
}

void Controlador::eliminarSensor(const string& idSensor) {
    auto it = sensores.begin();
    while (it != sensores.end()) {
        if ((*it)->getId() == idSensor) {
            it = sensores.erase(it);
            cout << "Sensor eliminado: " << idSensor << "\n";
        }
        else {
            ++it;
        }
    }
}

void Controlador::mostrarEstado() const {
    cout << "Controlador ID: " << id << ", Nombre: " << nombre << "\n";
    cout << "Sensores asociados:\n";
    for (const auto& sensor : sensores) {
        cout << " - Sensor ID: " << sensor->getId() << ", Nombre: " << sensor->getNombre()
            << ", Dato: " << sensor->leerDato() << "\n";
    }
}
