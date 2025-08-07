#include <bits/stdc++.h>
using namespace std;

// input/output
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);

//data type
#define ll long long
#define ull unsigned long long

//STL
#define FORL(i,l,r) for(auto i = l; i <= r; i++)
#define FORR(i,r,l) for(auto i = r; i >= l; i--)
#define fi first
#define se second

//constant
#define MOD 1000000007
#define PI 3.14

int main() {

	fastIO;

	//code here
	int n, m, k;
	cin >> n >> m >> k;
	long long a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	vector<vector<int>> v;
	long long g[n + 1];
	memset(g, 0, sizeof(g));

	for (int i = 0; i < m; i++) {
		int l, r, d;
		cin >> l >> r >> d;
		v.push_back({l, r, d});
	}

	while (k--) {
		int x, y;
		cin >> x >> y;

		for (int i = x - 1; i < y; i++) {
			g[v[i][0] - 1] += v[i][2];
			g[v[i][1]] -= v[i][2];
		}

		long long f[n];
		memset(f, 0 , sizeof(f));
		for (int i = 0; i < n; i++) {
			if (i == 0) {
				f[i] = g[i];
			} else {
				f[i] = g[i] + f[i - 1];
			}
		}

		for (int i = 0 ; i < n; i++) {
			b[i] = a[i] + f[i];
		}
	}

	for (long long i : b) {
		cout << i << ' ';
	}
	return 0;
}
