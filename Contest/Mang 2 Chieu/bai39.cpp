#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[111][111];
long long f[111][111];

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}

	f[1][1] = a[1][1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if ((i != 1 || j != 1) && a[i][j]) {
				f[i][j] = f[i - 1][j] + f[i][j - 1];
			}
		}
	}
	cout << f[n][m];
	return 0;
}