#include <iostream>

using namespace std;
int const N = 100000;

bool abrirPuerta(int n, int v[],int &numGent){
	bool abrir = true, cambio = false;
	int contadorCambio = 0;
	
	if (n == 0){
		abrir = false;
	}

	for (int i = n - 1; i >= 0; i--)
	{
		// Si ultima es par no abre
		if (v[i] % 2 == 0 && i == n - 1){
			abrir = false;
		}

		// Si ha empezado en impar y se encuentra un par se produce cambio
		else if (v[i] % 2 == 0 && !cambio){
			cambio = true;
			numGent++;
		}

		// Si ha habido un cambio y se encuentra un impar no abre
		else if (v[i] % 2 != 0 && cambio){
			abrir = false;
		}

		//Si son todos impares
		else if (i == 0 && !cambio){
			abrir = false;
		}
		
		// Si ha habido un cambio, cuenta el numero de pares
		else if (v[i] % 2 == 0 && cambio){
			numGent++;
		}
	}


	
	
	
	return abrir;
}

void resuelve(){
	int casosDePrueba = 0, n = 0, numGent = 0;
	int v[N];
	cin >> casosDePrueba ;
	

	while (casosDePrueba > 0){

		cin >> n;
	for (int i = 0; i < n; i++){
		cin >> v[i];
	}

	

	if (abrirPuerta(n, v, numGent))
		cout << "SI" << " " << numGent <<  endl;
	else
		cout << "NO" << endl;
		
			casosDePrueba--;
			numGent = 0;
	}


}

int main(){


	resuelve();
	

	return 0;
}