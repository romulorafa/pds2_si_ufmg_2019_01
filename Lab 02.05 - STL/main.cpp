#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // *VARIÁVEIS LOCAIS
    float cont_palavras;
    float percentual_palavra;
    string linha, palavra;
    map<string, int> dicionario;
    map<string, int>::iterator i;

    // *OPERAÇÕES
    cont_palavras = 0.0;
    while (getline(cin, linha))
    {
        transform(linha.begin(), linha.end(), linha.begin(), ::tolower);
        istringstream linha_stream(linha);
        while (getline(linha_stream, palavra, ' '))
        {
            dicionario[palavra]++;
            cont_palavras++;
        }
    }

    cout << fixed << setprecision(2);
    for (i = dicionario.begin(); i != dicionario.end(); i++)
    {
        cout << i->first << " " << i->second << " " << (i->second / cont_palavras) << endl;
    }
    return 0;
}
