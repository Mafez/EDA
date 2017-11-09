#include <iostream>

/*
P={0<=n<=long(v)}
func   () // return
Q={}
*/



using namespace std;

const int N = 100000;

int equil(int v[], int i, int n, int sumaIz, int &sumaDr){
	int r;
	if (i == n - 1){
		sumaDr = 0;
		r = 0;
	}
	else{
		r = equil(v, i + 1, n, sumaIz + v[i], sumaDr);
	}
	if (sumaIz == sumaDr)
		r++;
	sumaDr += v[i];
	return r;
}

bool resuelve(){
	int i, longitud;

	cin >> longitud;
	if (longitud == 0)
		return false;

	int v[N];
	for (i = 0; i < longitud; i++){
		cin >> v[i];
	}

	cout << "lo que sea" << endl;//funcion


	return true;
}

int main(){

	while (resuelve());

	return 0;
}