#include <iostream>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;

	if (x > 0) {
		if (y > 0) {
			cout << "++" << endl;
		}
		else {
			cout << "+-" << endl;
		}
	}
}
