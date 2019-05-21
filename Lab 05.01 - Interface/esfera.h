#ifndef PDS2_ESFERA_H
#define PDS2_ESFERA_H

#include "forma3d.h"

#define ESFERA "esfera"

class Esfera : public Forma3D
{
private:
    string nome;
    string cor;
    double raio;

public:
    Esfera();
    ~Esfera();
    Esfera(string _cor, double _raio);

    virtual string get_nome();
    virtual string get_cor();
    virtual double get_area();
    virtual double get_perimetro();
    virtual double get_volume();
};

#endif /* PDS2_ESFERA_H */
