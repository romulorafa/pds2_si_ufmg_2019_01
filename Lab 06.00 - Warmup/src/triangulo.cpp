#include "triangulo.h"

// *CONSTRUTOR
// **Triangulo - construtor padrão
Triangulo::Triangulo(){

}

// **Triangulo - construtor com parâmetros
Triangulo::Triangulo(double x, double y, double z){

    verifica_condicoes(x, y, z);
    this->x = x;
    this->y = y;
    this->z = z;
}

// *DESTRUTOR
// **Triangulo - destrutor padrão
Triangulo::~Triangulo(){

}

// *MÉTODOS
// **verifica_condições: dados os valores dos lados, verifica se formam um triangulo válido
void verifica_condicoes(double x, double y, double z){

    if ((x <= 0) || (y <= 0) || (z <= 0)){
        
    }
}
// **determinar_tipo: retorna um dos três tipos do triangulo
Tipo Triangulo::determinar_tipo(){

    if ((this->x == this->y) && (this->y == this->z)){
        return (EQUILATERO);
    }
    if ((this->x != y) && (this->y != this->z) && (this->x != this->z)){
        return (ESCALENO);
    }
    else{
        return (ISOSCELES);
    }
}