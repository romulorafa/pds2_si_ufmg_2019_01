#include "doctest.h"
#include "rectangle.h"

TEST_CASE("1: Testa construtor vazio") {
    CHECK_NOTHROW(Rectangle());
}

TEST_CASE("2: Testa construtor com parâmetros") {
    CHECK_NOTHROW(Rectangle(2, 2));
}

TEST_CASE("3: Testa se construtor com parametros funcions") {
    Rectangle rectangle = Rectangle(3, 5);
    CHECK(rectangle.get_width() == 3);
    CHECK(rectangle.get_height() == 5);
}

TEST_CASE("4: Testa getters e setters") {
    Rectangle rectangle = Rectangle();
    CHECK(rectangle.get_width() == 1);
    CHECK(rectangle.get_height() == 1);
    
    rectangle.set_width(2);
    CHECK(rectangle.get_width() == 2);
    CHECK(rectangle.get_height() == 1);
    
    rectangle.set_height(2);
    CHECK(rectangle.get_width() == 2);
    CHECK(rectangle.get_height() == 2);
}

TEST_CASE("5: Testa area") {
    Rectangle rectangle = Rectangle(9, 9);
    CHECK(rectangle.get_area() == 81);
    
    Rectangle rectangle2 = Rectangle(10, 10);
    CHECK(rectangle2.get_area() == 100);
}

TEST_CASE("5: Testa perimetro") {
    Rectangle rectangle = Rectangle(0.25, 0.25);
    CHECK(rectangle.get_perimeter() == 1);
}