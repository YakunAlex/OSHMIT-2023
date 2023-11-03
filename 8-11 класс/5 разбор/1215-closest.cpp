#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int x;
	cin >> x;

	int best = 10000;
	for (int i = 0; i < n; ++i) {
		if (abs(x - a[i]) < abs(x - best)) {
			best = a[i];
		}
		else if (abs(x - a[i]) == abs(x - best)) {
			best = min(a[i], best);
		}
	}
	cout << best << endl;
}
