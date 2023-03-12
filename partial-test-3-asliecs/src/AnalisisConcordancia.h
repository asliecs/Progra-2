//
// Created by Maikol Guzman Alan on 6/20/22.
//

#ifndef PARTIAL_TEST_3_COLEGIADO_SOLUCION_ANALISISCONCORDANCIA_H
#define PARTIAL_TEST_3_COLEGIADO_SOLUCION_ANALISISCONCORDANCIA_H
#include "IAnalisis.h"

class AnalisisConcordancia: public IAnalisis{
public:
    AnalisisConcordancia();

    void mostrarAnalisis(ostringstream &oss, vector<Enfermedad> enfermedades, vector<Paciente> pacientes) override;

    int calcularConcordancia(string secuenciaEnfermedad, string secuenciaPaciente);

    int calcularRepeticiones(const string &textoBuscar, const string &textoBase);

    virtual ~AnalisisConcordancia();
};


#endif //PARTIAL_TEST_3_COLEGIADO_SOLUCION_ANALISISCONCORDANCIA_H
