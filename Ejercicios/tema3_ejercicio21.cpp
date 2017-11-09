#include <iostream>

/*
P={0<=n<=long(v)}
func   () // return 
Q={}
*/



using namespace std;

const int N = 25;
bool resuelve();


int credito_seg_max(int v[], int n);
int main(){
	int v[N];

//	while (resuelve());
	cout << credito_seg_max(v, 22) << endl;
	system("pause");
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

	cout << credito_seg_max(v,longitud) << endl;//funcion
	
	
	return true;
}



int credito_seg_max(int k[], int n){
	int v[22] = { 1, 3, 2, 5, -1, 4, -2, 3, - 2, - 3, - 1, 2, 2, 2, - 1, - 4, 3, 1, - 1, 2, - 3, - 2 };
	int p = n / 2, q = (n / 2) + 1, segmento = 0, max = 0, interq = 0, interp = 0, segmentoInter = 0;
	if (v[p] > 0){
		segmento = 1;
		max = segmento;
	}
	while (q < n){
		
		if (v[q] > 0){
			segmento++;
			if (segmento > max){
				max = segmento;
				interq = q + 1;
				interp = p;
			}
		}
		else if(v[q] < 0){
			segmento--;
			if (segmento == 0){
				p = q + 1;
				q = q + 2;
			}
		}	
		q++;
	}
	segmento = max;
	q = interq;
	p = interp;
	while (p >= 0){
		
		if (v[p] > 0){
			segmento++;
			if (segmento > max){
				max = segmento;
			}
		}
		else if (v[p] < 0){
			segmento--;
			if (segmento == 0){
				q = p;
				p--;
	
			}
		}
		p--;
	}

	return max;
}