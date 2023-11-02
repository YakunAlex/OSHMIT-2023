#include <iostream>
using namespace std;

int main() {
	// задача: дано n, потом n чисел a_1...a_n и число x
	// требуется сказать, встречается ли x среди a_1...a_n 
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		int y;
		cin >> y;
		// не сработает потому что мы не знаем что такое x
		if (y == x) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
}
