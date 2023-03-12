//
// Created by Maikol Guzman Alan on 6/20/22.
//

#ifndef PARTIAL_TEST_3_COLEGIADO_SOLUCION_IOPERACIONES_H
#define PARTIAL_TEST_3_COLEGIADO_SOLUCION_IOPERACIONES_H
#include "Paciente.h"
#include "Enfermedad.h"
#include <vector>

class IOperaciones {
public:
    virtual ~IOperaciones() = default;
    virtual vector<Enfermedad> cargarEnfermedades(string nombreArchivo) = 0;
    virtual vector<Paciente> cargarPacientes(string nombreArchivo) = 0;

};
#endif //PARTIAL_TEST_3_COLEGIADO_SOLUCION_IOPERACIONES_H
