//
// Created by Usuario on 17/3/2022.
//

#ifndef RELATIONSHIP_ASSOCIATION_DOCTOR_H
#define RELATIONSHIP_ASSOCIATION_DOCTOR_H

#include <string>
#include <vector>
#include <ostream>
#include "Paciente.h"

class Paciente; // Como el doctor y el paciente tienen una dependencia circular, declaramos Paciente
class Doctor {
    std::string nombre;
    std::vector<Paciente *> pacientes;

public:
    Doctor();

    explicit Doctor(const std::string &nombre);

    virtual ~Doctor();

    void agregarPaciente(Paciente *_paciente);

    friend std::ostream &operator<<(std::ostream &os, const Doctor &doctor);

    const std::string &getNombre() const;

    void setNombre(const std::string &nombre);

    const std::vector<Paciente *> &getPacientes() const;

    void setPacientes(const std::vector<Paciente *> &pacientes);
};


#endif //RELATIONSHIP_ASSOCIATION_DOCTOR_H
