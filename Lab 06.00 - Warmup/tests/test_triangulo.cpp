#include "doctest.h"
#include "triangulo.h"

TEST_CASE("Teste01 VPL - Equilatero")
{
    Triangulo t(5, 5, 5);
    Tipo tipo = t.determinar_tipo();
    CHECK_EQ(tipo, 0);
}

TEST_CASE("Teste02 VPL - Excecao Negativo")
{
    CHECK_THROWS(new Triangulo(5, -5, 5));
}