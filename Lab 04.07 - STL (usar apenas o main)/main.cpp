#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	// *VARIÁVEIS LOCAIS
	long long int a, d;
	
	// *OPERAÇÕES
	while(cin >> a >> d && a != 0 && d != 0){
		// **variáveis locais
		long long int distancia;
		vector<int> atacantes;
		vector<int> defensores;

		// **carregando vetor de atacantes
		for (int i = 0; i < a; i++){
			cin >> distancia;
			atacantes.push_back(distancia);
		}
		// **carregando vetor de defensores
		for (int i = 0; i < d; i++){
			cin >> distancia;
			defensores.push_back(distancia);
		}

		// **ordenador os vetores
		sort(atacantes.begin(), atacantes.end());
		sort(defensores.begin(), defensores.begin());

		// **obtendo menor elemento de atacantes
		long long int menor_atacantes = atacantes[0];

		// **obtendon 2o menor elemento de defensores
		long long int _2omenor_defensores = defensores[0];
		for (int i = 1; i <= defensores.size(); i++){
			if (_2omenor_defensores != defensores[i]){
				_2omenor_defensores = defensores[i];
				break;
			}
		}

		// **verificando impedimento ou não
		if (atacantes[0] < _2omenor_defensores){
			cout << "S" << endl;
		}
		else{
			cout << "N" << endl;
		}
	}
	return 0;
}