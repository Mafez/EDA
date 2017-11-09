#include <iostream>
#include <string>
using namespace std;


bool esPalindromo(string cadena ,int i, int longitud){
	bool realy = true;
	if (cadena == ""){
		return true;
	}
	if (toupper(cadena[i]) == toupper(cadena[longitud])){
		if (i < longitud)
			realy = esPalindromo(cadena, i + 1, longitud - 1);
	}
	else{
		realy= false;
	}
	return realy;
}

void quitarEspacios(string &cadena){
	

	for (int i = 0; i < cadena.length(); i++){
		if (cadena[i] == ' '){
			cadena.erase(i, 1);
			i--;
		}
	}
}



bool resuelve(){
	string cadena;
	
	getline(cin,cadena);
	if (cadena == "XXX")
		return false;
	else{
			
		bool loEs;
		quitarEspacios(cadena);
		int i = 0, longitud = cadena.length() - 1;
		loEs = esPalindromo(cadena, i, longitud);
		if (loEs)
			cout << "SI" << endl;
		else
			cout << "NO" << endl;
		return true;
	}
}

int main(){
	while (resuelve());
	return 0;
}