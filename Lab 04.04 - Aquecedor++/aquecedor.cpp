#include <iostream>
#include "aquecedor.h"

using namespace std;

// *MÉTODOS
// **construtor
Aquecedor::Aquecedor(){
    this->temperatura = 20.00;
    this->temperatura_minima = 10.00;
    this->temperatura_maxima = 40.00;
    this->fator_de_incremento = 5.00;
}
Aquecedor::Aquecedor(double _temperatura_inicial){
    this->temperatura = _temperatura_inicial;
}
Aquecedor::Aquecedor(double _temperatura_inicial, double _fator_de_incremento){
    this->temperatura = _temperatura_inicial;
    this->fator_de_incremento = _fator_de_incremento;
}

// **aquecer: aumentar a temperatura em cinco graus
void Aquecedor::aquecer(){
    if (this->temperatura < this->temperatura_maxima){
        this->temperatura = this->temperatura + this->fator_de_incremento;
    }
    /*else{
        cout << "ALERTA: ação não executada!" << endl;
        cout << "Temperatura de (" << this->temperatura << "o) para (" << this->temperatura + this->fator_de_incremento << "o) supera Temperatura Máxima (" << this->temperatura_maxima << "o) permitida!!" << endl;
    }*/
}

// **resfriar: diminuir a temperatura em cinco graus
void Aquecedor::resfriar(){
    if (this->temperatura > this->temperatura_minima){
        this->temperatura = this->temperatura - this->fator_de_incremento;
    }
    /*else{
        cout << "ALERTA: ação não executada!" << endl;
        cout << "Temperatura de (" << this->temperatura << "o) para (" << this->temperatura - this->fator_de_incremento << "o) supera Temperatura Mínima (" << this->temperatura_minima << "o) permitida!!" << endl;
    }*/
    
}

// **get_temperatura: retornar a temperatura do aquecedor
double Aquecedor::get_temperatura(){
    return (this->temperatura);
}

// **set_fator_de_incremento: atualiza fator de incremento do aquecedor
void Aquecedor::set_fator_de_incremento(double _fator_de_incremento){
    this->fator_de_incremento = _fator_de_incremento;
}