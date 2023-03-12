//
// Created by Maikol Guzman Alan on 6/20/22.
//

#include "AnalisisBaseNitrogenada.h"

AnalisisBaseNitrogenada::AnalisisBaseNitrogenada() {}

void AnalisisBaseNitrogenada::mostrarAnalisis(ostringstream &oss, vector<Enfermedad> enfermedades,
                                              vector<Paciente> pacientes) {

    for(auto& enfermedad: enfermedades){
        for(auto &paciente: pacientes){
            //if(calcularRepeticiones(enfermedad.getSecuencia(),paciente.getSecuencia())==1){
                //if(paciente.getSecuencia() == enfermedad.getSecuencia()){
                oss<<paciente.getNombre()<<",";
                //}
            }
        }

}

AnalisisBaseNitrogenada::~AnalisisBaseNitrogenada() {

}

int AnalisisBaseNitrogenada::calcularConcentracion(string baseNitrogenada, string secuencia) {

    int resultado;
    vector<Paciente> pacientes;
    for(auto &person:pacientes){
        baseNitrogenada = person.getSecuencia();
        if(calcularRepeticiones(baseNitrogenada, secuencia) > 0){
            resultado++;
        }
    }
    return resultado;
}

float AnalisisBaseNitrogenada::calcularPorcentaje(float base, float baseTotal) {
    return (base*100)/baseTotal;
}

int AnalisisBaseNitrogenada::calcularRepeticiones(const string &textoBuscar, const string &textoBase) {
    int repeticiones = 0;
    unsigned long index = 0; // variable para la posición donde se encuentra la letra
    // El siguiente ciclo permite recorrer el string para identificar las veces que se
    // repite un carácter
    while ((index = textoBase.find(textoBuscar, index)) != std::string::npos) {
        index += textoBuscar.length();
        repeticiones++;
    }
    return repeticiones;
}
