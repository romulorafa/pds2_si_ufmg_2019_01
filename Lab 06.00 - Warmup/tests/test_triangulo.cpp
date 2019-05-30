#include "doctest.h"
#include "triangulo.h"

TEST_CASE("Teste01 VPL - Equilatero")
{
    Triangulo t1(5, 5, 5);
    Tipo tipo = t1.determinar_tipo();
    CHECK_EQ(tipo, 0);
}

TEST_CASE("Teste02 VPL - Excecao Negativo")
{
    CHECK_THROWS(new Triangulo(5, -5, 5));
}

TEST_CASE("Teste03 VPL - Isósceles")
{
    Triangulo t3(4, 4, 5);
    Tipo tipo = t3.determinar_tipo();
    CHECK_EQ(tipo, 1);
}

TEST_CASE("Teste04 VPL - Isósceles")
{
    Triangulo t4(5, 4, 4);
    Tipo tipo = t4.determinar_tipo();
    CHECK_EQ(tipo, 1);
}

TEST_CASE("Teste05 VPL - Isósceles")
{
    Triangulo t5(5, 4, 5);
    Tipo tipo = t5.determinar_tipo();
    CHECK_EQ(tipo, 1);
}

TEST_CASE("Teste06 VPL - Escaleno")
{
    Triangulo t6(3, 4, 5);
    Tipo tipo = t6.determinar_tipo();
    CHECK_EQ(tipo, 2);
}

TEST_CASE("Teste07 VPL - Excecao Lados Tamanho Zero")
{
    CHECK_THROWS(new Triangulo(0, 0, 0));
}