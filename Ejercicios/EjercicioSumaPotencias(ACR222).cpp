#include <iostream>

using namespace std;



int sumaPotencias(int x, long long int n){
	long long int suma = 1;
	int potencia = 1;
	for (long long int i = 1; i <= n; i++){
		potencia = potencia * x;
		potencia = potencia % 1000007;
		suma = suma + potencia;
	}

	return suma % 1000007;
}

void resuelve(){

	int x, n;
	cin >> x >> n;
	

	while (!cin.fail()){
		long long int resultado = sumaPotencias(x, n);

		cout << resultado << endl;
		cin >> x >> n;
	}




}


int main(){

	resuelve();

	return 0;
}