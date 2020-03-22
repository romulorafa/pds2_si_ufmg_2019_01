#include "doctest.h"
#include "torre.h"
#include <string>


TEST_CASE("1 - construtor + getters") {
    Torre torre(1, 2);
    int x = torre.get_pos_x();
    CHECK_EQ(x, 1);
    int y = torre.get_pos_y();
    CHECK_EQ(y, 2);
    std::string nome = torre.get_nome();
    CHECK_EQ(nome, "Torre");
}

TEST_CASE("2 - pode_mover") {
    Torre torre(0, 0);
    CHECK_EQ(torre.pode_mover(1, 1), false);
    CHECK_EQ(torre.pode_mover(9, 0), false);
    CHECK_EQ(torre.pode_mover(0, 5), true);
    CHECK_EQ(torre.pode_mover(5, 0), true);
}

TEST_CASE("3 - Posicao atual") {
    Torre torre(1, 1);
    CHECK_THROWS(torre.move(0, 2));
    CHECK_THROWS(torre.move(1, 8));
    CHECK_EQ(torre.get_pos_x(), 1);
    CHECK_EQ(torre.get_pos_y(), 1);
    torre.move(6, 1);
    CHECK_EQ(torre.get_pos_x(), 6);
    CHECK_EQ(torre.get_pos_y(), 1);
}

TEST_CASE("4 - Nome") {
    Torre torre(1, 3);
    CHECK_EQ(torre.get_nome(), "Torre");
    torre.move(5, 3);
    CHECK_EQ(torre.get_nome(), "Torre");
}
