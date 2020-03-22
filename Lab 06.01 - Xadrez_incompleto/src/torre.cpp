#include "torre.h"

Torre::Torre(int x, int y) :
	Peca("Torre", x, y)
{}

bool Torre::pode_mover(int x, int y){
    if(this->isDentroTab(x, y) == false){
        return false;
    }
    if(this->isHorizontal(x, y) == true){
        return true;
    }
    if(this->isVertical(x, y) == true){
        return true;
    }
    return false;
}