//
// Created by Maikol Guzman Alan on 6/20/22.
//

#ifndef PARTIAL_TEST_3_COLEGIADO_SOLUCION_ANALISISBASENITROGENADA_H
#define PARTIAL_TEST_3_COLEGIADO_SOLUCION_ANALISISBASENITROGENADA_H
#include "IAnalisis.h"

class AnalisisBaseNitrogenada: public IAnalisis{
public:
    AnalisisBaseNitrogenada();

    void mostrarAnalisis(ostringstream &oss, vector<Enfermedad> enfermedades, vector<Paciente> pacientes) override;

    int calcularConcentracion(string baseNitrogenada, string secuencia);

    float calcularPorcentaje(float base, float baseTotal);

    int calcularRepeticiones(const string &textoBuscar, const string &textoBase);

    virtual ~AnalisisBaseNitrogenada();
};


#endif //PARTIAL_TEST_3_COLEGIADO_SOLUCION_ANALISISBASENITROGENADA_H
