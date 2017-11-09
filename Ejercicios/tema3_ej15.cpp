#include <iostream>

using namespace std;

const int N = 100;
int main(){
	int v[N];
	cout << suma_bueno(v);

	return 0;
}

int suma_bueno(int v[]){
	 int  k = 0,s = 0;
	 int potencia = 1;
	 while (k < N){
		 potencia *= 2;
		 if (v[k] == potencia){
			 s += v[k];
		 }
		 k++;
	 }
	 return s;
	
}
