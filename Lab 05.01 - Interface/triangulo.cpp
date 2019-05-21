#include "triangulo.h"

// *MÉTODOS

// **construtor Triangulo padrão
Triangulo::Triangulo(){}

// **destrutor Triangulo padrão
Triangulo::~Triangulo(){}

// **construtor Triangulo com parâmetros
Triangulo::Triangulo(string _cor, double _lado1, double _lado2, double _lado3){
    this->nome = TRIANGULO;
    this->cor = _cor;
    this->lado1 = _lado1;
    this->lado2 = _lado2;
    this->lado3 = _lado3;
}

// **get_nome: retorna nome
string Triangulo::get_nome(){
    return (this->nome);
}

// **get_cor: retorna cor
string Triangulo::get_cor(){
    return (this->cor);
}

// **get_area: retorna area
double Triangulo::get_area(){
    double perimetro, area;

    perimetro = (this->get_perimetro())/2;
    area = sqrt((perimetro * (perimetro - this->lado1) * (perimetro - this->lado2) * (perimetro - this->lado3)));

    return (area);
}

// **get_perimetro: retorna perimetro
double Triangulo::get_perimetro(){
    double perimetro;
    
    perimetro = this->lado1 + this->lado2 + this->lado3;
    
    return (perimetro);
}
