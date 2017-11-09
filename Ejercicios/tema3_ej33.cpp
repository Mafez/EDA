#include <iostream>

using namespace std;

const int N = 50;
bool triangularAbajo(int v[N][N], int n);
bool triangularArriba(int v[N][N], int n);

int main(){
	int v[N][N];
	int k, l, n;

	cin >> n;
	while (n != 0){
		for (k = 0; k < n; k++){
			for (l = 0; l < n; l++){
				cin >> v[k][l];
			}
		}
		if (triangularArriba(v, n) || triangularAbajo(v, n)){
			cout << "SI" << endl;
		}
		else
			cout << "NO" << endl;
		cin >> n;
	}

	return 0;
}



bool triangularAbajo(int v[N][N], int n){
	bool t = true;
	int i = 1, j = 0;

	while (t && i < n){
		if (v[i][j] == 0){
			i++;
		}
		else{
			t = false;
		}
		if (i == n){
			j++;
			i = j + 1;
		}
	}
	return t;
}

bool triangularArriba(int v[N][N], int n){
	bool t = true;
	int i = 0, j = 1;

	while (t && j < n){
		if (v[i][j] == 0){
			j++;
		}
		else{
			t = false;
		}
		if (j == n){
			i++;
			j = i + 1;
		}
	}
	return t;
}
