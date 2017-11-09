#include <iostream>

using namespace std;

bool resuelve();
int base(int num, int potencia, int resultado);

int main(){

	while (resuelve());

	return 0;
}


bool resuelve(){
	int i = 0, longitud = 0, num = 0, potencia = 1, resultado = 0;

	cin >> longitud;

	while (i < longitud){
		cin >> num;
		cout << base(num, potencia, resultado) << endl;
		i++;
	}
	
	return false;
}



int base(int num, int potencia, int resultado) {
	
	resultado += num % 10 * potencia;
	num /= 10;
	potencia *= 6;
	if (num == 0){
		return resultado;
	}
	base(num, potencia, resultado);

}