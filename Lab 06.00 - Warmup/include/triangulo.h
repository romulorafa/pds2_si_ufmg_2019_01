#ifndef PDS2_TRIANGULO_H
#define PDS2_TRIANGULO_H

#include <cmath>
#include <iostream>
#include "excecoes.h"

using namespace std;

enum Tipo {EQUILATERO, ISOSCELES, ESCALENO};

class Triangulo {
private:
    double x, y, z;

public:
    Triangulo();
    ~Triangulo();
    Triangulo(double x, double y, double z);

    void verifica_condicoes(double x, double y, double z);
    Tipo determinar_tipo();

};

#endif /*   PDS2_TRIANGULO_H    */
