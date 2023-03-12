//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_ROBOT_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_ROBOT_H

#include <ostream>
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

class Robot {
protected:
    double nivelDeBateria;
    int numSensores;
public:
    Robot(double nivelDeBateria, int numSensores);

    Robot();

    virtual ~Robot();

    double getNivelDeBateria() const;

    void setNivelDeBateria(double nivelDeBateria);

    int getNumSensores() const;

    void setNumSensores(int numSensores);

    virtual string seConfigura();

    virtual string seRecarga();

    friend std::ostream &operator<<(std::ostream &os, const Robot &robot);
};

#endif //PARTIAL_TEST_1_Q2_COLEGIADO_ROBOT_H
