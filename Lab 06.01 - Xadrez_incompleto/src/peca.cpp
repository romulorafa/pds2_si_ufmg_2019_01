#include "peca.h"
#include <iostream>

Peca::Peca(std::string nome, int x, int y) :
	_nome(nome),
    _posicao(x, y)
{}

int Peca::get_pos_x() const{
    return _posicao.get_pos_x();
}

int Peca::get_pos_y() const{
    return _posicao.get_pos_y();
}

std::string Peca::get_nome() const{
    return _nome;
}

Posicao Peca::get_posicao() const{
	return _posicao;
}

bool Peca::pode_mover(int x, int y){
	if(isDentroTab(x, y) == false){
	    return false;
	}
	return true;
}

bool Peca::isDentroTab(int x, int y){
    if(x > POS_MAX || x < POS_MIN){
		return false;
	}
	if(y > POS_MAX || y < POS_MIN){
		return false;
	}
	return true;
}

bool Peca::isHorizontal(int x, int y){
    if(this->get_pos_y() == y){
        if(this->get_pos_x() != x){
            return true;
        }
    }
    return false;
}

bool Peca::isVertical(int x, int y){
    if(this->get_pos_x() == x){
        if(this->get_pos_y() != y){
            return true;
        }
    }
    return false;
}

bool Peca::isDiagonal(int x, int y){
    int aux_x = abs(x - this->get_pos_x());
    int aux_y = abs(y - this->get_pos_y());
    if(aux_x == aux_y){
        return true;
    }
    return false;
}

void Peca::move(int x, int y){
	if(this->pode_mover(x, y) == false){
		throw MovimentoInvalidoException();
		return;
	}
	Posicao nova = Posicao(x, y);
	_posicao = nova;
}