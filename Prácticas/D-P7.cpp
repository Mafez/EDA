#include <iostream>

using namespace std;
void equilibrio(int pi, int di, int pd, int dd,int &peso, bool &equilibrado){
	int pi2, di2, pd2, dd2;
	bool equilIz = true, equilDr = true;

	if (pi == 0){
		cin >> pi2 >> di2 >> pd2 >> dd2;
		equilibrio(pi2, di2, pd2, dd2,pi,equilIz);
	}

	if (pd == 0){
		cin >> pi2 >> di2 >> pd2 >> dd2;
		equilibrio(pi2, di2, pd2, dd2,pd,equilDr);
	}

	peso = pi + pd;
	equilibrado = equilDr && equilIz && (pi * di == pd * dd);


}
bool resuelve(){
	int pi, di, pd, dd, peso;
	bool equilibrado;
	

		cin >> pi >> di >> pd >> dd;
		if (pi == 0 && pd == 0 && di == 0 && dd == 0)
			return false;
		else{
			equilibrio(pi, di, pd, dd,peso,equilibrado);
			if (equilibrado){
				cout << "SI" << endl;
			}
			else {
				cout << "NO" << endl;
			}
		}

}
int main(){

	while (resuelve());
	return 0;
}