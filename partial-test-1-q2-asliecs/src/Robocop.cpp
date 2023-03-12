//
// Created by ESCINF on 10/04/2022.
//

#include <string>
#include "Robot.h"
#include "Policia.h"
#include "RoboCop.h"

RoboCop::RoboCop(double nivelDeBateria, int numSensores, const std::__cxx11::basic_string<char> &nombre,
                 const std::__cxx11::basic_string<char> &numSerie, int nivelDeDano, int codigoDeArmadura) : Robot(
        nivelDeBateria, numSensores), Policia(nombre), numSerie(numSerie), nivelDeDano(nivelDeDano), codigoDeArmadura(
        codigoDeArmadura) {}

RoboCop::RoboCop(const string &nombre) : Policia(nombre) {}

RoboCop::~RoboCop() {

}

const string &RoboCop::getNumSerie() const {
    return numSerie;
}

void RoboCop::setNumSerie(const string &numSerie) {
    RoboCop::numSerie = numSerie;
}

int RoboCop::getNivelDeDano() const {
    return nivelDeDano;
}

void RoboCop::setNivelDeDano(int nivelDeDano) {
    RoboCop::nivelDeDano = nivelDeDano;
}

int RoboCop::getCodigoDeArmadura() const {
    return codigoDeArmadura;
}

void RoboCop::setCodigoDeArmadura(int codigoDeArmadura) {
    RoboCop::codigoDeArmadura = codigoDeArmadura;
}

string RoboCop::dispara() {
    stringstream s;
    s<<"Como Robocop, me encanta disparar a los malos";
    return s.str();
}

string RoboCop::detiene() {
    stringstream s;
    s<<"Como Robocop, me encanta detener a los malos";
    return s.str();
}

string RoboCop::seConfigura() {
    stringstream s;
    s<<"El Robot se Autoconfigura";
    return s.str();
}

string RoboCop::seRecarga() {
    stringstream s;
    s<<"El Robot se Auto Recarga a: 100.000000";
    return s.str();
}

RoboCop::RoboCop() {}

/*Armadura *RoboCop::getArmadura() const {
    return armadura;
}

void RoboCop::setArmadura(Armadura *armadura) {
    RoboCop::armadura = armadura;
}*/

ostream &operator<<(ostream &os, const RoboCop &cop) {
    os << static_cast<const Policia &>(cop) << ' ' << static_cast<const Robot &>(cop) << ", armadura: "
        << "[Tipo de metal: "<<Armadura::tipoDeMetal(cop.codigoDeArmadura)<<", Nivel de resistencia: "<<Armadura::nivelDeResistenciaMax(cop.codigoDeArmadura)<<", Valor en dólares: "<<Armadura::valorEnDolares(cop.codigoDeArmadura)<<"] , "
       <<"numSerie: " << cop.numSerie << ", nivelDeDano:: " << cop.nivelDeDano<<", codigoDeArmadura: "<<cop.codigoDeArmadura;
    return os;

   /* REQUIRE( toString.str() == "[Policia] nombre: Matrix [Robot] nivelDeBateria: 100, numSensores: 2000, armadura: "
                               "[Tipo de metal: Aluminio, Nivel de resistencia: 50, Valor en dólares: 2.5] , "
                               "numSerie: ABC12345, nivelDeDano: 50, codigoDeArmadura: 1");*/
}




