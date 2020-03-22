#include "doctest.h"
#include "tabuleiro.h"

TEST_CASE("Testando criacao do tabuleiro"){
    Tabuleiro tabuleiro;
    Posicao pos_cavalo(1, 0);   //cavalo
    Posicao pos_torre(0, 7);    //torre
    Peca *cavalo = tabuleiro.get_peca(pos_cavalo);
    Peca *torre = tabuleiro.get_peca(pos_torre);
    CHECK_EQ(cavalo->get_nome(), "Cavalo");
    CHECK_EQ(torre->get_nome(), "Torre");
}

TEST_CASE("Testando mover peca"){
    Tabuleiro tabuleiro;
    Posicao pos_cavalo(1, 0);
    Posicao prox(0, 2);
    Peca *cavalo = tabuleiro.get_peca(pos_cavalo);
    CHECK_EQ(cavalo->get_nome(), "Cavalo");
    tabuleiro.move(pos_cavalo, prox);
    Peca *nova = tabuleiro.get_peca(prox);
    CHECK_EQ(nova->get_nome(), "Cavalo");
}

TEST_CASE("Testando throw - posicao sem peca"){
    Tabuleiro tabuleiro;
    Posicao vazio(3, 3);
    Posicao prox(3, 4);
    CHECK_THROWS(tabuleiro.move(vazio, prox));
    
    Posicao torre(0, 7);
    Posicao prox_torre1(3, 7);
    tabuleiro.move(torre, prox_torre1);
    Posicao prox_torre2(5, 7);
    CHECK_THROWS(tabuleiro.move(torre, prox_torre2));
}

TEST_CASE("Testando throw - movimento invalido"){
    Tabuleiro tabuleiro;
    Posicao bispo(5, 0);
    Posicao prox(5, 5);
    CHECK_THROWS(tabuleiro.move(bispo, prox));
    
    Posicao rainha(3, 7);
    Posicao prox2(5, 6);
    CHECK_THROWS(tabuleiro.move(rainha, prox2));
}
