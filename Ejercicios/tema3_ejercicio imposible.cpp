#include <iostream>


using namespace std;
const int N = 50;
int credito_seg_max(int A[], int n);
int main(){
	int A[N], casos;

	cin >> casos;
	while (casos > 0){
		for (int i = 0; i < casos; i++){
			cin >> A[i];
		}
		cin >> casos;

		cout << credito_seg_max(A, casos) << endl;
	}
	return 0;
}



int credito_seg_max(int A[], int n){
	int max = 0, segmento = 1, p = n / 2;
	int q = (n/2 )+ 1, inter;
	while (q < n){
		if (segmento > 0){
			if (A[q] > 0){
				segmento++;
			}
			else{
				segmento--;
			}
			if (segmento > max){
				max = segmento;
				inter = q;
			}
		}
		else{
			 p = q;
			 segmento = 1;
		}
		q++;
	}

	return max;
}