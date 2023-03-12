
#include "Persona.h"
#include "Zona.h"

Zona::Zona() {}

Zona::Zona(Persona *coordinador, const string &nombreZona) : coordinador(coordinador), nombreZona(nombreZona) {
    this->setPresupuesto(obtenerTotalPresupuesto());
    this->setCantidadDeActividades(obtenerTotalCantActividades());
    this->setCantidadDeAsociados(obtenerTotalCantidadAsociados());

}

Zona::Zona(double presupuesto, int cantidadDeActividades, int cantidadDeAsociados, Persona *coordinador,
           const string &nombreZona) : Region(presupuesto, cantidadDeActividades, cantidadDeAsociados),
                                       coordinador(coordinador), nombreZona(nombreZona) {
}

Zona::~Zona() {

}

Persona *Zona::getCoordinador() const {
    return coordinador;
}

void Zona::setCoordinador(Persona *coordinador) {
    Zona::coordinador = coordinador;
}

const string &Zona::getNombreZona() const {
    return nombreZona;
}

void Zona::setNombreZona(const string &nombreZona) {
    Zona::nombreZona = nombreZona;
}

const vector<Region *> &Zona::getZonaLista() const {
    return zonaLista;
}

void Zona::setZonaLista(const vector<Region *> &zonaLista) {
    Zona::zonaLista = zonaLista;
}

ostream &operator<<(ostream &os, const Zona &zona) {

    stringstream sstream;
    sstream.setf(ios::fixed);
    sstream.precision(0);
    sstream << zona.obtenerTotalPresupuesto();
    os<<"presupuesto: " <<sstream.str()<< " cantidadDeActividades: "<<zona.obtenerTotalCantActividades()<<" cantidadDeAsociados: "
    <<zona.obtenerTotalCantidadAsociados()<< " coordinador: " << *(zona.coordinador) << " nombreZona: "
    << zona.nombreZona;
    return os;
   /* os << static_cast<const Region &>(zona) << " coordinador: " << *(zona.coordinador) << " nombreZona: "
       << zona.nombreZona;
    return os;*/
}

void Zona::agregar(Region *zona) {
    zonaLista.push_back(zona);
}

int Zona::obtenerTotalCantActividades() const {
    int cantidad=0;
    for(int i=0;i<zonaLista.size();i++){
        cantidad+=zonaLista[i]->obtenerTotalCantActividades();
    }

    return cantidad;
}

double Zona::obtenerTotalPresupuesto() const {

    double cantidad=0;
    for(int i=0;i<zonaLista.size();i++){
        cantidad+=zonaLista[i]->obtenerTotalPresupuesto();
    }
    return cantidad;
}

int Zona::obtenerTotalCantidadAsociados() const {
    int cantidad=0;
    for(int i=0;i<zonaLista.size();i++){
        cantidad+=zonaLista[i]->obtenerTotalCantidadAsociados();
    }
    return cantidad;
}

string Zona::toString() const {
   stringstream s;
   s<<(*this);
   return s.str();
}
