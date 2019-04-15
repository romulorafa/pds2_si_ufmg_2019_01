#include <iostream>
#include "aquecedor.h"

using namespace std;

int main(){
    Aquecedor *aquecedor = new Aquecedor();

    while(1){
        cout << aquecedor->get_temperatura() << endl;
        aquecedor->aquecer();
        cout << aquecedor->get_temperatura() << endl;
        aquecedor->aquecer();
        cout << aquecedor->get_temperatura() << endl;
        aquecedor->resfriar();
        cout << aquecedor->get_temperatura() << endl;
        system("pause");
    }
    return 0;
}