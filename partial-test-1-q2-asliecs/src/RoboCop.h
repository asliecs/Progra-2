//
// Created by Maikol Guzman Alan on 4/8/22.
//

#ifndef PARTIAL_TEST_1_Q2_COLEGIADO_ROBOCOP_H
#define PARTIAL_TEST_1_Q2_COLEGIADO_ROBOCOP_H

#include <ostream>
#include "Robot.h"
#include "Policia.h"
#include "Armadura.h"
class RoboCop: public Robot, public Policia{
private:
    string numSerie;
    int nivelDeDano{};
    int codigoDeArmadura{};
    //Armadura* armadura;
public:
    RoboCop(double nivelDeBateria, int numSensores, const string &nombre, const string &numSerie, int nivelDeDano,
            int codigoDeArmadura);

    RoboCop();

    RoboCop(const string &nombre);

    virtual ~RoboCop();


    Armadura *getArmadura() const;

    void setArmadura(Armadura *armadura);

    const string &getNumSerie() const;

    void setNumSerie(const string &numSerie);

    int getNivelDeDano() const;

    void setNivelDeDano(int nivelDeDano);

    int getCodigoDeArmadura() const;

    void setCodigoDeArmadura(int codigoDeArmadura);

        static string dispara();
    static string detiene();

    string seConfigura() override;

    string seRecarga() override;

    friend ostream &operator<<(ostream &os, const RoboCop &cop);

    /*  const string &getNumSerie() const;

      void setNumSerie(const string &numSerie);

      int getNivelDeDano() const;

      void setNivelDeDano(int nivelDeDano);

      int getCodigoDeArmadura() const;

      void setCodigoDeArmadura(int codigoDeArmadura);*/
};


#endif //PARTIAL_TEST_1_Q2_COLEGIADO_ROBOCOP_H
