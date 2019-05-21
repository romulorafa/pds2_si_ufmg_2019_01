#ifndef PDS2_CIRCULO_H
#define PDS2_CIRCULO_H

#include "forma2d.h"

#define CIRCULO "circulo"

class Circulo : public Forma2D
{
private:
    string nome;
    string cor;
    double raio;

public:
    Circulo();
    ~Circulo();
    Circulo(string _cor, double _raio);

    virtual string get_nome();
    virtual string get_cor();
    virtual double get_area();
    virtual double get_perimetro();
};

#endif /* PDS2_CIRCULO_H */