//
// Created by ESCINF on 10/04/2022.
//

#include "Humanoide.h"
#include "Alien.h"

Alien::Alien(double velocidad, double estatura) : Humanoide(velocidad), estatura(estatura) {}

Alien::Alien() {}

Alien::~Alien() {

}

double Alien::getEstatura() const {
    return estatura;
}

void Alien::setEstatura(double estatura) {
    Alien::estatura = estatura;
}

string Alien::corre() const {
    stringstream s;
    s<<"Como humanoide, me gusta correr a una velocidad de 100.000000 km/s.";
    return s.str();
}

string Alien::toString() {

 stringstream s;

 /* REQUIRE( alien.toString() == "[Policia] nombre: Alien 1 [Robot] nivelDeBateria: 100, numSensores: 2000, "
                               "armadura: [Tipo de metal: Aluminio, Nivel de resistencia: 50, "
                               "Valor en dólares: 2.5] , numSerie: ABC12345, nivelDeDano: 45, "
                               "codigoDeArmadura: 1 [Guerrero] color: Azul, velocidad: 100, estatura: 2");*/
}

ostream &operator<<(ostream &os, const Alien &alien) {
    os << static_cast<const Humanoide &>(alien) << " estatura: " << alien.estatura;
    return os;
}

int Alien::setValor(double n) {
    return n;
}

Alien::Alien(double estatura) : estatura(estatura) {
}
