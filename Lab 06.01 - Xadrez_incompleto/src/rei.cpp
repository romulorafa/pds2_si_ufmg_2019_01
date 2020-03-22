#include "rei.h"

Rei::Rei(int x, int y) :
	Peca("Rei", x, y)
{}

bool Rei::pode_mover(int x, int y){
    if(this->isDentroTab(x, y) == false){
        return false;
    }
    if(x > this->get_pos_x() + MOVE_DIST || x < this->get_pos_x() - MOVE_DIST){
        return false;
    }
    if(y > this->get_pos_y() + MOVE_DIST || y < this->get_pos_y() - MOVE_DIST){
        return false;
    }
    if(this->isHorizontal(x, y) == true){
        return true;
    }
    if(this->isVertical(x, y) == true){
        return true;
    }
    if(this->isDiagonal(x, y) == true){
        return true;
    }
    return false;
}