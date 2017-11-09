#include <iostream>

using namespace std;

bool resuelve();
int base(int dividen, int resto, int coef, int resultado);

int main(){

	while (resuelve());

	return 0;
}


bool resuelve(){
	int i = 0, longitud, dividen, resto = 0, coef = 1, resultado = 0;

	cin >> longitud;

	while (i < longitud){
		cin >> dividen;
		cout << base(dividen, resto, coef, resultado) << endl;
		i++;
	}
	
	return false;
}



int base(int dividen, int resto, int coef, int resultado) {
	
	resto = dividen % 6;
	dividen = dividen / 6;
	resultado += (resto*coef);
	coef *= 10;
	if (dividen < 6)
		return resultado + dividen *coef;
	base(dividen, resto, coef, resultado);

		
}