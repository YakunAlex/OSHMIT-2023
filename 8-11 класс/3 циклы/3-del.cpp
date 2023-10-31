#include <iostream>
using namespace std;

int main() {
	// дано число, нужно вывести все его делители
	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		if (n % i == 0) {
			cout << i << endl;
		}
	}
}
