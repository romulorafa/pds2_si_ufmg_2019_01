#ifndef PDS2_AQUECEDOR_H
#define PDS2_AQUECEDOR_H

class Aquecedor
{
private:
    double temperatura;
public:
    // *CONSTRUTOR
    Aquecedor();

    // *MÉTODOS
    void aquecer();
    void resfriar();
    double get_temperatura();
};

#endif /* PDS2_AQUECEDOR_H */