#include <iostream>
#include "aquecedor.h"

using namespace std;

// *MÉTODOS
// **construtor
Aquecedor::Aquecedor(){
    this->temperatura = 20.00;
}

// **aquecer: aumentar a temperatura em cinco graus
void Aquecedor::aquecer(){
    this->temperatura = this->temperatura + 5;
}

// **resfriar: diminuir a temperatura em cinco graus
void Aquecedor::resfriar(){
    this->temperatura = this->temperatura - 5;
}

// **get_temperatura: retornar a temperatura do aquecedor
double Aquecedor::get_temperatura(){
    return (this->temperatura);
}