#include <iostream>
using namespace std;

const int N = 100000;


void bocata(int v[N], int longitud, int &bocadillo, bool &encontrado) {
	int bocata = 0, tamanio = v[longitud - 1];

	for (int i = longitud - 2; i >= 0; i--)
	{
		if (v[i] == tamanio && v[i] > bocata) {
			bocata = v[i];
			bocadillo = i;
			encontrado = true;
		}
		tamanio += v[i];
	}
}

bool resuelve() {
	int i, longitud, bocadillo = 0;
	bool encontrado = false;

	cin >> longitud;
	if (longitud == 0)
		return false;

	int v[N];
	for (i = 0; i < longitud; i++) {
		cin >> v[i];
	}
	bocata(v, longitud, bocadillo, encontrado);
	
	if (!encontrado) {
		cout << "NO" << endl;//funcion
	}
	else {
		cout << "SI " << bocadillo + 1 << endl;//funcion
	}
	
	return true;
}


int main() {

	while (resuelve());

	return 0;
}