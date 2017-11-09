#include <iostream>
#include <string>

int const N = 25000;
typedef int tVector[N];

using namespace std;

int moda(tVector vector, int tamanio);
void insercionOrdenada(int A[], int n);
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
		insercionOrdenada(vector, tamanio);
		cout << moda(vector, tamanio) << endl;
		cin >> tamanio;
	}
}

int moda(tVector vector, int tamanio){

	int maxCont = 0, cont = 0, max = vector[0];

	for (int i = 1; i < tamanio; i++){

		if (vector[i] == vector[i - 1]){
			cont++;
		}
		else{
			cont = 0;
		}
		if (cont > maxCont){
			maxCont = cont;
			max = vector[i];
		}
	}
	return max;
}

void insercionOrdenada(int A[], int n)
{

	int i, j, v;

	for (i = 1; i < n; i++)
	{
		v = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > v)
		{
			A[j + 1] = A[j];
			j--;
		}

		A[j + 1] = v;
	}
}