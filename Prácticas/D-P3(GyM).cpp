#include <iostream>
#include <string>

/*Especificacion
P{0 <= tamanio <= long(vector)}
func abadia(tVector vector, int tamanio) //return abadias
Q{abadias = #w: (0 <= w < tamanio) ^ (comprobar): vector[w]}
comprobar = (ParaTodo x : w < x <tamanio :vector[w] > vector[x])
*/

int const N = 100000;
typedef int tVector[N];

using namespace std;

int abadia(tVector vector, int tamanio);
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
		cout << abadia(vector, tamanio) << endl;
		cin >> tamanio;
	}
}

int abadia(tVector vector, int tamanio){

	int abadias = 0, montania = tamanio-1, max = vector[montania];

	while (montania > 0)
	{
		if (max < vector[montania - 1]){
			abadias++;
			max = vector[montania - 1];
		}
		montania--;	
	}
	return abadias + 1;
}