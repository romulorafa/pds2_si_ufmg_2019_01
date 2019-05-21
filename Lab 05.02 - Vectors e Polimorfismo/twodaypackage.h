#ifndef PDS2_TWODAYPACKAGE_H
#define PDS2_TWODAYPACKAGE_H

#include <iostream>
#include <string>
#include "package.h"

using namespace std;

class TwoDayPackage : public Package
{
private:
    unsigned int taxa_de_envio;
public:
    TwoDayPackage(unsigned int _peso, unsigned int _custo_por_quilo, unsigned int _taxa_de_envio, string _nome, string _endereco);
    double calculate_cost() override;
    unsigned int get_peso();
    unsigned int get_custo_por_quilo();
};

#endif /* PDS2_TWODAYPACKAGE_H */