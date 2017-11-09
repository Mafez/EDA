#include <iostream>

using namespace std;

void aprenMul(int n, int v[], int &posIni, int &posFin, int &contador){
	int posIniAux = 0, posFinAux = 0, resultado = 1, contadorAux = 0;

	for (int i = 0; i < n; i++){
		resultado *= v[i];
		contadorAux++;
		if (resultado == 0 && contadorAux > contador){
			posFin = i - 1;
			posIni = i - contadorAux;
			contador = contadorAux;
			contadorAux = 0;
		}

	}



}


void resuleve(){
	int numCasos, n, posIni = 0, posFin = 0, contador = 0;
	int v[10000];

	cin >> numCasos;

	while (numCasos > 0){
		cin >> n;
		for (int i = 0; i < n; i++){

			cin >> v[i];
		}

		aprenMul(n, v, posIni, posFin, contador);
		if (contador == 0)
			cout << "SIGUE BUSCANDO" << endl;
		else
			cout << contador << "-->" << "[" << posIni << "," << "]" << endl;

		numCasos--;
		posIni = 0;
		posFin = 0;
	}

}

int main(){




	return 0;

}
