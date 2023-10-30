#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;

	if (x > y) {
		cout << "x bolshe y" << endl;
	}

	if (x < y) {
		cout << "x menshe y" << endl;
	}

	if (x >= y) {
		cout << "x bolshe ili ravno y" << endl;
	}

	if (x <= y) {
		cout << "x menshe ravno y" << endl;
	}

	// ЧАСТАЯ ОШИБКА
	// if (x = y)

	// сравнение
	if (x == y) {
		cout << "x menshe ravno y" << endl;
	}

	// не равно:
	if (x != y) {
		cout << "x ne ravno" << endl;
	}
}
