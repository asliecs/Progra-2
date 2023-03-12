//
// Created by Usuario on 17/3/2022.
//

#ifndef RELATIONSHIP_AGGREGATION_PROFESOR_H
#define RELATIONSHIP_AGGREGATION_PROFESOR_H
#include <string>
#include <ostream>

class Profesor {
    std::string nombre;

public:
    Profesor();

    Profesor(const std::string &nombre);

    virtual ~Profesor();

    friend std::ostream &operator<<(std::ostream &os, const Profesor &profesor);

    const std::string &getNombre() const;

    void setNombre(const std::string &nombre);
};


#endif //RELATIONSHIP_AGGREGATION_PROFESOR_H
