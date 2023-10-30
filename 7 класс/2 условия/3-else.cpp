#include <iostream>
using namespace std;

int main() {
	// даны два числа, нужно вывести наибольшее
	int x, y;
	cin >> x >> y;

	if (x > y) {
		// выполняется если выполнилось условие
		cout << x << endl;
	} 
	else {
		// выполняется если не выполнилось условие
		cout << y << endl;
	}
}
