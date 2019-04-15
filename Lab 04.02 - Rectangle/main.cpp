#include <iostream>
#include "rectangle.h"

using namespace std;

int main(){
    double largura, altura;
    
    while (cin >> largura >> altura){
        Rectangle *rectangle = new Rectangle(largura, altura);
        cout << "Largura: " << rectangle->set_width(largura) << endl;
        cout << "Altura: " << rectangle->set_height(altura) << endl;
        cout << "Largura: " << rectangle->get_width() << endl;
        cout << "Altura: " << rectangle->get_height() << endl;
        cout << "Area: " << rectangle->get_area() << endl;
        cout << "Perimetro: " << rectangle->get_perimeter() << endl;
    }
    return 0;
}