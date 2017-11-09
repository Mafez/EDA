#include <iostream>
#include <string>


int const N = 2500;
typedef int tVector[N];

using namespace std;

bool triangular(tVector vector, int tamanio, int n);
void resuelve();

int main(){

	resuelve();
	return 0;
}

void resuelve(){
	tVector vector;
	int tamanio, num, n;

	cin >> tamanio;
	n = tamanio;
	tamanio = tamanio * tamanio;

	while (tamanio != 0){
		int j = 0, h = 0;
		for (int i = 0; i < tamanio; i++){
			cin >> num;
			if (i != (n + 1) * h){
				vector[j] = num;
				j++;
			}
			else{
				h++;
			}

		}
		tamanio = tamanio * tamanio - n;
		if (triangular(vector, tamanio, n)){
			cout << "SI" << endl;
		}
		else{
			cout << "NO" << endl;
		}

		cin >> tamanio;
		n = tamanio;
		tamanio = tamanio * tamanio;
	}
}

bool triangular(tVector vector, int tamanio, int n){
	bool triangular = true;
	int bucles = 1, bucle = 0, j = 0;

	while (bucles >= 0 && triangular == true){

		while (j < (n - bucles) && triangular == true){
			if (vector[j] != 0){
				triangular = false;
			}
			j++;
		}
		bucles--;
		bucle++;
		j = n * bucle;
	}

	if (!triangular){
		triangular = true;
		j = n - 1;
		bucles = n;
		bucle = 1;

		while (bucles >= 0){

			while (j < (bucles) && triangular == true){
				if (vector[j] != 0){
					triangular = false;
				}
				j++;
			}
			bucles = bucles + n -1;
			bucle++;
			j = (n - 1) * bucle;
		}
	}
	return triangular;
}