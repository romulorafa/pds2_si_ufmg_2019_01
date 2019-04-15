#include <iostream>
#include <cstring>
#include <string>
#include <cctype>

#define A 65
#define Z 90
#define a 97
#define z 122
#define num_0 48
#define num_9 57

using namespace std;

int main()
{
    // **VARIÁVEIS LOCAIS
    long long int n, solucao;
    string sequencia;
    cin >> n;

    // **OPERAÇÕES
    for (long long int i = 0; i < n; i++){

        cin >> sequencia;
        
        if (sequencia[0] == sequencia[2])
        {
            solucao = (sequencia[0] - num_0) * (sequencia[2] - num_0);
        }
        else if (!islower(sequencia[1]))
        {
            solucao = (sequencia[2] - num_0) - (sequencia[0] - num_0);
        }
        else
        {
            solucao = (sequencia[0] - num_0) + (sequencia[2] - num_0);
        }
        cout << solucao << endl;
        solucao = 0;
    }
    return 0;
}