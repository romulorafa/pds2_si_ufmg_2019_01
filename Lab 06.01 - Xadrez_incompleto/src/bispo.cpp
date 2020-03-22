#include "bispo.h"

Bispo::Bispo(int x, int y) :
	Peca("Bispo", x, y)
{}

bool Bispo::pode_mover(int x, int y){
    if(this->isDentroTab(x, y) == false){
        return false;
    }
    if(this->isDiagonal(x, y) == true){
        return true;
    }
    return false;
}
