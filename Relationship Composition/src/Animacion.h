//
// Created by Usuario on 17/3/2022.
//

#ifndef RELATIONSHIP_COMPOSITION_ANIMACION_H
#define RELATIONSHIP_COMPOSITION_ANIMACION_H
#include <string>
#include <ostream>
#include "Punto2D.h"

class Animacion {
    std::string nombre;
    Punto2D posicion;

public:
    Animacion();

    Animacion(const std::string &_nombre, const Punto2D &_posicion);

    virtual ~Animacion();

    void moverseHacia(int _posX, int _posY);

    friend std::ostream &operator<<(std::ostream &os, const Animacion &animacion);
};


#endif //RELATIONSHIP_COMPOSITION_ANIMACION_H
