#include <iostream>
#include <string>
#include "package.h"

using namespace std;

// *MÉTODOS
// **construtor Package
Package::Package(unsigned int _peso, unsigned int _custo_por_quilo, string _nome, string _endereco){
    this->peso = _peso;
    this->custo_por_quilo = _custo_por_quilo;
    this->nome = _nome;
    this->endereco = _endereco;
}

// **calculate_cost: calcula o custo do pacote através do peso * custo
double Package::calculate_cost(){
    double custo;

    custo = this->peso * this->custo_por_quilo;
    return (custo);
}

// **get_peso: retorna o peso do pacote
unsigned int Package::get_peso(){
    return (this->peso);
}

// **get_custo_por_quilo: retorna o custo por quilo do pacote
unsigned int Package::get_custo_por_quilo(){
    return (this->custo_por_quilo);
}