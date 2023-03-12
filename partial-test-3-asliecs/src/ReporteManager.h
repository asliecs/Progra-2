//
// Created by Maikol Guzman Alan on 6/20/22.
//

#ifndef PARTIAL_TEST_3_COLEGIADO_SOLUCION_REPORTEMANAGER_H
#define PARTIAL_TEST_3_COLEGIADO_SOLUCION_REPORTEMANAGER_H
#include "IAnalisis.h"
#include "AnalisisTipo.h"
#include "AnalisisEnfermedades.h"
#include "AnalisisBaseNitrogenada.h"
#include "AnalisisConcordancia.h"
class ReporteManager {
private:
    ostringstream ossData;
    IAnalisis* analisis;
public:
    ReporteManager();

    void limpiar();

    void cargarDatos(vector<Enfermedad> enfermedades, vector<Paciente> pacientes);

    void procesarReporte(AnalisisTipo analisisTipo);

    string str();

    virtual ~ReporteManager();

};


#endif //PARTIAL_TEST_3_COLEGIADO_SOLUCION_REPORTEMANAGER_H
