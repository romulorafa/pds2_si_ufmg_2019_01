#include "doctest.h"
#include "aquecedor.h"

TEST_CASE("1: Construtor do Aquecedor") {
    CHECK_NOTHROW(Aquecedor());
}

TEST_CASE("2: Testa getter") {
    Aquecedor aquecedor = Aquecedor();
    CHECK(aquecedor.get_temperatura() == 20);
}

TEST_CASE("3: Testa mudanca") {
    Aquecedor aquecedor = Aquecedor();
    CHECK(aquecedor.get_temperatura() == 20);
    
    aquecedor.aquecer();
    CHECK(aquecedor.get_temperatura() == 25);
    
    aquecedor.aquecer();
    CHECK(aquecedor.get_temperatura() == 30);
    
    aquecedor.resfriar();
    CHECK(aquecedor.get_temperatura() == 25);
}