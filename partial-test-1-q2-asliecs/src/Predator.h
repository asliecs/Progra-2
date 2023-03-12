//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_PREDATOR_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_PREDATOR_H

#include <ostream>
#include "Humanoide.h"
class Predator:public Humanoide{
private:
    double peso{};
public:
    Predator(double velocidad, double peso);

    Predator(double peso);

    Predator();

    virtual ~Predator();

    double getPeso() const;

    void setPeso(double peso);

    friend ostream &operator<<(ostream &os, const Predator &predator);

    virtual string corre() const override;
    int setValor(double n);
    string toString();
};


#endif //PARTIAL_TEST_1_Q2_COLEGIADO_PREDATOR_H
