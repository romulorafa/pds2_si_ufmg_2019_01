#include "tabuleiro.h"

Tabuleiro::Tabuleiro(){
    Peca *rei_b = new Rei(4, 0);
    Peca *rainha_b = new Rainha(3, 0);
    Peca *bispo_b1 = new Bispo(2, 0);
    Peca *bispo_b2 = new Bispo(5, 0);
    Peca *cavalo_b1 = new Cavalo(1, 0);
    Peca *cavalo_b2 = new Cavalo(6, 0);
    Peca *torre_b1 = new Torre(0, 0);
    Peca *torre_b2 = new Torre(7, 0);
    Peca *peao_b1 = new Peao(0, 1);
    Peca *peao_b2 = new Peao(1, 1);
    Peca *peao_b3 = new Peao(2, 1);
    Peca *peao_b4 = new Peao(3, 1);
    Peca *peao_b5 = new Peao(4, 1);
    Peca *peao_b6 = new Peao(5, 1);
    Peca *peao_b7 = new Peao(6, 1);
    Peca *peao_b8 = new Peao(7, 1);

    Peca *rei_p = new Rei(4, 7);
    Peca *rainha_p = new Rainha(3, 7);
    Peca *bispo_p1 = new Bispo(2, 7);
    Peca *bispo_p2 = new Bispo(5, 7);
    Peca *cavalo_p1 = new Cavalo(1, 7);
    Peca *cavalo_p2 = new Cavalo(6, 7);
    Peca *torre_p1 = new Torre(0, 7);
    Peca *torre_p2 = new Torre(7, 7);
    Peca *peao_p1 = new Peao(0, 6);
    Peca *peao_p2 = new Peao(1, 6);
    Peca *peao_p3 = new Peao(2, 6);
    Peca *peao_p4 = new Peao(3, 6);
    Peca *peao_p5 = new Peao(4, 6);
    Peca *peao_p6 = new Peao(5, 6);
    Peca *peao_p7 = new Peao(6, 6);
    Peca *peao_p8 = new Peao(7, 6);

    _tabuleiro[rei_b->get_posicao()] = rei_b;
    _tabuleiro[rainha_b->get_posicao()] = rainha_b;
    _tabuleiro[bispo_b1->get_posicao()] = bispo_b1;
    _tabuleiro[bispo_b2->get_posicao()] = bispo_b2;
    _tabuleiro[cavalo_b1->get_posicao()] = cavalo_b1;
    _tabuleiro[cavalo_b2->get_posicao()] = cavalo_b2;
    _tabuleiro[torre_b1->get_posicao()] = torre_b1;
    _tabuleiro[torre_b2->get_posicao()] = torre_b2;
    _tabuleiro[peao_b1->get_posicao()] = peao_b1;
    _tabuleiro[peao_b2->get_posicao()] = peao_b2;
    _tabuleiro[peao_b3->get_posicao()] = peao_b3;
    _tabuleiro[peao_b4->get_posicao()] = peao_b4;
    _tabuleiro[peao_b5->get_posicao()] = peao_b5;
    _tabuleiro[peao_b6->get_posicao()] = peao_b6;
    _tabuleiro[peao_b7->get_posicao()] = peao_b7;
    _tabuleiro[peao_b8->get_posicao()] = peao_b8;

    _tabuleiro[rei_p->get_posicao()] = rei_p;
    _tabuleiro[rainha_p->get_posicao()] = rainha_p;
    _tabuleiro[bispo_p1->get_posicao()] = bispo_p1;
    _tabuleiro[bispo_p2->get_posicao()] = bispo_p2;
    _tabuleiro[cavalo_p1->get_posicao()] = cavalo_p1;
    _tabuleiro[cavalo_p2->get_posicao()] = cavalo_p2;
    _tabuleiro[torre_p1->get_posicao()] = torre_p1;
    _tabuleiro[torre_p2->get_posicao()] = torre_p2;
    _tabuleiro[peao_p1->get_posicao()] = peao_p1;
    _tabuleiro[peao_p2->get_posicao()] = peao_p2;
    _tabuleiro[peao_p3->get_posicao()] = peao_p3;
    _tabuleiro[peao_p4->get_posicao()] = peao_p4;
    _tabuleiro[peao_p5->get_posicao()] = peao_p5;
    _tabuleiro[peao_p6->get_posicao()] = peao_p6;
    _tabuleiro[peao_p7->get_posicao()] = peao_p7;
    _tabuleiro[peao_p8->get_posicao()] = peao_p8;

}

Tabuleiro::~Tabuleiro(){
    for(auto it : _tabuleiro){
        delete it.second;
    }
}

Peca *Tabuleiro::get_peca(Posicao pos){
    return _tabuleiro[pos];
}

void Tabuleiro::move(Posicao ini, Posicao fim){
	if(_tabuleiro[ini] == nullptr){
        throw PosicaoSemPecaException();
        return;
    }
    _tabuleiro[ini]->move(fim.get_pos_x(), fim.get_pos_y());
    _tabuleiro[fim] = _tabuleiro[ini];
    auto it = _tabuleiro.find(ini);
    _tabuleiro.erase(it);
}