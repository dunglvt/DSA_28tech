#include <bits/stdc++.h>
using namespace std;

int n, m;

int main() {
	cin >> n >> m;
	int t; cin >> t;

	int h1 = 1e9;
	int c1 = 1e9;
	while (t--) {
		int x, y;
		cin >> x >> y;
		h1 = min(x, h1);
		c1 = min(y, c1);
	}
	cout << 1ll * h1 * c1;
	return 0;
}