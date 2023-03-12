//
// Created by Maikol Guzman Alan on 6/20/22.
//

#include "ArchivoManager.h"

vector<Enfermedad> ArchivoManager::cargarEnfermedades(string nombreArchivo) {

    string enfer, secu, line;
    Enfermedad enfermedad;
    vector<Enfermedad> enfermedades;

    ifstream myFile(nombreArchivo);

    if(!myFile.is_open()){
        throw invalid_argument("Could not open the file [" + nombreArchivo + "]");
    }
    getline(myFile,line);
    while (!myFile.eof()){
        getline(myFile, enfer, ',');
        getline(myFile,secu,'\n');

        if(!myFile.eof()){
            enfermedad.setEnfermedad(enfer);
            enfermedad.setSecuencia(secu);

            enfermedades.push_back(enfermedad);
        }
    }

    myFile.close();
    return enfermedades;
}

vector<Paciente> ArchivoManager::cargarPacientes(string nombreArchivo) {
    string id, nombre, correo, telefono, secuencia, line;
   Paciente paciente;
   vector<Paciente> pacientes;

    ifstream myFile(nombreArchivo);

    if(!myFile.is_open()){
        throw invalid_argument("Could not open the file [" + nombreArchivo + "]");
    }

    getline(myFile,line);
    while (!myFile.eof()){
        getline(myFile, id, ',');
        getline(myFile, nombre, ',');
        getline(myFile, telefono, ',');
        getline(myFile, correo, ',');
        getline(myFile, secuencia, '\n');

        if(!myFile.eof()){
            paciente.setId(id);
            paciente.setNombre(nombre);
            paciente.setTelefono(telefono);
            paciente.setCorreo(correo);
            paciente.setSecuencia(secuencia);

            pacientes.push_back(paciente);

        }

    }

    myFile.close();
    return pacientes;

}

ArchivoManager::~ArchivoManager() {

}

ArchivoManager::ArchivoManager() {}
