#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "destinationpackages.h"

using namespace std;

// *MÉTODOS
// **construtor DestinationPackage padrão
DestinationPackages::DestinationPackages(){}

// **destrutor DestinationPackage padrão
DestinationPackages::~DestinationPackages(){}

// **add_package: guarda um novo pacote no mapa
void DestinationPackages::add_package(Package *pacote)
{
    string nome;

    nome= pacote->get_nome();
    this->destinatario[nome].push_back(pacote);
}

// **custo_total: computa o custo de todos os usuários
double DestinationPackages::custo_total()
{
    double custo_total;
    map<string, vector<Package *>>::iterator i;
    
    for (i = this->destinatario.begin(); i != this->destinatario.end(); i++){
        custo_total = custo_total + this->custo_total(i->first);
    }

    return custo_total;
}

// **custo_total: computa os custos de um único usuário
double DestinationPackages::custo_total(string _nome)
{
    double custo_total = 0;

    for (unsigned int i = 0; i < this->destinatario[_nome].size(); i++){
        custo_total = custo_total + this->destinatario[_nome][i]->calculate_cost();
    }

    return custo_total;
}