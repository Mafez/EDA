#include <iostream>

using namespace std;

const int N = 100;
int main(){
	bool a[N];
	
	cout << separacion(a) << endl;

	return 0;
}

bool separacion(bool a[]){
	bool correcto = true;
	bool punto_inflexion = false;
	int k = 1;

	while (k <= N && correcto){

		if (a[k - 1] != a[k]){
			if (punto_inflexion)//if (a[k - 1] != a[k] && a[k] != a[k + 1]){
				correcto = false;
			punto_inflexion = true;
		}
		k++;
	}
	return correcto;
	
}
