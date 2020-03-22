#include "doctest.h"
#include "rainha.h"
#include <string>


TEST_CASE("1 - construtor + getters") {
    Rainha rainha(1, 2);
    int x = rainha.get_pos_x();
    CHECK_EQ(x, 1);
    int y = rainha.get_pos_y();
    CHECK_EQ(y, 2);
    std::string nome = rainha.get_nome();
    CHECK_EQ(nome, "Rainha");
}

TEST_CASE("2 - pode_mover") {
    Rainha rainha(2, 3);
    CHECK_EQ(rainha.pode_mover(3, 6), false);
    CHECK_EQ(rainha.pode_mover(2, 9), false);
    CHECK_EQ(rainha.pode_mover(2, 6), true);
    CHECK_EQ(rainha.pode_mover(6, 3), true);
    CHECK_EQ(rainha.pode_mover(0, 1), true);
}

TEST_CASE("3 - Posicao atual") {
    Rainha rainha(2, 6);
    CHECK_THROWS(rainha.move(5, 7));
    CHECK_THROWS(rainha.move(4, 8));
    CHECK_EQ(rainha.get_pos_x(), 2);
    CHECK_EQ(rainha.get_pos_y(), 6);
    rainha.move(6, 6);
    CHECK_EQ(rainha.get_pos_x(), 6);
    CHECK_EQ(rainha.get_pos_y(), 6);
}

TEST_CASE("4 - Nome") {
    Rainha rainha(1, 3);
    CHECK_EQ(rainha.get_nome(), "Rainha");
    rainha.move(5, 3);
    CHECK_EQ(rainha.get_nome(), "Rainha");
}
