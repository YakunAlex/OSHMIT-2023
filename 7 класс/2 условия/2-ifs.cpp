#include <iostream>
using namespace std;

int main() {
	// даны два числа, нужно вывести наибольшее
	int x, y;
	cin >> x >> y;

	// синтаксис: if (условие) {тело}
	if (x > y) {
		// тело исполняется только если выполнилось условие
		cout << x;
	}

	if (y > x) {
		cout << y;
	}
}
