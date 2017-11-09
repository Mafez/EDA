#include <iostream>
int const N = 100000;
typedef int tVector[N];

using namespace std;

void seg_log_max(tVector vector, int tamanio, int &p_Ini, int &q_Fin);
void resuelve();

/*
P={0 <= tamanio <= long(vector)}
func seg_log_max(int vector[],int tamanio, inout int p_Ini, inout int q_Fin)
Q={max p,q: 0 <= p < q <= tamanio ^ (paratodo i,j : p <= i <= j <= q : vector[i] = vector[j]) : q - p}
*/
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
		int p_Ini = 0, q_Fin = 0;
		seg_log_max(vector, tamanio, p_Ini, q_Fin);
		cout << p_Ini << " " << q_Fin << endl;
		cin >> tamanio;
	}
}

void seg_log_max(tVector vector, int tamanio, int &p_Ini, int &q_Fin){

	/*int p = 0, q = 1
	if (vector[p] != vector[q]){	
		p++;
		q++;
	}
	else{
		p_Ini = p;
		q_Fin = q;
		vect++;
		maximo++;
	}
	while (q < tamanio){

		if (vect > maximo){
			p_Ini = p;
			q_Fin = q;
			maximo = vect;
		}

		if (vector[q] == vector[p]){
			q++;
			vect++;
		}

		else{
			p = q;
			q++;
			vect = 0;
		}
	}*/
	int p = 0, q = 1, vect = 0, maximo = 0;

	while (q < tamanio){

		if (vector[p] == vector[q]){
			q++;
			vect++;
		}
		else{
			if (vect > maximo){
				p_Ini = p;
				q_Fin = q - 1;
				maximo = vect;
			}		
			p = q;
			q++;
			vect = 0;
		}
	}
	if (vect > maximo && vector[tamanio - 2] == vector[tamanio - 1]){
		p_Ini = p;
		q_Fin = q - 1;
		maximo = vect;
	}
}