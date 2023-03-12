//
// Created by Maikol Guzman Alan on 5/17/22.
//

#ifndef PARTIAL_TEST_2_COLEGIADO_SERVICIO_H
#define PARTIAL_TEST_2_COLEGIADO_SERVICIO_H

class Servicio {
public:
    Servicio();

    virtual ~Servicio();
    static double obtenerPresupuesto(int codigo);
    static int obtenerActividadPorAno(int codigo);
    static int obtenerCantidadAsociados(int codigo);

};


#endif //PARTIAL_TEST_2_COLEGIADO_SERVICIO_H
