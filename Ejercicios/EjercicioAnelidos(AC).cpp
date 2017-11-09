#include <iostream>
#include <string>


using namespace std;
//int const N = 10000;


string creceAsi(int fases, string anelido, string v){
	
	
	if (fases == 0){
		anelido += 'C';
		return anelido;
	}
	else{
		for (int i = 0; i < anelido.length(); i++){
			if (anelido[i] == 'A'){
				v += anelido[i];
				v += 'N';
				
			}
			else if (anelido[i] == 'N'){
				v += anelido[i];
				v += 'A';
				
			}

			
		}

		anelido = v;
		v = "";
		
		return creceAsi(fases - 1, anelido, v);
		
		
	
	}
}


bool resuelve(){
	string v, resultado, anelido;
	resultado = "";
	int fases, pos = 0;
	char anelidos;
	anelido  = "";
	cin >> fases >> anelidos;
	v = "";
	anelidos = toupper(anelidos);
	anelido += anelidos;
	if (anelidos == 'C'){
		return false;
	}
	else{
		while (anelidos != 'C'){
			cin >> anelidos;
			anelidos = toupper(anelidos);
			anelido += anelidos;
		}
		anelido.erase(anelido.length() - 1, 1);
		cout << creceAsi(fases, anelido, v) << endl;
	}

	return true;
}

int main(){

	while (resuelve());

	return 0;
}