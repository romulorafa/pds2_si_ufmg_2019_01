#include "triangulo.h"

// *CONSTRUTOR
// **Triangulo - construtor padrão
Triangulo::Triangulo(){

}

// **Triangulo - construtor com parâmetros
Triangulo::Triangulo(double x, double y, double z){

    try
    {
        if(verifica_condicoes(x, y, z)){
            this->x = x;
            this->y = y;
            this->z = z;
        }
    }
    catch(TrianguloInvalidoException::exception& e)
    {
        cerr << e.what() << '\n';
    }
}

// *DESTRUTOR
// **Triangulo - destrutor padrão
Triangulo::~Triangulo(){

}

// *MÉTODOS
// **verifica_condições: dados os valores dos lados, verifica se formam um triangulo válido
bool Triangulo::verifica_condicoes(double x, double y, double z){

    if ((this->x <= 0) || (this->y <= 0) || (this->z <= 0)){
        throw TrianguloInvalidoException();
        return false;
    }
    if ((abs(y - z) < x) && (x < abs(y + z))){
        throw TrianguloInvalidoException();
        return false;
    }
    else{
        return true;
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