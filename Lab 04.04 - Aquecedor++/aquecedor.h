#ifndef PDS2_AQUECEDOR_H
#define PDS2_AQUECEDOR_H

class Aquecedor
{
private:
    double temperatura, temperatura_minima, temperatura_maxima, fator_de_incremento;
public:
    // *CONSTRUTOR
    Aquecedor();
    Aquecedor(double _temperatura_inicial);
    Aquecedor(double _temperatura_inicial, double _fator_de_incremento);
    
    // *MÉTODOS
    void aquecer();
    void resfriar();
    double get_temperatura();
    void set_fator_de_incremento(double _fator_de_incremento);
};

#endif /* PDS2_AQUECEDOR_H */