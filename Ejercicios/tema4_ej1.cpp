#include <iostream>

/*
P={0<=n<=long(v)}
func   () // return
Q={}
*/



using namespace std;

const int N = 100000;
bool resuelve();
void parCercano(int v[], int n, int pos, int i, int& min);
int main(){

	while (resuelve());

	return 0;
}


bool resuelve(){
	int i, longitud;

	cin >> longitud;
	if (longitud == 0)
		return false;

	int v[N];
	for (i = 0; i < longitud; i++){
		cin >> v[i];
	}
	int pos = 0, j = 1, min = longitud;
	parCercano(v, longitud, pos, j, min);
	if (min == longitud){
		cout << "NO EXISTE PAR" << endl;
	}else
		cout << min << endl;//funcion


	return true;
}


void parCercano(int v[], int n, int pos, int i, int& min){
	
	if (i == n){
		pos++;
		i = pos + 1;
		parCercano(v, n, pos, i, min);
	}
	if (pos < n -1){
		if (v[pos] != v[i]){
			i++;
			parCercano(v, n, pos, i, min);
		}
		else {		
			if (min > i - pos)
				min = i - pos;
			pos++;
			i = pos + 1;
			parCercano(v, n, pos, i, min);
		}
	}
	

}