#include "esfera.h"

// *MÉTODOS
// **construtor Esfera padrão
Esfera::Esfera() {}

// **destrutor Esfera padrão
Esfera::~Esfera() {}

// **construtor Esfera com parâmetros
Esfera::Esfera(string _cor, double _raio)
{
    this->nome = ESFERA;
    this->cor = _cor;
    this->raio = _raio;
}

// **get_nome: retorna o nome
string Esfera::get_nome()
{
    return (this->nome);
}

// **get_cor: retorna cor
string Esfera::get_cor()
{
    return (this->cor);
}

// **get_area: retorna area
double Esfera::get_area()
{
    double area;

    area = 4 * M_PI * (this->raio * this->raio);
    
    return (area);
}

// **get_perimetro: retorna perimetro
double Esfera::get_perimetro()
{
    double perimetro;

    perimetro = 2 * M_PI * this->raio;
    
    return (perimetro);
}

// **get_volume: retorna volume
double Esfera::get_volume()
{
    double volume;

    volume = (4 * M_PI * (this->raio * this->raio * this->raio)) / 3;
    
    return (volume);
}