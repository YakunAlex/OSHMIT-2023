#include <iostream>
// cmath - библиотека, в которой лежит abs (и много всего другого)
#include <cmath>
using namespace std;

int main() {
	// даны три числа, нужно вывести наибольшее
	int x, y, z;
	cin >> x >> y >> z;

	// max(x, y) - наибольшее число из x и y
	cout << max(x, max(y, z)) << endl;

	// еще одна одна функция - модуль
	cout << abs(x) << endl;
}
