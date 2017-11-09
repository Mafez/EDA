#include <iostream>

using namespace std;

bool resuelve();
int cuadrado(int num);

int main(){

	while (resuelve());
	system("pause");
	return 0;
}


bool resuelve(){
	int i = 0, longitud = 0, num = 0, resultado = 0;

	cin >> longitud;

	while (i < longitud){
		cin >> num;		
		cout << cuadrado(num) << endl;
		i++;
	}

	return false;
}



int cuadrado(int n){

	int resultado;
	if (n == 0){
		resultado = 0;
	}
	else if (n > 0){
		resultado = cuadrado(n - 1) + 2 * (n - 1) + 1;
	}
	return resultado;
}