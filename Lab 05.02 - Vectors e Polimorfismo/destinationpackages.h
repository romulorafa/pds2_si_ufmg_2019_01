#ifndef PDS2_DESTINATIONPACKAGES_H
#define PDS2_DESTINATIONPACKAGES_H

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "package.h"

using namespace std;

class DestinationPackages : public Package
{
private:
    map<string, vector<Package*>> destinatario;
public:   
    DestinationPackages();
    ~DestinationPackages();

    void add_package(Package *pacote);
    double custo_total();
    double custo_total(string _nome);
};

#endif /* PDS2_DESTINATIONPACKAGES_H */