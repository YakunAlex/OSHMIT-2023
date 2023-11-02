#include <iostream>
#include <vector>
using namespace std;

int main() {
	// задача дано n, потом n неотрицательные чисел
	// нужно вывести их же, но все наибольшие уменьшены на 1

	int n;
	cin >> n;

	vector<int> a(n);

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int mx = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] >= mx) {
			mx = a[i];
		}
	}

	for (int i = 0; i < n; ++i) {
		if (a[i] == mx) {
			a[i] -= 1;
		}
	}

	for (int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	}
}
