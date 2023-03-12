//
// Created by Maikol Guzman Alan on 6/20/22.
//

#ifndef PARTIAL_TEST_3_COLEGIADO_SOLUCION_ARCHIVOMANAGER_H
#define PARTIAL_TEST_3_COLEGIADO_SOLUCION_ARCHIVOMANAGER_H
#include "IOperaciones.h"
#include <fstream>
class ArchivoManager : public IOperaciones{
public:
    ArchivoManager();

    vector<Enfermedad> cargarEnfermedades(string nombreArchivo) override;

    vector<Paciente> cargarPacientes(string nombreArchivo) override;

    virtual ~ArchivoManager();
};


#endif //PARTIAL_TEST_3_COLEGIADO_SOLUCION_ARCHIVOMANAGER_H
