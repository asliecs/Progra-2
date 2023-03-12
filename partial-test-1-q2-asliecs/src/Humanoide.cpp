//
// Created by ESCINF on 10/04/2022.
//

#include "Humanoide.h"

Humanoide::Humanoide(double velocidad) : velocidad(velocidad) {}

Humanoide::Humanoide() {}

double Humanoide::getVelocidad() const {
    return velocidad;
}

void Humanoide::setVelocidad(double velocidad) {
    Humanoide::velocidad = velocidad;
}

ostream &operator<<(ostream &os, const Humanoide &humanoide) {
    os << static_cast<const RoboCop &>(humanoide) << ' ' << static_cast<const Guerrero &>(humanoide) << " velocidad: "
       << humanoide.velocidad;
    return os;
}

string Humanoide::corre() const {
    stringstream s;
    s<<"Como humanoide, me gusta correr a una velocidad de 100.000000 km/s.";
    return s.str();
}
