// CONSTANTE: define constantes globais no programa
#define PI 3.14

// TADS: define estruturas de dados e seus métodos e/ou funções
struct Circunferencia
{
    // *atributos
    int xc;
    int yc;
    int raio;

    // *operações
    // **construtor
    Circunferencia(double val_xc, double val_yc, double val_raio);
    // **métodos
    double calcular_area();
    bool possui_intersecao(Circunferencia &c);
};