//
// Created by Usuario on 17/3/2022.
//

#include "Profesor.h"
Profesor::Profesor() {}

Profesor::Profesor(const std::string &nombre) : nombre(nombre) {}

Profesor::~Profesor() {

}

std::ostream &operator<<(std::ostream &os, const Profesor &profesor) {
    os << "nombre: " << profesor.nombre;
    return os;
}

const std::string &Profesor::getNombre() const {
    return nombre;
}

void Profesor::setNombre(const std::string &nombre) {
    Profesor::nombre = nombre;
}
