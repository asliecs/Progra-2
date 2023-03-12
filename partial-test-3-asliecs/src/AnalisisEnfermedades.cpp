//
// Created by Maikol Guzman Alan on 6/20/22.
//

#include "AnalisisEnfermedades.h"

AnalisisEnfermedades::AnalisisEnfermedades() {}

void AnalisisEnfermedades::mostrarAnalisis(ostringstream &oss, vector<Enfermedad> enfermedades, vector<Paciente> pacientes) {

    string textBuscar;
    string textBase;
    for(auto& enfermedad: enfermedades){
        for(auto &paciente: pacientes){
            if(calcularRepeticiones(enfermedad.getSecuencia(),paciente.getSecuencia())==1){
                    //if(paciente.getSecuencia() == enfermedad.getSecuencia()){
                        oss<<enfermedad.getEnfermedad()<<",";
               //}
            }
        }
    }
}

AnalisisEnfermedades::~AnalisisEnfermedades() {

}

int AnalisisEnfermedades:: calcularRepeticiones(const string &textoBuscar, const string &textoBase) {
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