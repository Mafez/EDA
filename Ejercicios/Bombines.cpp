#include <iostream>
#include <cmath>
#include<vector>

using namespace std;


//const unsigned long long int N = 100000;


int llamar_dia(std::vector<int> v, int n){
	int sumaTotal = 0, sumaParcial = 0;
	for (int i = 0; i < n; i++){
		sumaTotal += v[i];
	}
	int i = 0, dia = -1;
	if (sumaTotal == 0){
		return i;
	}
	else{
		int minimo = abs(sumaTotal), auxiliar = 0;
		while (i < n){
			sumaParcial += v[i];
			sumaTotal -= v[i];
			auxiliar = abs(sumaTotal -sumaParcial);
			if (auxiliar == 0){
				 return i+1;
			}
			else{
				if (auxiliar < minimo){
					minimo = auxiliar;
					dia = i;
				}
			}
			i++;
		}
	}
	return dia + 1;

}
bool resuelve(){
	int dias;
	std::vector<int> v(100000);
	cin >> dias;
	if (dias == 0){
		return false;
	}
	else{
		for (int i = 0; i < dias; i++){
			cin >> v[i];
		}
		cout << llamar_dia(v, dias) << endl;
	}
	return true;
}

int main(){
	
	while (resuelve());
	return 0;
}
