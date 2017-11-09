#include <iostream>
#include <string>

using namespace std;

int buscar(int vector[]);
void resuelve();

int main(){

	resuelve();
	return 0;
}

void resuelve(){
	
	int tamanio, num;

	cin >> tamanio;
	

	while (tamanio != 0){
		tamanio--;
		int vector[10000] = {0};
		for (int i = 0; i < tamanio; i++){
			cin >> num;
			vector[num-1] = num;
		}

		//insercionOrdenada(vector, tamanio);
		cout << buscar(vector) << endl;
		cin >> tamanio;
	}
}

int buscar(int vector[]){
	int i = 0;
	bool encontrado = false;
	while (!encontrado){

		if (vector[i] != i+1){
			encontrado = true;
		}
		i++;
		
	}
	return i;
}