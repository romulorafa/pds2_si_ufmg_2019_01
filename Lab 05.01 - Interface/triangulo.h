#ifndef PDS2_TRIANGULO_H
#define PDS2_TRIANGULO_H

#include "forma2d.h"

#define TRIANGULO "triangulo"

class Triangulo : public Forma2D
{
private:
    string nome;
    string cor;
    double lado1;
    double lado2;
    double lado3;

public:
    Triangulo();
    ~Triangulo();
    Triangulo(string _cor, double _lado1, double _lado2, double _lado3);

    virtual string get_nome();
    virtual string get_cor();
    virtual double get_area();
    virtual double get_perimetro();
};

#endif /* PDS2_TRIANGULO_H */