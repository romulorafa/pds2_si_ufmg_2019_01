#include "triangulo.h"

// *CONSTRUTOR
// **Triangulo - construtor padrão
Triangulo::Triangulo(){

}

// **Triangulo - construtor com parâmetros
Triangulo::Triangulo(double x, double y, double z){
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
int verifica_condicoes(double x, double y, double z){
    bool eh_triangulo;

    eh_triangulo = ((abs(y - z) < x) && (x < (y + z)));

    if (eh_triangulo){
        return 1;
    }
    else{
        throw TrianguloInvalidoException();
        return 0;
    }
}

// **determinar_tipo: retorna um dos três tipos do triangulo
Tipo Triangulo::determinar_tipo(){

    if (verifica_condicoes(this->x, this->y, this->z)){
        if ((this->x == this->y) && (this->y == this->z))
        {
            return (EQUILATERO);
        }
        if ((this->x != y) && (this->y != this->z) && (this->x != this->z))
        {
            return (ESCALENO);
        }
        else
        {
            return (ISOSCELES);
        }
    }
}