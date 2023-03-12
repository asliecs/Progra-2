//
// Created by Maikol Guzman Alan on 6/20/22.
//

#include "ReporteManager.h"

ReporteManager::ReporteManager() {}

ReporteManager::~ReporteManager() {

}

void ReporteManager::limpiar() {
    ossData.str("");
    ossData.clear();
}

void ReporteManager::cargarDatos(vector<Enfermedad> enfermedades, vector<Paciente> pacientes) {
    analisis->mostrarAnalisis(ossData,enfermedades,pacientes);
}

void ReporteManager::procesarReporte(AnalisisTipo analisisTipo) {
    switch (analisisTipo) {
        case AnalisisTipo::ANALISIS_ENFERMEDADES :
            analisis = new AnalisisEnfermedades();
            break;
        case AnalisisTipo::ANALISIS_BASE_NITROGENADA :
            analisis = new AnalisisBaseNitrogenada();
            break;
        case AnalisisTipo::ANALISIS_CONCORDANCIA :
            analisis = new AnalisisConcordancia();
            break;
    }
}

string ReporteManager::str() {
    return ossData.str();
}
