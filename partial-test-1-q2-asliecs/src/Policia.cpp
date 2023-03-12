//
// Created by ESCINF on 10/04/2022.
//

#include <string>
#include "Policia.h"

Policia::Policia(const std::__cxx11::basic_string<char> &nombre) : nombre(nombre) {}

Policia::~Policia() {

}

const string &Policia::getNombre() const {
    return nombre;
}

void Policia::setNombre(const string &nombre) {
    Policia::nombre = nombre;
}

string Policia::aprende() {
    stringstream s;
    s<<"Aprendo como un policia.";
    return s.str();
}

string Policia::aplicaJusticia() {
    stringstream s;
    s<<"Aplico la justicia como un policia.";
    return s.str();
}

string Policia::ayuda() {
    stringstream s;
    s<<"Ayudo a la gente como un policia.";
    return s.str();
}

Policia::Policia() {}

ostream &operator<<(ostream &os, const Policia &policia) {
    os << "[Policia] nombre: " << policia.nombre;
    return os;
}
