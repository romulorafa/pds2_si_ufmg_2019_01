#include <iostream>
#include <map>

using namespace std;

int main()
{
    // **VARIÁVEIS LOCAIS
    long long int n, m;
    char l;

    // **OPERAÇÕES
    while (cin >> n)
    {
        // **VARIÁVEIS LOCAIS LOOP
        map<int, int> pe_esquerdo;
        map<int, int> pe_direito;
        map<int, int>::iterator it;
        long long int numero_de_pares_corretos = 0;

        for (long long int i = 0; i < n; i++)
        {
            cin >> m >> l;

            if (l == 'E')
            {
                pe_esquerdo[m]++;
            }
            else if (l == 'D')
            {
                pe_direito[m]++;
            }
        }
        for (it = pe_esquerdo.begin(); it != pe_esquerdo.end(); ++it)
        {
            if (pe_esquerdo.count(it->first) > 0)
            {
                numero_de_pares_corretos += min(it->first, pe_direito[it->first]);
            }
        }
        cout << numero_de_pares_corretos << endl;
    }
    return 0;
}