//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_ALIEN_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_ALIEN_H

#include <ostream>
#include "Humanoide.h"
class Alien: public  Humanoide{
private:
    double estatura;
   // double valor;
public:
    Alien(double velocidad, double estatura);

    Alien(double estatura);

    Alien();

    virtual ~Alien();

    double getEstatura() const;

    void setEstatura(double estatura);

    virtual string corre() const override;
    int setValor(double n);
    string toString();

    friend ostream &operator<<(ostream &os, const Alien &alien);
};


#endif //PARTIAL_TEST_1_Q2_COLEGIADO_ALIEN_H
