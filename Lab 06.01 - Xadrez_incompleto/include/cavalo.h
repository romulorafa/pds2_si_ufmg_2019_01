#ifndef PDS2_CAVALO_H
#define PDS2_CAVALO_H

#include "peca.h"

#define MOVE_DIST_A 1
#define MOVE_DIST_B 2

class Cavalo : public Peca {
public:
    Cavalo(int x, int y);
    
    bool pode_mover(int x, int y) override;
};

#endif