#include <iostream>


using namespace std;


int longitud(int v[], int numSecuencia, int &ini, int &fin){

	int max = 0, contador = 0;

	for (int i = 0; i < numSecuencia; i++){

		if (v[i] == 0){
			contador = 0;
		}
		else
		{
			contador++;
		}
		if (max < contador){
			max = contador;
			ini = i - (contador -1);
			fin = i;
		}

	}
	return max;
}

void resuelve(){

	int numCasos;
	int V[10000];
	cin >> numCasos;
	int numSecuencia;
	for (int i = 0; i < numCasos; i++){
		cin >> numSecuencia;
		for (int j = 0; j < numSecuencia; j++){
			cin >> V[j];
		}
		int ini = 0, fin = 0;
		int resultado = longitud(V, numSecuencia, ini, fin);
		if (resultado == 0){
			cout << "SIGUE BUSCANDO" << endl;
		}
		else{
			cout << resultado << " -> [" << ini << "," << fin << "]" << endl;
		}
	}


}




int main(){

	resuelve();

	return 0;
}