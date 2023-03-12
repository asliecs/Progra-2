//
// Created by ESCINF on 10/04/2022.
//

#include <vector>
#include "HumanoideManager.h"

void HumanoideManager::setHumanoide(std::vector <Humanoide*> humanoide) {
    HumanoideManager::humanoide = humanoide;
}

const vector<Humanoide *> &HumanoideManager::getHumanoideList() const {
    return humanoide;
}

/*void HumanoideManager::ingresaHumanoide(Humanoide* humanoideL) {

}/*

//string HumanoideManager::retornaSoloAliens() {
   /* //product = &physicalProduct;
   // cout << "UPCASTING..........> PROPERTY" << endl;
    //cout << "Upcasting          > " << product->getName() << endl;
    Alien alien;
    Policia policia;
    policia=&alien;
    if(policia.getNombre()=="ALIEN")

*/
//}




