#include "circulo.h"

// *MÉTODOS
// **construtor Circulo padrão
Circulo::Circulo(){}

// **destrutor Circulo padrão
Circulo::~Circulo(){}

// **destrutor Circulo com parâmetros
Circulo::Circulo(string _cor, double _raio){
    this->nome = CIRCULO;
    this->cor = _cor;
    this->raio = _raio;
}

// **get_nome: retorna nome
string Circulo::get_nome(){
    return (this->nome);
}

// **get_cor: retorna cor
string Circulo::get_cor(){
    return (this->cor);
}

// **get_area: retorna area
double Circulo::get_area()
{
    double area;

    area = M_PI * (this->raio * this->raio);
    
    return (area);
}

// **get_perimetro: retorna perimetro
double Circulo::get_perimetro()
{
    double perimetro;

    perimetro = 2 * M_PI * this->raio;
    
    return (perimetro);
}