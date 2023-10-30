#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;

	if (x > y) {
		// вот этот код выолняется только если условие истино
		cout << "x is bigger" << endl;
	}
	if (x <= y) {
		cout << "x is not bigger" << endl;
	}

	// это можно написать короче
	if (y > x) {
		cout << "y is bigger" << endl;
	}
	else {
		// сюда мы заходим если не выполнилось первое условие
		cout << "y is not bigger" << endl;
	}
}
