#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "triangulo.h"

TEST_CASE("Teste - Equilatero")
{
    Triangulo t1(5, 5, 5);
    Tipo tipo1 = t1.determinar_tipo();
    CHECK_EQ(tipo1, 0);

    Triangulo t2(4, 4, 4);
    Tipo tipo2 = t2.determinar_tipo();
    CHECK_EQ(tipo2, 0);
}

TEST_CASE("Teste - Isósceles")
{

    Triangulo t1(4, 4, 3);
    Tipo tipo1 = t1.determinar_tipo();
    CHECK_EQ(tipo1, 1);

    Triangulo t2(4, 3, 4);
    Tipo tipo2 = t2.determinar_tipo();
    CHECK_EQ(tipo2, 1);

    Triangulo t3(3, 4, 4);
    Tipo tipo3 = t3.determinar_tipo();
    CHECK_EQ(tipo3, 1);
}
TEST_CASE("Teste - Escaleno")
{

    Triangulo t1(5, 4, 3);
    Tipo tipo1 = t1.determinar_tipo();
    CHECK_EQ(tipo1, 2);

    Triangulo t2(3, 5, 4);
    Tipo tipo2 = t2.determinar_tipo();
    CHECK_EQ(tipo2, 2);

    Triangulo t3(4, 3, 5);
    Tipo tipo3 = t3.determinar_tipo();
    CHECK_EQ(tipo3, 2);
}

TEST_CASE("Teste de resistencia - Excecao Negativo")
{
    CHECK_THROWS(new Triangulo(5, -5, 5));
    CHECK_THROWS(new Triangulo(-5, -5, 5));
    CHECK_THROWS(new Triangulo(-5, -5, -5));
    CHECK_THROWS(new Triangulo(-5, -5, 0));
    CHECK_THROWS(new Triangulo(-5, 0, 0));
    CHECK_THROWS(new Triangulo(0, 0, 0));
    CHECK_THROWS(new Triangulo(5, 0, 0));
    CHECK_THROWS(new Triangulo(5, 5, 0));
    CHECK_THROWS(new Triangulo(5, -5, 0));
}