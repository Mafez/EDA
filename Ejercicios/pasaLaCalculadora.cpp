#include <iostream>

/*
P={0<=n<=long(v)}
func   () // return
Q={}
*/



using namespace std;
int escogerRespuesta(int &suma, int numero, int indice){
	int respuesta,  total;
	do{
		if (numero == 1){
			int v[4] = { 7, 4, 3, 2/*2, 3, 4, 7*/ };
			respuesta = v[indice];
		}
		else if (numero == 2){
			int v[4] = { 8, 5, 3, 1/*1, 3, 5, 8 */ };
			respuesta = v[indice];
		}
		else if (numero == 3){
			int v[4] = { 9, 6, 2, 1/*1, 2, 6, 9*/ };
			respuesta = v[indice];
		}
		else if (numero == 4){
			int v[4] = { 7, 6, 5, 1/*1, 5, 6, 7*/ };
			respuesta = v[indice];
		}
		else if (numero == 5){
			int v[4] = { 8, 6, 4, 2/*2, 4, 6, 8*/ };
			respuesta = v[indice];
		}
		else if (numero == 6){
			int v[4] = { 9, 5, 4, 3/*3, 4, 5, 9 */ };
			respuesta = v[indice];
		}
		else if (numero == 7){
			int v[4] = { 9, 8, 4, 1/*1, 4, 8, 9*/ };
			respuesta = v[indice];
		}
		else if (numero == 8){
			int v[4] = { 9, 7, 5, 2/*2, 5, 7, 9*/ };
			respuesta = v[indice];
		} 
		else if (numero == 9){
			int v[4] = { 8, 7, 6, 3/* 3, 6, 7, 8*/ };
			respuesta = v[indice];
		}
		
		total = suma + respuesta;
		indice++;
	} while (total > 31 && indice < 4);
	suma = total;
	return respuesta;
}

bool esSolucion(int suma, int numero){
	bool acierto = false;
	//int  i = 3;
	//int respuesta = escogerRespuesta(suma, numero, 3);
	//suma = suma + respuesta;
	if (suma > 30){
		acierto = true;
	}
	return acierto;
}


void calculadora(int &suma, int &numero, bool &jugador/*, int &indice*/){
	int respuesta = 0,i = 0;
	bool acierto = true;
	while (suma < 31 && i < 4){
		respuesta = escogerRespuesta(suma, numero, i);
		//if (esValida(suma, respuesta)){
		if (esSolucion(suma, respuesta ) && jugador){
			cout << "PIERDE" << endl;		
		}
		else if(esSolucion(suma,respuesta) && !jugador){
			cout << "GANA" << endl;
		}
		else{
			//indice++;
			if (jugador){
				jugador = false;
			}
			else{
				jugador = true;
			}
			calculadora(suma, respuesta, jugador/*,indice*/);
		}
	}


	//}
	//cout << "PIERDE" << endl;
}


bool resuelve(){
	int  longitud, suma, numero;

	cin >> longitud;
	for (int i = 0; i < longitud; i++){
		bool jugador = true;
		cin >> suma >> numero;
		calculadora(suma, numero,jugador);
	}

	

	


	return true;
}

int main(){

	while (resuelve());

	return 0;
}


