#include <iostream>
// нужно подключить эту библиотеку
#include <vector>
using namespace std;

int main() {
	// задача: дано n, потом n чисел a_1...a_n и число x
	// требуется сказать, встречается ли x среди a_1...a_n 
	int n;
	cin >> n;

	// мы объявили переменную a типа "массив"
	// массив (только вектор) автоматически заполняется нулями
	vector<int> a(n);

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int x;
	cin >> x;

	for (int i = 0; i < n; ++i) {
		if (x == a[i]) {
			cout << "yes" << endl;
			return 0;
		}
	}

	cout << "no" << endl;
}
