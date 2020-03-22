#include "peao.h"

Peao::Peao(int x, int y) :
	Peca("Peao", x, y),
	_first_move(true)
{}

bool Peao::pode_mover(int x, int y){
    if(this->isDentroTab(x, y) == false){
        return false;
    }
    if(this->isVertical(x, y) == false){
        return false;
    }
    if(y == this->get_pos_y() + MOVE_DIST){
        return true;
    }
    if(_first_move == true){
        if(y == this->get_pos_y() + FIRST_MOVE_DIST){
            return true;
        }
    }
    return false;
}

void Peao::move(int x, int y){
	if(this->pode_mover(x, y) == false){
		throw MovimentoInvalidoException();
		return;
	}
	_first_move = false;
	Posicao nova = Posicao(x, y);
	_posicao = nova;
}