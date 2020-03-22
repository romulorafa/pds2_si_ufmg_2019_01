#ifndef PDS2_EXCECOES_H
#define PDS2_EXCECOES_H

#include <stdexcept>

class MovimentoInvalidoException : public std::exception {
    virtual const char* what() const noexcept override;
};

class PosicaoSemPecaException : public std::exception {
    virtual const char* what() const noexcept override;
};

#endif