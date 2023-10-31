#include <iostream>
using namespace std;

int main() {
	// нам вводят числа не большие 1000, 
	// когда ввели 0 - это значит что последовательность закончилось
	// нужно найти наименьшее

	int x;
	int mmin = 1001;
	while (x != 0) {
		cin >> x;
		if (x == 0) {
			break;
			// break - "выпрыгивает из цикла"
			// есть ещё continue - прыгает в самое начало цикла
		}
		if (x < mmin) {
			mmin = x;
		}
	}

	cout << mmin;
}
