#include <iostream>
#include <vector>
using namespace std;

int main() {
	// дано n чисел
	// требуется вывести их в обратном порядке

	int n;
	cin >> n;

	vector<int> a(n);

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	// выход за пределы массива:
	// for (int i = n; i >= 0; --i) {
	// 	cout << a[i] << " ";
	// }

	// правильное решение
	for (int i = n - 1; i >= 0; --i) {
		cout << a[i] << " ";
	}
}
