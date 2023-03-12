//
// Created by Maikol Guzman Alan on 5/17/22.
//

#ifndef PARTIAL_TEST_2_COLEGIADO_ZONA_H
#define PARTIAL_TEST_2_COLEGIADO_ZONA_H
#include "Persona.h"
#include <vector>
#include <ostream>
#include "Servicio.h"
#include "Region.h"

class Zona: public Region{
private:
    Persona *coordinador{};
    string nombreZona;
    vector<Region*>zonaLista;
public:
    Zona();

    Zona(Persona *coordinador, const string &nombreZona);

    Zona(double presupuesto, int cantidadDeActividades, int cantidadDeAsociados, Persona *coordinador,
         const string &nombreZona);

    virtual ~Zona();

    Persona *getCoordinador() const;

    void setCoordinador(Persona *coordinador);

    const string &getNombreZona() const;

    void setNombreZona(const string &nombreZona);

    const vector<Region *> &getZonaLista() const;

    void setZonaLista(const vector<Region *> &zonaLista);

    friend ostream &operator<<(ostream &os, const Zona &zona);

    void agregar(Region* zona);

    int obtenerTotalCantActividades() const override;

    double obtenerTotalPresupuesto() const override;

    int obtenerTotalCantidadAsociados() const override;

    string toString() const override;

};


#endif //PARTIAL_TEST_2_COLEGIADO_ZONA_H
