#include <iostream>
#include <string>
#include "data.h"

using namespace std;

int main(){
    int dd, mm, aaaa;
    Data *data;
    cin >> dd >> mm >> aaaa;
    data = new Data(dd, mm, aaaa);
    cout << data->get_dia() << endl;
    cout << data->get_mes() << endl;
    cout << data->get_ano() << endl;
    cout << data->get_data_curto() << endl;
    cout << data->get_data_longo() << endl;
}