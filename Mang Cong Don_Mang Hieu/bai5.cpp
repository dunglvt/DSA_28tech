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
	int n, q; cin >> n >> q;
	int a[n];
	for (int &i : a) {
		cin >> i;
	}
	int d[n];
	for (int i = 0 ; i < n; i++) {
		if (i == 0) {
			d[i] = a[i];
		} else {
			d[i] = a[i] - a[i - 1];
		}
	}
	while (q--) {
		int l, r, k;
		cin >> l >> r >> k;
		d[l] += k;
		d[r + 1] -= k;
	}
	int f[n];
	memset(f, 0, sizeof(int));
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			f[i] = d[i];
		} else {
			f[i] = d[i] + f[i - 1];
		}
	}
	for (int i : f) {
		cout << i <<  ' ';
	}
	return 0;
}
