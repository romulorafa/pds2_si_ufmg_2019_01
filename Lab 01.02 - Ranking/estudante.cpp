#include <iostream>
#include <iomanip>
#include <string>
#include "estudante.h"

// *CONSTANTES: algumas cons, não obrigatórios, mas para aprender
#define NOTAS 5

float Estudante::calcular_rsg()
{
    // *atributos locais
    float media = 0.00;
    // *operações: calcular o rsg a partir da media das 5 notas do aluno
    for (int i = 0; i < NOTAS; i++)
    {
        media = media + notas[i];
    }
    return (media / NOTAS);
}