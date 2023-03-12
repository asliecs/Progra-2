//
// Created by ESCINF on 10/04/2022.
//

#include "Robot.h"

Robot::Robot(double nivelDeBateria, int numSensores) : nivelDeBateria(nivelDeBateria), numSensores(numSensores) {}

Robot::Robot() {
    nivelDeBateria=100;
    numSensores=2000;
}

double Robot::getNivelDeBateria() const {
    return nivelDeBateria;
}

void Robot::setNivelDeBateria(double nivelDeBateria) {
    Robot::nivelDeBateria = nivelDeBateria;
}

Robot::~Robot() {

}

int Robot::getNumSensores() const {
    return numSensores;
}

void Robot::setNumSensores(int numSensores) {
    Robot::numSensores = numSensores;
}

std::ostream &operator<<(std::ostream &os, const Robot &robot) {
    os << "[Robot] nivelDeBateria: " << robot.nivelDeBateria << ", numSensores: " << robot.numSensores;
    return os;
}

string Robot::seConfigura() {
    stringstream s;
    s<<"Yo, como robot me puedo configurar.";
    return s.str();
}

string Robot::seRecarga() {
    stringstream s;
    s<<"Yo, como robot busco como recargar la bateria";
    return s.str();

}
