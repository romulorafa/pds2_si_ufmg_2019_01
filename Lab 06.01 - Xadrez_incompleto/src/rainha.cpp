#include "rainha.h"

Rainha::Rainha(int x, int y) :
	Peca("Rainha", x, y)
{}

bool Rainha::pode_mover(int x, int y){
    if(this->isDentroTab(x, y) == false){
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