#include <iostream>
using namespace std;

/*
P={ 0<=n<=long(v) && 0<= ini <=mitad <=fin <=long(v)}
func cima(int v[], int ini, int fin, int mitad) //return k
Q ={k = max w : 0 < = w < n :v[w] }
*/

int cima(int v[], int ini, int fin, int mitad){
	if (v[ini] > v[ini + 1]){
		return ini;
	}
	else if (v[fin - 1] < v[fin]){
		return fin;
	}
	else if (v[mitad] < v[mitad + 1]){
		return cima(v, mitad, fin, (mitad + fin) / 2);
	}
	else if (v[mitad - 1] > v[mitad]){
		return cima(v, ini, mitad, (ini + mitad) / 2);
	}
	else{
		return mitad;
	}
}

bool resuelve(){
	int numero;

	int v[100000];

	cin >> numero;

	if (numero == 0)
		return false;
	else{
		int i = 0;
		while (i < numero){
			cin >> v[i];
			i++;
		}
		cout << cima(v, 0, numero -1, (numero -1)/ 2) << endl;
		return true;
	}
}


int main(){
	while (resuelve());
	return 0;
}