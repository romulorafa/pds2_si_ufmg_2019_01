#include "posicao.h"

Posicao::Posicao(int x, int y){
    _pos_x = x;
    _pos_y = y;
    this->set_pos_key();
}

int Posicao::get_pos_x() const{
    return _pos_x;
}

int Posicao::get_pos_y() const{
    return _pos_y;
}

int Posicao::get_pos_key() const{
    return _pos_key;
}

void Posicao::set_pos_key(){
	_pos_key = (_pos_y*8 + _pos_x);
}