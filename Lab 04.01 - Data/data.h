#ifndef PDS2_VPL_DATA_H
#define PDS2_VPL_DATA_H

#include <iostream>
#include <string>

using namespace std;

class Data
{
private:
    int dia, mes, ano;
public:
    // *CONSTRUTOR
    Data(int, int, int);
    // *MÉTODOS
    int get_dia();
    int get_mes();
    int get_ano();
    string get_data_curto();
    string get_data_longo();

};

#endif /* PDS2_VPL_DATA_H */