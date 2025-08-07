#include <bits/stdc++.h>
using namespace std;

int c = 0;
void dem(int x) {
	if (x == 1) {
		return;
	}
	if (x % 2 == 0) {
		++c;
		dem(x / 2);
	} else if (x % 3 == 0) {
		++c;
		dem(x / 3);
	} else if (x % 5 == 0) {
		++c;
		dem(x / 5);
	} else if (x > 1) {
		++c;
		dem(x - 1);
	}
}

int main() {
	int t; cin >> t;

	while (t--) {
		int x; cin >> x;
		dem(x);
		cout << c << endl;
		c = 0;
	}
	return 0;
}