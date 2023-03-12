//
// Created by ESCINF on 10/04/2022.
//

#include "Humanoide.h"
#include "Predator.h"

Predator::Predator(double velocidad, double peso) : Humanoide(velocidad), peso(peso) {}

Predator::Predator(double peso) : peso(peso) {}

Predator::~Predator() {

}

double Predator::getPeso() const {
    return peso;
}

void Predator::setPeso(double peso) {
    Predator::peso = peso;
}

ostream &operator<<(ostream &os, const Predator &predator) {
    os << static_cast<const Humanoide &>(predator) << " peso: " << predator.peso;
    return os;
}

string Predator::corre() const {
    stringstream s;
    s<<"Como humanoide, me gusta correr a una velocidad de 234.000000 km/s.";
    return s.str();
}

int Predator::setValor(double n) {
    return n;
}

string Predator::toString() {
    stringstream s;
    s<<" [--------------------------------------Soy Predator---------------------------]";
    return s.str();

}

Predator::Predator() {}
