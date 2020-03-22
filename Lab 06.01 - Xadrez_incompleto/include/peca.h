#ifndef PDS2_PECA_H
#define PDS2_PECA_H

//#include "tabuleiro.h"
#include "posicao.h"
#include "excecoes.h"
#include <iostream>
#include <string>
#include <cmath>

#define POS_MAX 7
#define POS_MIN 0

class Tabuleiro;

class Peca {
protected:
    std::string _nome;
    Posicao _posicao;
    
public:
    Peca(std::string nome,int x, int y);
    virtual ~Peca(){}

    int get_pos_x() const;
    int get_pos_y() const;
    std::string get_nome() const;
    Posicao get_posicao() const;

    virtual bool pode_mover(int x, int y);
    virtual void move(int x, int y);
    
    bool isDentroTab(int x, int y);
    bool isHorizontal(int x, int y);
    bool isVertical(int x, int y);
    bool isDiagonal(int x, int y);

};

#endif