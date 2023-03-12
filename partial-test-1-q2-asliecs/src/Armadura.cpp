//
// Created by ESCINF on 10/04/2022.
//

#include "Armadura.h"

string Armadura::tipoDeMetal(int codDeArmadura) {
    switch (codDeArmadura) {
        case 1:
            return "Aluminio";
        case 2:
            return "Titanio";
        case 3:
            return "Acero";
        case 4:
            return "Oro";
    }

}

int Armadura::nivelDeResistenciaMax(int codDeArmadura) {
    switch (codDeArmadura) {
        case 1:
            return 50;
        case 2:
            return 95;
        case 3:
            return 85;
        case 4:
            return 70;
    }
}

double Armadura::valorEnDolares(int codDeArmadura) {
    switch (codDeArmadura) {
        case 1:
            return 2.5;
        case 2:
            return 3.4;
        case 3:
            return 2.9;
        case 4:
            return 1.7;
    }
}

