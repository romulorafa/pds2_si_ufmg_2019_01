#ifndef PDS2_TABULEIRO_H
#define PDS2_TABULEIRO_H

#define TABULEIRO_SIZE 8

#include "peca.h"
#include "posicao.h"
#include "excecoes.h"
#include "rei.h"
#include "rainha.h"
#include "bispo.h"
#include "cavalo.h"
#include "torre.h"
#include "peao.h"

#include <map>

class Tabuleiro {
private:
    std::map<Posicao, Peca *, PosicaoComparator> _tabuleiro;

public:
    Tabuleiro();
    ~Tabuleiro();
    
    Peca* get_peca(Posicao pos);
    void move(Posicao ini, Posicao fim);
};

#endif