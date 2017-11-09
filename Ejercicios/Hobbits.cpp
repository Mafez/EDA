#include <iostream>
#include <string>


using namespace std;


int trocear(int fuerza, int eslabones, int trozos){
	
	if (fuerza * 2 >= eslabones){
		return trozos;
	}
	else{
		//partimos
		if (eslabones % 2 == 0){
			int cacho1 = trocear(fuerza, eslabones / 3, trozos + 1);
			int cacho2 = trocear(fuerza, ((eslabones * 2)/3)+1, trozos + 1);
		}
		else{
			int cacho1 = trocear(fuerza, eslabones / 3, trozos + 1);
			int cacho2 = trocear(fuerza, ((eslabones * 2) / 3), trozos + 1);
		}
	}
}


bool resuelve(){

	int fuerza, eslabones;
	cin >> fuerza >> eslabones;
	if (fuerza == 0){
		return false;
	}
	else{
		cout << trocear(fuerza, eslabones, 0) << endl;
	}

	return true;
}

int main(){

	while (resuelve());

	return 0;
}