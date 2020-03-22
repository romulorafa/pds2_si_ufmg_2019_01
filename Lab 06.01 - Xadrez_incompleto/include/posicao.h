#ifndef PDS2_POSICAO_H
#define PDS2_POSICAO_H

class Posicao {
private:
    int _pos_x;
    int _pos_y;
    int _pos_key;

public:
	Posicao(int x, int y);

    int get_pos_x() const;
    int get_pos_y() const;
    int get_pos_key() const;

    void set_pos_key();
};

struct PosicaoComparator {
	bool operator()(const Posicao &pos1, const Posicao &pos2) const{
		return pos1.get_pos_key() < pos2.get_pos_key();
	}
};

#endif