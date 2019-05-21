#include <iostream>
#include <string>
#include "overnightpackage.h"

using namespace std;

// *MÉTODOS
// **construtor OverNightPackage
OverNightPackage::OverNightPackage(unsigned int _peso, unsigned int _custo_por_quilo, unsigned int _taxa_adicional_por_quilo, string _nome, string _endereco) : 
    Package(_peso, _custo_por_quilo, _nome, _endereco), taxa_adicional_por_quilo(_taxa_adicional_por_quilo){
    this->peso = _peso;
    this->custo_por_quilo = _custo_por_quilo;
    this->taxa_adicional_por_quilo = _taxa_adicional_por_quilo;
    this->nome = _nome;
    this->endereco = _endereco;
}

// **calculate_cost: calcula o custo do pacote através do peso * custo
double OverNightPackage::calculate_cost()
{
    double custo;

    custo = (this->peso * this->custo_por_quilo) + (this->peso * this->taxa_adicional_por_quilo) ;
    return (custo);
}

// **get_peso: retorna o peso do pacote
unsigned int OverNightPackage::get_peso()
{
    return (this->peso);
}

// **get_custo_por_quilo: retorna o custo por quilo do pacote
unsigned int OverNightPackage::get_custo_por_quilo()
{
    return (this->custo_por_quilo);
}