#include <iostream>
#include <cmath>

using namespace std;

int log(int b, int n);

int main(){

	int casos, b, n, r;
	cin >> casos;
	for (int i = 0; i < casos; i++){
		cin >> b >> n;
		while (b <= 1 || n <= 0)
		{
			cin >> b >> n;

		}
		r = log(b, n);
		cout << r << endl;
	}

	return 0;
}

int log(int b, int n){
	int r = 0;

		
	int menor = pow(b, r);
	int mayor = pow(b, r + 1);
	while (menor <= n && n >= mayor){
		r++;
		menor = pow(b, r);
		mayor = pow(b, r + 1);
	}
	return r;
}