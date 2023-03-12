//
// Created by Maikol Guzman Alan on 6/20/22.
//

#include "AnalisisConcordancia.h"

AnalisisConcordancia::AnalisisConcordancia() {}

void
AnalisisConcordancia::mostrarAnalisis(ostringstream &oss, vector<Enfermedad> enfermedades, vector<Paciente> pacientes) {
    string textBuscar;
    string textBase;
    for(auto& enfermedad: enfermedades){
        for(auto &paciente: pacientes){
            if(calcularRepeticiones(enfermedad.getSecuencia(),paciente.getSecuencia()) == 2) {
                //if(paciente.getSecuencia() == enfermedad.getSecuencia()){
                oss << paciente.getId() << "-" << paciente.getNombre() << "-" << paciente.getCorreo() << " ["
                    << enfermedad.getEnfermedad() << "-MEDIA];";
            }else
                if(calcularRepeticiones(enfermedad.getSecuencia(),paciente.getSecuencia()) > 3) {
                    oss << paciente.getId() << "-" << paciente.getNombre() << "-" << paciente.getCorreo() << " ["
                        << enfermedad.getEnfermedad() << "-ALTA];";
                }
        }
    }
}

AnalisisConcordancia::~AnalisisConcordancia() {

}

int AnalisisConcordancia::calcularConcordancia(string secuenciaEnfermedad, string secuenciaPaciente) {

    return 0;
}

int AnalisisConcordancia::calcularRepeticiones(const string &textoBuscar, const string &textoBase) {
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
