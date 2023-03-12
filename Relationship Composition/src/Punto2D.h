//
// Created by Usuario on 17/3/2022.
//

#ifndef RELATIONSHIP_COMPOSITION_PUNTO2D_H
#define RELATIONSHIP_COMPOSITION_PUNTO2D_H
#include<ostream>

class Punto2D {
    int posX;
    int posY;

public:
    Punto2D();

    Punto2D(int posX, int posY);

    virtual ~Punto2D();

    int getPosX() const;

    void setPosX(int posX);

    int getPosY() const;

    void setPosY(int posY);

    friend std::ostream &operator<<(std::ostream &os, const Punto2D &d);
};


#endif //RELATIONSHIP_COMPOSITION_PUNTO2D_H
