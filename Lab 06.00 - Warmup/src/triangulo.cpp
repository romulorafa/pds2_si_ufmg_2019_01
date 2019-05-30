#include "triangulo.h"

// *CONSTRUTOR
// **Triangulo - construtor padrão
Triangulo::Triangulo(){

}

// **Triangulo - construtor com parâmetros
Triangulo::Triangulo(double x, double y, double z){
    
    if (verifica_condicoes (x, y, z)){
        throw TrianguloInvalidoException();
    }
    
    this->x = x;
    this->y = y;
    this->z = z;    
}

// *DESTRUTOR
// **Triangulo - destrutor padrão
Triangulo::~Triangulo(){

}

// *MÉTODOS
// **verifica_condições: dados o tamanho dos lados, verifica condição de existência de um triângulo
bool verifica_condicoes(double x, double y, double z){

    if ((abs(y - z) < x) && (x < (y + z))){
        return true;
    }
    else{
        return false;
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