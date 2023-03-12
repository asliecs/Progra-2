#include "Grupo.h"

Grupo::Grupo() {}

Grupo::Grupo(double presupuesto, int cantidadDeActividades, int cantidadDeAsociados, int codigo,
             const string &codigoGrupo, const string &nombreGrupo) : Region(presupuesto, cantidadDeActividades,
                                                                            cantidadDeAsociados), codigo(codigo),
                                                                     codigoGrupo(codigoGrupo),
                                                                     nombreGrupo(nombreGrupo) {
    this->setPresupuesto(Servicio::obtenerPresupuesto(codigo));
    this->setCantidadDeActividades(Servicio::obtenerActividadPorAno(codigo));
    this->setCantidadDeAsociados(Servicio::obtenerCantidadAsociados(codigo));
}

Grupo::~Grupo() {

}

int Grupo::getCodigo() const {
    return codigo;
}

void Grupo::setCodigo(int codigo) {
    this->setPresupuesto(Servicio::obtenerPresupuesto(codigo));
    this->setCantidadDeActividades(Servicio::obtenerActividadPorAno(codigo));
    this->setCantidadDeAsociados(Servicio::obtenerCantidadAsociados(codigo));
    Grupo::codigo = codigo;
}

const string &Grupo::getCodigoGrupo() const {
    return codigoGrupo;
}

void Grupo::setCodigoGrupo(const string &codigoGrupo) {
    Grupo::codigoGrupo = codigoGrupo;
}

const string &Grupo::getNombreGrupo() const {
    return nombreGrupo;
}

void Grupo::setNombreGrupo(const string &nombreGrupo) {
    Grupo::nombreGrupo = nombreGrupo;
}

Grupo::Grupo(int codigo, const string &codigoGrupo, const string &nombreGrupo) : codigo(codigo),
                                                                                 codigoGrupo(codigoGrupo),
                                                                                 nombreGrupo(nombreGrupo) {
    this->setPresupuesto(Servicio::obtenerPresupuesto(codigo));
    this->setCantidadDeActividades(Servicio::obtenerActividadPorAno(codigo));
    this->setCantidadDeAsociados(Servicio::obtenerCantidadAsociados(codigo));
}


ostream &operator<<(ostream &os, const Grupo &grupo) {
    os << static_cast<const Region &>(grupo) << " codigo: " << grupo.codigo << " codigoGrupo: " << grupo.codigoGrupo
       << " nombreGrupo: " << grupo.nombreGrupo;
    return os;
}

string Grupo::toString() const {
   // return Region::toString();
    stringstream s;
    s<<(*this);
    return s.str();
}

int Grupo::obtenerTotalCantActividades() const {
    return Servicio::obtenerActividadPorAno(codigo);
}

double Grupo::obtenerTotalPresupuesto() const {

    double cantidad=0;
    cantidad+= Servicio::obtenerPresupuesto(codigo);
    return cantidad;
}

int Grupo::obtenerTotalCantidadAsociados() const {
    int cantidad=0;
    cantidad+= Servicio::obtenerCantidadAsociados(getCodigo());
    return cantidad;
}


