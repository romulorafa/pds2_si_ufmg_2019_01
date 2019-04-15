#ifndef PDS2_PACKAGE_H
#define PDS2_PACKAGE_H

#include <iostream>
#include <string>

using namespace std;

class Package
{
protected:
    unsigned int peso;
    unsigned int custo_por_quilo;
    string nome;
    string endereco;
public:
    Package(unsigned int _peso, unsigned int _custo_por_quilo, string _nome, string _endereco);
    virtual double calculate_cost();
    unsigned int get_peso();
    unsigned int get_custo_por_quilo();
};

#endif /* PDS2_PACKAGE_H */
