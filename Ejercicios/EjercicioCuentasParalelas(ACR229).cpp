#include <iostream>

/*
P={0<=n<=long(v)}
int suma ( int v[], int n)  // return sum
Q={sum = sumatorio W : 0<= w <n : v[w]} 
I= 0<=sum < 2*10^9 ^ 0 <= i <=n
cota = n-i;

*/
/*
P={0<=n<=long(v)}
int cuantas ( int v[], int n, int suma)  // return contador
Q={cuantas = #x : 0<= x <n : suma_parcial(v,n) == suma - suma_parcial(v,n) ]}
suma_parcial(v,n) = sumatorio J : 0<= J <n : v[J];
*/



using namespace std;

const int N = 100000;
bool resuelve();
int suma(int v[], int n);
int cuantas(int v[], int n, int suma);

int main(){
	
	while (resuelve());

	return 0;
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

	cout << cuantas(v, longitud, suma(v,longitud)) << endl;//funcion
	
	
	return true;
}


int suma(int v[], int n){
	int sum = 0;

	for (int i = 0; i < n; i++){
		sum += v[i];
	}

	return sum;
}


int cuantas(int v[], int n, int suma){

	int contador = 0, suma_parcial = 0;
	if (suma == 0){
		contador = 1;
	}
	for (int i = 0; i < n; i++){
		suma_parcial += v[i];
		if (suma_parcial == suma - suma_parcial){
			contador++;
		}
	}


	return contador;
}