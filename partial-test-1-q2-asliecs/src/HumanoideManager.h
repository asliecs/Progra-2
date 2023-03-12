//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_HUMANOIDEMANAGER_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_HUMANOIDEMANAGER_H
#include "Humanoide.h"
#include <vector>


class HumanoideManager {
private:
    vector<Humanoide*>humanoide;

public:
    void setHumanoide(vector<Humanoide*> humanoide);

    const vector<Humanoide *> &getHumanoideList() const;
    //vector<Humanoide>*getHumanoideLista() const;
    // void setHumanoideLista(const vector<Humanoide *> &humanoideLista);

    void ingresaHumanoide(Humanoide* humanoideL);
    //string retornaSoloAliens();
  //  string retornaTodos();
};


#endif //PARTIAL_TEST_1_Q2_COLEGIADO_HUMANOIDEMANAGER_H
