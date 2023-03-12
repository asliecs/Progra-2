//
// Created by Usuario on 17/3/2022.
//

#include "Punto2D.h"

#include "Punto2D.h"

Punto2D::Punto2D() : posX(0), posY(0) {}

Punto2D::Punto2D(int posX, int posY) : posX(posX), posY(posY) {}

int Punto2D::getPosX() const {
    return posX;
}

void Punto2D::setPosX(int posX) {
    Punto2D::posX = posX;
}

int Punto2D::getPosY() const {
    return posY;
}

void Punto2D::setPosY(int posY) {
    Punto2D::posY = posY;
}

Punto2D::~Punto2D() {

}

std::ostream &operator<<(std::ostream &os, const Punto2D &d) {
    os << "posX: " << d.posX << " posY: " << d.posY;
    return os;
}
