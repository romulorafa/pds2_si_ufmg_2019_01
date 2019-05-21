#ifndef PDS2_OVERNIGHTPACKAGE_H
#define PDS2_OVERNIGHTPACKAGE_H

#include <iostream>
#include <string>
#include "package.h"

using namespace std;

class OverNightPackage : public Package
{
private:
    unsigned int taxa_adicional_por_quilo;
public:
    OverNightPackage(unsigned int _peso, unsigned int _custo_por_quilo, unsigned int _taxa_adicional_por_quilo, string _nome, string _endereco);
    double calculate_cost() override;
    unsigned int get_peso();
    unsigned int get_custo_por_quilo();
};

#endif /* PDS2_OVERNIGHTPACKAGE_H */