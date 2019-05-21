#ifndef PDS2_QUADRADO_H
#define PDS2_QUADRADO_H

#include "forma2d.h"

#define QUADRADO "quadrado"

class Quadrado : public Forma2D
{
private:
    string nome;
    string cor;
    double lado;

public:
    Quadrado();
    ~Quadrado();
    Quadrado(string _cor, double _lado);

    virtual string get_nome();
    virtual string get_cor();
    virtual double get_area();
    virtual double get_perimetro();
};

#endif /* PDS2_QUADRADO_H */
