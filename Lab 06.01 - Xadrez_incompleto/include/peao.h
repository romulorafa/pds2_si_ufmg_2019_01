#ifndef PDS2_PEAO_H
#define PDS2_PEAO_H

#define FIRST_MOVE_DIST 2
#define MOVE_DIST 1

#include "peca.h"

class Peao : public Peca {
private:
    bool _first_move;
public:
	Peao(int x, int y);
	
	bool pode_mover(int x, int y) override;
	void move(int x, int y) override;
};

#endif
