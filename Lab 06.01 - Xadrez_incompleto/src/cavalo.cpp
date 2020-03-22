#include "cavalo.h"

Cavalo::Cavalo(int x, int y) :
	Peca("Cavalo", x, y)
{}

bool Cavalo::pode_mover(int x, int y){
    if(this->isDentroTab(x, y) == false){
        return false;
    }
    if(abs(x - this->get_pos_x()) == MOVE_DIST_A && abs(y - this->get_pos_y()) == MOVE_DIST_B){
        return true;
    }
    if(abs(x - this->get_pos_x()) == MOVE_DIST_B && abs(y - this->get_pos_y()) == MOVE_DIST_A){
        return true;
    }
    return false;
}