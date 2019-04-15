#include <iostream>
#include <iomanip>
#include <string>
#include "estudante.h"

// *CONSTANTES: algumas cons, não obrigatórios, mas para aprender
#define ALUNOS 10
#define NOTAS 5
#define CASAS_DECIMAIS 2
#define IMPRIMIR 3

// *STRUCT: defini uma nova estrtura para armazenar todos os RSG calculados a partir do método "calcular_rsg()"
struct RSG
{
    int matricula;
    std::string nome;
    float rsg;
};

using namespace std;

int main()
{
    // *varáveis locais
    Estudante alunos[ALUNOS];
    RSG alunos_rsg[ALUNOS];

    // *operacões
    // **carregando vetor com infos de 10 alunos
    for (int i = 0; i < ALUNOS; i++)
    { // refs.: https://www.codesdope.com/cpp-structure/
        cin >> alunos[i].matricula;
        cin >> alunos[i].nome;
        for (int j = 0; j < NOTAS; j++)
        {
            cin >> alunos[i].notas[j];
        }
    }
    // **método calcular_rsg() para cada aluno
    for (int i = 0; i < ALUNOS; i++)
    {
        alunos_rsg[i].matricula = alunos[i].matricula;
        alunos_rsg[i].nome = alunos[i].nome;
        alunos_rsg[i].rsg = alunos[i].calcular_rsg();
    }
    cout << endl;
    // **orderna por maior RSG e menor matricula
    RSG aux;
    for (int i = 0; i < ALUNOS - 1; i++)
    {
        for (int j = i + 1; j < ALUNOS; j++)
        {
            if (alunos_rsg[j].rsg >= alunos_rsg[i].rsg)
            {
                if (alunos_rsg[j].rsg > alunos_rsg[i].rsg)
                {
                    aux.matricula = alunos_rsg[j].matricula;
                    aux.nome = alunos_rsg[j].nome;
                    aux.rsg = alunos_rsg[j].rsg;
                    alunos_rsg[j].matricula = alunos_rsg[i].matricula;
                    alunos_rsg[j].nome = alunos_rsg[i].nome;
                    alunos_rsg[j].rsg = alunos_rsg[i].rsg;
                    alunos_rsg[i].matricula = aux.matricula;
                    alunos_rsg[i].nome = aux.nome;
                    alunos_rsg[i].rsg = aux.rsg;
                }
                else if (alunos_rsg[j].matricula < alunos_rsg[i].matricula)
                {
                    aux.matricula = alunos_rsg[j].matricula;
                    aux.nome = alunos_rsg[j].nome;
                    aux.rsg = alunos_rsg[j].rsg;
                    alunos_rsg[j].matricula = alunos_rsg[i].matricula;
                    alunos_rsg[j].nome = alunos_rsg[i].nome;
                    alunos_rsg[j].rsg = alunos_rsg[i].rsg;
                    alunos_rsg[i].matricula = aux.matricula;
                    alunos_rsg[i].nome = aux.nome;
                    alunos_rsg[i].rsg = aux.rsg;
                }
            }
        }
    }
    // **imprimir os 3 primeiros
    for (int i = 0; i < IMPRIMIR; i++)
    {
        cout << alunos_rsg[i].matricula << " ";
        cout << alunos_rsg[i].nome << " ";
        cout << fixed << setprecision(CASAS_DECIMAIS) << alunos_rsg[i].rsg << endl;
    }
    return 0;
}