#include <iostream>

using namespace std;

const int /*N = 100000,*/modulo=31543;
int potencia(int &x, int n){
	if (n == 0){
		return 1;
	}
	else if (n == 1){
		return (x %modulo);
	}
	else{
		if (n % 2 == 0){
			return (potencia(x, n / 2)*potencia(x, n / 2)) % modulo;
		}
		else{
			return (potencia(x, n / 2)*potencia(x, (n / 2) + 1)) % modulo;
		}
	}

}


bool resuelve(){

	int x, n;

	cin >> x >> n;
	if (x == 0 && n == 0){
		return false;
	}
	else{
		x = x%modulo;
		cout << potencia(x,n) << endl;
		return true;
	}



}

int main(){
	while (resuelve()){}

	return 0;

}