#include <iostream>
#include <string>
using namespace std;


bool polidivisible(long long int num, int longitud){

	if (longitud == 0){
		return true;
	}
	if (num % longitud == 0){
		polidivisible(num /= 10, longitud - 1);
	}
	else{
		return false;
	}
}

int longNum(long long int numero){
	int longitud = 0;
	while (numero) {
		longitud++;
		numero /= 10;
	}
	return longitud;
}

bool resuelve(){
	long long int numero;
	cin >> numero;
	if (!cin){
		return false;
	}else{

		if (polidivisible(numero, longNum(numero))){
			cout << "POLIDIVISIBLE" << endl;
		}
		else{
			cout << "NO POLIDIVISIBLE" << endl;
		}	
		
	}
	return true;
}


int main(){
	while (resuelve());
	return 0;
}