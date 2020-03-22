#include <iostream>

#include "tabuleiro.h"
#include "posicao.h"

int main(){

	Tabuleiro *t = new Tabuleiro();
	
	Posicao a = Posicao(0, 1);
	Posicao b = Posicao(0, 2);

	t->move(a, b);

	delete t;
    return 0;
}
