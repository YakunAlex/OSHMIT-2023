#include <iostream>
using namespace std;

int main() {
	// нам подают на вход числа, 
	// мы хотим завершиться когда сумма всех чисел превысила 100
	// и сказать сколько мы считали чисел

	int s = 0;
	int k = 0;
	while (s < 100) {
		int x;
		cin >> x;
		s += x;
		k++;
	}
	cout << k << endl;
}
