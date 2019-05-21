#ifndef PDS2_CUBO_H
#define PDS2_CUBO_H

#include "forma3d.h"

#define CUBO "cubo"

class Cubo : public Forma3D
{
private:
    string nome;
    string cor;
    double lado;

public:
    Cubo();
    ~Cubo();
    Cubo(string _cor, double _lado);

    virtual string get_nome();
    virtual string get_cor();
    virtual double get_area();
    virtual double get_perimetro();
    virtual double get_volume();
};

#endif /* PDS2_CUBO_H */
