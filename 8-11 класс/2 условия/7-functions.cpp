#include <iostream>
using namespace std;

int main() {
	// Функции:

	int x, y;
	cin >> x >> y;

	// выведет наибольшее число из x и y
	cout << max(x, y) << endl;

	// можно комбинировать с другими операциями
	cout << max(x, y) - x << endl;

	// или вот так
	cout << max(min(x, y), x) << endl;
}
