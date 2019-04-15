#include <iostream>
#include <string>
#include "data.h"

using namespace std;

Data::Data(int dd, int mm, int aaaa){
    this->dia = dd;
    this->mes = mm;
    this->ano = aaaa;
}

int Data::get_dia(){
    return(this->dia);
}

int Data::get_mes(){
    return (this->mes);
}

int Data::get_ano(){
    return (this->ano);
}

string Data::get_data_curto(){
    string saida;
    
    saida = to_string(this->dia) + "/" + to_string(this->mes) + "/" + to_string(this->ano);
    return(saida);
}

string Data::get_data_longo(){
    const string meses[13] = {"", "janeiro", "fevereiro", "março", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    string saida;

    saida = to_string(this->dia) + " de " + meses[this->mes] + " de " + to_string(this->ano);
    return(saida);
}