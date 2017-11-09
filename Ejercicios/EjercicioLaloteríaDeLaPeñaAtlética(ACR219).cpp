#include <iostream>


using namespace std;


int comprobarPares(int V[], int numDecimos){
	int pares = 0, i = 0;

	while (i < numDecimos){
		if (V[i] % 2 == 0){
			pares++;
		}
		i++;
	}

	return pares;
}

void resuelve(){

	int numCasos, i = 0, numDecimos;
	int V[10000];
	cin >> numCasos;

	while (i < numCasos){

		cin >> numDecimos;
		for (int j = 0; j < numDecimos; j++){
			cin >> V[j];
		}
		cout << comprobarPares(V, numDecimos) << endl;
		i++;
	}

}


int main(){

	resuelve();
	system("pause");
	return 0;
}