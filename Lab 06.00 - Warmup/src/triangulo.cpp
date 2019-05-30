#include "triangulo.h"

// **Triangulo - construtor com parâmetros
Triangulo::Triangulo(double _x, double _y, double _z){

    if ((_x <= 0) || (_y <= 0) || (_z <= 0) || (abs(_y - _z) >= _x) || (_x >= (_y + _z))){
        throw TrianguloInvalidoException();
    }
    
    this->x = _x;
    this->y = _y;
    this->z = _z;
}

// *MÉTODOS
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