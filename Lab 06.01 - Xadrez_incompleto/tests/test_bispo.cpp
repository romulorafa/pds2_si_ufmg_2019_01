#include "doctest.h"
#include "bispo.h"
#include <string>


TEST_CASE("1 - construtor + getters") {
    Bispo bispo(2, 2);
    int x = bispo.get_pos_x();
    CHECK_EQ(x, 2);
    int y = bispo.get_pos_y();
    CHECK_EQ(y, 2);
    std::string nome = bispo.get_nome();
    CHECK_EQ(nome, "Bispo");
}

TEST_CASE("2 - pode_mover") {
    Bispo bispo(2, 2);
    CHECK_EQ(bispo.pode_mover(2, 3), false);
    CHECK_EQ(bispo.pode_mover(1, 2), false);
    CHECK_EQ(bispo.pode_mover(3, 4), false);
    CHECK_EQ(bispo.pode_mover(4, 0), true);
    CHECK_EQ(bispo.pode_mover(6, 6), true);
}

TEST_CASE("3 - Posicao atual") {
    Bispo bispo(2, 6);
    CHECK_THROWS(bispo.move(2, 7));
    CHECK_THROWS(bispo.move(4, 8));
    CHECK_EQ(bispo.get_pos_x(), 2);
    CHECK_EQ(bispo.get_pos_y(), 6);
    bispo.move(6, 2);
    CHECK_EQ(bispo.get_pos_x(), 6);
    CHECK_EQ(bispo.get_pos_y(), 2);
}

TEST_CASE("4 - Nome") {
    Bispo bispo(1, 3);
    CHECK_EQ(bispo.get_nome(), "Bispo");
    bispo.move(3, 5);
    CHECK_EQ(bispo.get_nome(), "Bispo");
}
