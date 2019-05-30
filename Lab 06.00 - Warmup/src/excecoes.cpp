#include "excecoes.h"

// *MÉTODOS
const char* TrianguloInvalidoException::what() const noexcept{
    return ("Triangulo invalido");
}