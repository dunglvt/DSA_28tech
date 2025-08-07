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

long long f[1000004];

int main() {

	fastIO;

	//code here
	int n, q; cin >> n >> q;
	int a[n];
	for (int &i : a) {
		cin >> i;
	}
	for (int i = 0; i < n; i++) {
		if (i == 0) {
			f[i] = a[i];
		} else {
			f[i] = a[i] + f[i - 1];
		}
	}

	while (q--) {
		int l , r;
		cin >> l >> r;
		if (l == 0) {
			cout << f[r] << endl;
		} else {
			cout << f[r] - f[l - 1] << endl;
		}
	}
	return 0;
}
