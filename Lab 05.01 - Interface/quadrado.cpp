#include "quadrado.h"

// *MÉTODOS
// **construtor Quadrado padrão
Quadrado::Quadrado(){}

// **destrutor Quadrado padrão
Quadrado::~Quadrado(){}

// **construtor Quadrado com parâmetros
Quadrado::Quadrado(string _cor, double _lado){
    this->nome = QUADRADO;
    this->cor = _cor;
    this->lado = _lado;
}

// **get_nome: retorna o nome
string Quadrado::get_nome(){
    return (this->nome);
}

// **get_cor: retorna cor
string Quadrado::get_cor(){
    return (this->cor);
}

// **get_area: retorna area
double Quadrado::get_area(){
    double area;

    area = this->lado * this->lado;
    return (area);
}

// **get_perimetro: retorna perimetro
double Quadrado::get_perimetro(){
    double perimetro;

    perimetro = 4 * this->lado;
    return (perimetro);
}