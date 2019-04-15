#include <iostream>
#include "rectangle.h"

using namespace std;

// *MÉTODOS
// **construtor: sem paâmetros
Rectangle::Rectangle(){
    this->width = 1;
    this->height = 1;
}

// **construtor: com parâmetros
Rectangle::Rectangle(double largura, double altura){
    this->set_width(largura);
    this->set_height(altura);
    this->width = largura;
    this->height = altura;
}

// **set_width: verifica valor de entrada ref. a largura
int Rectangle::set_width(double largura){
    if ((largura > 0) && (largura < 20)){
        this->width = largura;
        return(largura);
    }
    else{
        return(1);
    }
}

// **set_height: verifica valor de entrada ref. a altura
int Rectangle::set_height(double altura){
    if ((altura > 0) && (altura < 20)){
        this->height = altura;
        return (altura);
    }
    else{
        return (1);
    }
    
}

// **get_width: retorna o valor ref. a largura
double Rectangle::get_width(){
    return (this->width);
}

// **get_height: retorna o valor ref. a altura
double Rectangle::get_height(){
    return (this->height);
}

// **get_perimeter: calcula do perímetro retânulo
double Rectangle::get_perimeter(){
    double perimetro;

    perimetro = (2*this->width) + (2*this->height);
    return (perimetro);
}

// **get_area: calcula a área do retângulo
double Rectangle::get_area(){
    double area;

    area = (this->width) * (this->height);
    return (area);
}