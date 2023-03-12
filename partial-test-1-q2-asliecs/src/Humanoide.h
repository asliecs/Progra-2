//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_HUMANOIDE_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_HUMANOIDE_H

#include <ostream>
#include "RoboCop.h"
#include "Guerrero.h"

class Humanoide: public RoboCop, public Guerrero{
private:
    double velocidad{};
  //  double valor;
public:
    Humanoide(double velocidad);

    Humanoide();

    double getVelocidad() const;

    void setVelocidad(double velocidad);

    virtual string corre() const;
    virtual int setValor(double)=0;
    virtual string toString()=0;

    friend ostream &operator<<(ostream &os, const Humanoide &humanoide);

    //void setValor(double) = 0; y otro string toString() = 0;
};


#endif //PARTIAL_TEST_1_Q2_COLEGIADO_HUMANOIDE_H
