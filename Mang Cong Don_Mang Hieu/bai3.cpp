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

int a[1005][1005];
int f[1005][1005];

int main() {

	fastIO;

	//code here
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}

	f[1][1] = a[1][1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			f[i][j] = a[i][j] + f[i][j - 1] + f[i - 1][j] - f[i - 1][j - 1];
		}
	}
	int q; cin >> q;
	while (q--) {
		int x1, x2, y1, y2;
		cin >> x1 >> x2 >> y1 >> y2;
		cout << f[x2][y2] - f[x2][y1 - 1] - f[x1 - 1][y2] + f[x1 - 1][y1 - 1] << endl;
	}
	return 0;
}
