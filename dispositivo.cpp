#include "Dispositivo.h"

Dispositivo::Dispositivo(const string& id, const string& nombre) : id(id), nombre(nombre) {}

Dispositivo::~Dispositivo() {}

string Dispositivo::getId() const {
    return id;
}

string Dispositivo::getNombre() const {
    return nombre;
}
