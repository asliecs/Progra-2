//
// Created by ESCINF on 10/04/2022.
//

#include <string>
#include "Guerrero.h"

Guerrero::Guerrero(const std::__cxx11::basic_string<char> &color) : color(color) {}

Guerrero::Guerrero() {
    color="Negro plateado";
}

Guerrero::~Guerrero() {

}

const string &Guerrero::getColor() const {
    return color;
}

void Guerrero::setColor(const string &color) {
    Guerrero::color = color;
}

string Guerrero::seDefiende() {
    stringstream s;
    s<< "Como guerrero me defiendo como gato panza arriba.";
    return s.str();

}

string Guerrero::ataca() {
    stringstream s;
    s<<"Como guerrero me encanta atacar.";
    return s.str();
}

string Guerrero::muere() {
    stringstream s;
    s<<"Ahhhhhh, muero, hoy es buen día para morir.";
    return s.str();
}

ostream &operator<<(ostream &os, const Guerrero &guerrero) {
    os << "[Guerrero] color: " << guerrero.color;
    return os;
}
