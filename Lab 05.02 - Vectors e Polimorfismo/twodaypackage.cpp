#include <iostream>
#include <string>
#include "twodaypackage.h"

using namespace std;

// *MÉTODOS
// **construtor TwoDayPackage
TwoDayPackage::TwoDayPackage(unsigned int _peso, unsigned int _custo_por_quilo, unsigned int _taxa_de_envio, string _nome, string _endereco) : 
    Package(_peso, _custo_por_quilo, _nome, _endereco), taxa_de_envio(_taxa_de_envio){
    this->peso = _peso;
    this->custo_por_quilo = _custo_por_quilo;
    this->taxa_de_envio = _taxa_de_envio;
    this->nome = _nome;
    this->endereco = _endereco;
}

// **calculate_cost: calcula o custo do pacote através do peso * custo
double TwoDayPackage::calculate_cost(){
    double custo;

    custo = this->peso * this->custo_por_quilo + this->taxa_de_envio;
    return (custo);
}

// **get_peso: retorna o peso do pacote
unsigned int TwoDayPackage::get_peso(){
    return (this->peso);
}

// **get_custo_por_quilo: retorna o custo por quilo do pacote
unsigned int TwoDayPackage::get_custo_por_quilo(){
    return (this->custo_por_quilo);
}