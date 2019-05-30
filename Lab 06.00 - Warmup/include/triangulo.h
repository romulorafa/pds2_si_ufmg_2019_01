#ifndef PDS2_TRIANGULO_H
#define PDS2_TRIANGULO_H

#include <cmath>
#include "excecoes.h"

using namespace std;

enum Tipo {EQUILATERO, ISOSCELES, ESCALENO};

class Triangulo {
private:
    double x, y, z;

public:
    // *CONSTRUTOR
    Triangulo(double _x, double _y, double _z);

    // *MÉTODOS
    Tipo determinar_tipo();

};

#endif /*   PDS2_TRIANGULO_H    */
