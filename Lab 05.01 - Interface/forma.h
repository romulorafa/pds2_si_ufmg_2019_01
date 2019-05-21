#ifndef PDS2_FORMA_H
#define PDS2_FORMA_H

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Forma
{
public:
    virtual string get_nome() = 0;
    virtual string get_cor() = 0;
};

#endif /* PDS2_FORMA_H */
