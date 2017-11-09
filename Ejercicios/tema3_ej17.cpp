#include <iostream>

using namespace std;

int heroico(int v[], int n);
int main(){
	int v[15], casos;

	cin >> casos;
	while (casos != 0){

		for (int i = 0; i < casos; i++){
			cin >> v[i];
		}

		cout << heroico(v, casos) << endl;

		cin >> casos;
	}

	return 0;
}



int heroico(int v[],int n){
	int i = 0, fib, heroicos = 0, a = 0, b = 1;
	while (i < n){
		if (i == 0){
			fib = a;
		}
		else if (i == 1){
			fib = b;
		}else{
			fib = a + b;
			a = b;
			b = fib;
		}
		if (fib < v[i]){
			heroicos++;
		}
		i++;
	}
	return heroicos;
}