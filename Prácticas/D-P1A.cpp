//#include <iostream>
//
//using namespace std;
//
//typedef int tArray[100000];
//int esPar(tArray vector, int n);
///*
//	P = { 0 <= n < 100000 ^ para todo w: 0<=w<n : a[w] >=0}
//	func esPar(int a[], int n)
//	Q = {#x: 0<=x<n : a[x]%2 =0};
//*/
//
//int main(){
//	int max, pares;
//	tArray vector;
//	
//	cin >> max;
//	while (max != 0){
//		for (int i = 0; i < max; i++){
//			cin >> vector[i];
//		}
//		pares = esPar(vector, max);
//		cout << pares << endl;
//		cin >> max;
//	}
//	return 0;
//}
//
//int esPar(tArray vector, int n){
//	int contador =0;
//	for (int i = 0; i < n; i++){
//		if (vector[i] % 2 == 0){
//			contador++;
//		}
//	}
//	return contador;
//}
