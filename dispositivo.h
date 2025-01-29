#ifndef DISPOSITIVO_H
#define DISPOSITIVO_H

#include <string>
using namespace std;

class Dispositivo {
protected:
    string id;
    string nombre;

public:
    Dispositivo(const string& id, const string& nombre);
    virtual ~Dispositivo();

    string getId() const;
    string getNombre() const;
};

#endif
