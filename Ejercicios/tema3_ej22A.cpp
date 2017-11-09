#include <iostream>
int const N = 100000;
typedef int tVector[N];

using namespace std;

int seg_log_max(tVector vector, int tamanio);
void resuelve();

int main(){

	resuelve();
	return 0;
}

void resuelve(){
	tVector vector;
	int tamanio, num;

	cin >> tamanio;

	while (tamanio != 0){

		for (int i = 0; i < tamanio; i++){
			cin >> num;
			vector[i] = num;
		}
		cout << seg_log_max(vector, tamanio) << endl;
		cin >> tamanio;
	}
}

int seg_log_max(tVector vector, int tamanio){

	int p = 0, q = 1, vect = 0, maximo = 0;
	if (vector[p] != 0){
		p++;
		q++;
	}
	else{
		vect++;
		maximo++;
	}
	while (q < tamanio){
		if (vector[q] == 0){
			q++;
			vect++;
		}
			
		else{
			p = q;
			q++;
			vect = 0;
		}
		if (vect > maximo)
			maximo = vect;
	
	}
	return maximo;
}