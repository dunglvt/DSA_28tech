#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<vector<int>>v;

	for (int i = 0; i < n; i++) {
		int m; cin >> m;
		vector<int> v1;
		for (int i = 0; i < m; i++) {
			int x; cin >> x;
			v1.push_back(x);
		}
		v.push_back(v1);
	}

	int q; cin >> q;
	while (q--) {
		int x, y;
		cin >> x >> y;
		cout << v[x - 1][y - 1] << endl;
	}
	return 0;
}