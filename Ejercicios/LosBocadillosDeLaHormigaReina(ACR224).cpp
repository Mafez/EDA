#include <iostream>


using namespace std;

int tapaSuperior(int V[], int numCortezas){
	int suma = 0;
	int tapa = 0;
	for (int i = numCortezas - 1; i > 0; i--){
		suma = suma + V[i];
		if (V[i - 1] == suma){
			tapa = i;
		}
	}
	return tapa;
}




bool resuelve(){

	int numCortezas, V[100000];
	cin >> numCortezas;

	if (numCortezas > 0){

		for (int i = 0; i < numCortezas; i++){
			cin >> V[i];
		}

		int resultado = tapaSuperior(V, numCortezas);
		if (resultado == 0){
			cout << "NO" << endl;
		}
		else{
			cout << "SI " << resultado << endl;
		}
		return true;
	}
	return false;

}



int main(){




	while (resuelve());


	return 0;

}