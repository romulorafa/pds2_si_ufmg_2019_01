#include "doctest.h"
#include "peao.h"
#include <string>


TEST_CASE("1 - construtor + getters") {
    Peao peao(1, 2);
    int x = peao.get_pos_x();
    CHECK_EQ(x, 1);
    int y = peao.get_pos_y();
    CHECK_EQ(y, 2);
    std::string nome = peao.get_nome();
    CHECK_EQ(nome, "Peao");
}

TEST_CASE("2 - pode_mover") {
    Peao peao(2, 3);
    CHECK_EQ(peao.pode_mover(2, 4), true);
    CHECK_EQ(peao.pode_mover(2, 6), false);
    CHECK_EQ(peao.pode_mover(2, 2), false);
    CHECK_EQ(peao.pode_mover(3, 3), false);
    CHECK_EQ(peao.pode_mover(3, 4), false);
    CHECK_EQ(peao.pode_mover(2, 9), false);
}

TEST_CASE("3 - Posicao atual") {
    Peao peao(2, 6);
    CHECK_THROWS(peao.move(5, 7));
    CHECK_THROWS(peao.move(2, 4));
    CHECK_EQ(peao.get_pos_x(), 2);
    CHECK_EQ(peao.get_pos_y(), 6);
    peao.move(2, 7);
    CHECK_EQ(peao.get_pos_x(), 2);
    CHECK_EQ(peao.get_pos_y(), 7);
}

TEST_CASE("4 - Nome") {
    Peao peao(1, 3);
    CHECK_EQ(peao.get_nome(), "Peao");
    peao.move(1, 4);
    CHECK_EQ(peao.get_nome(), "Peao");
}

TEST_CASE("5 - Movimento especial"){
    Peao peao(1, 1);
    peao.move(1, 3);
    CHECK_EQ(peao.get_pos_x(), 1);
    CHECK_EQ(peao.get_pos_y(), 3);
    CHECK_THROWS(peao.move(1, 5));
}
