#ifndef PDS2_EXCECOES_H
#define PDS2_EXCECOES_H

#include <stdexcept>

using namespace std;

class TrianguloInvalidoException : public exception {
public:
    virtual const char *what() const noexcept override;
};

#endif /* PDS2_EXCECOES_H   */