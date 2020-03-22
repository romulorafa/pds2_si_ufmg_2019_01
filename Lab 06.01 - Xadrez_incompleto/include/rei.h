#ifndef PDS2_REI_H
#define PDS2_REI_H

#include "peca.h"

#define MOVE_DIST 1

class Rei : public Peca {
public:
    Rei(int x, int y);
    
    bool pode_mover(int x, int y) override;
};

#endif