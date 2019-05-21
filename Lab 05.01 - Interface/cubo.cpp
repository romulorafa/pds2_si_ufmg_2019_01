#include "cubo.h"

// *MÉTODOS
// **construtor Cubo padrão
Cubo::Cubo() {}

// **destrutor Cubo padrão
Cubo::~Cubo() {}

// **construtor Cubo com parâmetros
Cubo::Cubo(string _cor, double _lado)
{
    this->nome = CUBO;
    this->cor = _cor;
    this->lado = _lado;
}

// **get_nome: retorna o nome
string Cubo::get_nome()
{
    return (this->nome);
}

// **get_cor: retorna cor
string Cubo::get_cor()
{
    return (this->cor);
}

// **get_area: retorna area
double Cubo::get_area()
{
    double area;

    area = 6 * (this->lado * this->lado);

    return (area);
}

// **get_perimetro: retorna perimetro
double Cubo::get_perimetro()
{
    double perimetro;

    perimetro = 12 * this->lado;

    return (perimetro);
}

// **get_volume: retorna volume
double Cubo::get_volume(){
    double volume;

    volume = pow(this->lado, 3);

    return (volume);
}