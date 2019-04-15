#include <iostream>
#include <iomanip>
#include <cmath>
#include "circunferencia.h"

// OPERAÇÃO 00: construtor
Circunferencia::Circunferencia(double val_xc, double val_yc, double val_raio)
{
    xc = val_xc;
    yc = val_yc;
    raio = val_raio;
}

// OPERAÇÃO 01: método "calcular_area" --> retorna o valor da área da cincunferência.
double Circunferencia::calcular_area()
{
    // *atributos locais
    double area;
    // *código
    area = PI * (raio * raio);
    return (area);
}

// OPERAÇÃO 03: método "possui_intersecao" --> recebe outra circunferência como parâmetro e retorna um bool (true/false)
//                                   indicando se a circunferência atual possua interseção com a passada como parâmetro.
// https://stackoverflow.com/questions/8367512/how-do-i-detect-intersections-between-a-circle-and-any-other-circle-in-the-same
// (R0 - R1)^2 <= (x0 - x1)^2 + (y0 - y1)^2 <= (R0 + R1)^2
bool Circunferencia::possui_intersecao(Circunferencia &c)
{
    // *variaveis locais
    double aux1, aux2, aux3;
    // *código
    aux1 = pow(raio - c.raio, 2);
    aux2 = pow(xc - c.xc, 2) + pow(yc - c.yc, 2);
    aux3 = pow(raio + c.raio, 2);
    if ((aux1 <= aux2) && (aux2 <= aux3))
    {
        return true;
    }
    else
    {
        return false;
    }
}