//
// Created by Usuario on 17/3/2022.
//

#ifndef RELATIONSHIP_AGGREGATION_DEPARTAMENTO_H
#define RELATIONSHIP_AGGREGATION_DEPARTAMENTO_H
#include "Profesor.h"

class Departamento {
    Profesor *profesor;

public:
    Departamento();

    Departamento(Profesor *_profesor);
};


#endif //RELATIONSHIP_AGGREGATION_DEPARTAMENTO_H
