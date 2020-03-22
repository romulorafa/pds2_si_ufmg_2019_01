#include "doctest.h"
#include "cavalo.h"
#include <string>


TEST_CASE("1 - construtor + getters") {
    Cavalo cavalo(3, 3);
    int x = cavalo.get_pos_x();
    CHECK_EQ(x, 3);
    int y = cavalo.get_pos_y();
    CHECK_EQ(y, 3);
    std::string nome = cavalo.get_nome();
    CHECK_EQ(nome, "Cavalo");
}

TEST_CASE("2 - pode_mover") {
    Cavalo cavalo(3, 3);
    CHECK_EQ(cavalo.pode_mover(3, 6), false);
    CHECK_EQ(cavalo.pode_mover(2, 9), false);
    CHECK_EQ(cavalo.pode_mover(4, 5), true);
    CHECK_EQ(cavalo.pode_mover(1, 4), true);
    CHECK_EQ(cavalo.pode_mover(5, 2), true);
    CHECK_EQ(cavalo.pode_mover(2, 5), true);
}

TEST_CASE("3 - Posicao atual") {
    Cavalo cavalo(2, 4);
    CHECK_THROWS(cavalo.move(5, 7));
    CHECK_THROWS(cavalo.move(4, 8));
    CHECK_EQ(cavalo.get_pos_x(), 2);
    CHECK_EQ(cavalo.get_pos_y(), 4);
    cavalo.move(3, 6);
    CHECK_EQ(cavalo.get_pos_x(), 3);
    CHECK_EQ(cavalo.get_pos_y(), 6);
}

TEST_CASE("4 - Nome") {
    Cavalo cavalo(1, 3);
    CHECK_EQ(cavalo.get_nome(), "Cavalo");
    cavalo.move(0, 5);
    CHECK_EQ(cavalo.get_nome(), "Cavalo");
}
