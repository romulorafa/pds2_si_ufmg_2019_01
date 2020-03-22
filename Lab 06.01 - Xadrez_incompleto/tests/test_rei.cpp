#include "doctest.h"
#include "rei.h"
#include <string>


TEST_CASE("1 - construtor + getters") {
    Rei rei(1, 2);
    int x = rei.get_pos_x();
    CHECK_EQ(x, 1);
    int y = rei.get_pos_y();
    CHECK_EQ(y, 2);
    std::string nome = rei.get_nome();
    CHECK_EQ(nome, "Rei");
}

TEST_CASE("2 - pode_mover") {
    Rei rei(2, 3);
    CHECK_EQ(rei.pode_mover(2, 9), false);
    CHECK_EQ(rei.pode_mover(0, 3), false);
    CHECK_EQ(rei.pode_mover(2, 0), false);
    CHECK_EQ(rei.pode_mover(3, 3), true);
    CHECK_EQ(rei.pode_mover(2, 2), true);
    CHECK_EQ(rei.pode_mover(3, 4), true);
}

TEST_CASE("3 - Posicao atual") {
    Rei rei(2, 6);
    CHECK_THROWS(rei.move(4, 7));
    CHECK_THROWS(rei.move(2, 3));
    CHECK_EQ(rei.get_pos_x(), 2);
    CHECK_EQ(rei.get_pos_y(), 6);
    rei.move(3, 5);
    CHECK_EQ(rei.get_pos_x(), 3);
    CHECK_EQ(rei.get_pos_y(), 5);
}

TEST_CASE("4 - Nome") {
    Rei rei(1, 3);
    CHECK_EQ(rei.get_nome(), "Rei");
    rei.move(2, 3);
    CHECK_EQ(rei.get_nome(), "Rei");
}
