#include <iostream>

using namespace std;

//int bonacci(int n, int x, int y) {
//
//	if (n == 0) {
//		return x;
//	}
//	else if (n == 1) {
//		return y;
//	}
//	else {
//		return  (bonacci(n - 1, x, y) + bonacci(n - 2, x, y)) % 1000000007;
//	}
//}
int bonacci(int n, int x, int y) {
	int resultado = 0;
	if (n == 0) {
		return x;
	}
	else if (n == 1) {
		return y;
	}else{

		for (int i = 2; i <= n; i++) {
			resultado = (x + y) % 1000000007;
			x = y;
			y = resultado;
		}
	}

	return resultado;
}




bool resuelve() {

	int x, n, y;

	cin >> n >> x >> y;

	if (cin.fail()) {
		return false;
	}

	int resultado = bonacci(n, x, y);
	cout << resultado << endl;
	return true;

}


int main() {

	while (resuelve()) {};

	return 0;
}