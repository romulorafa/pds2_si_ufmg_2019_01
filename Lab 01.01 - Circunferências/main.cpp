#include "circunferencia.h"

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double xc1, yc1, r1;
    cin >> xc1 >> yc1 >> r1;
    Circunferencia circ1 = Circunferencia(xc1, yc1, r1);

    double xc2, yc2, r2;
    cin >> xc2 >> yc2 >> r2;
    Circunferencia circ2 = Circunferencia(xc2, yc2, r2);

    cout << fixed << showpoint;
    cout << setprecision(2);

    cout << circ1.calcular_area() << " " << circ1.possui_intersecao(circ2) << endl;
    cout << circ2.calcular_area() << " " << circ2.possui_intersecao(circ1) << endl;

    return 0;
}