//
// Created by Usuario on 17/3/2022.
//

#ifndef RELATIONSHIP_ASSOCIATION_PACIENTE_H
#define RELATIONSHIP_ASSOCIATION_PACIENTE_H
#include <string>
#include <vector>
#include <ostream>
#include "Doctor.h"

class Doctor; // Como el doctor y el paciente tienen una dependencia circular, declaramos Doctor
class Paciente {
    std::string nombre;
    std::vector<Doctor *> doctores;

public:
    Paciente();

    Paciente(const std::string &nombre);

    virtual ~Paciente();

    void agregarDoctor(Doctor *_doctor);

    friend std::ostream &operator<<(std::ostream &os, const Paciente &paciente);

    const std::string &getNombre() const;

    void setNombre(const std::string &nombre);

    const std::vector<Doctor *> &getDoctores() const;

    void setDoctores(const std::vector<Doctor *> &doctores);


};


#endif //RELATIONSHIP_ASSOCIATION_PACIENTE_H
