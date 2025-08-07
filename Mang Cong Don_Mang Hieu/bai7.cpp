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
	int n, k, q;
	cin >> n >> k >> q;
	int a[200000 + 1];
	int f[200000];

	memset(a, 0, sizeof(a));

	for (int i = 0; i < n; i++) {
		int l, r; cin >> l >> r;
		++a[l - 1];
		--a[r];
	}
	for (int i = 0; i < 200001; i++) {
		if (i == 0) {
			f[i] = a[i];
		} else {
			f[i] = a[i] + f[i - 1];
		}
	}
	while (q--) {
		int l, r;
		int cnt = 0;
		cin >> l >> r;
		for (int i = l - 1; i < r; i++) {
			if (f[i] >= k) {
				++cnt;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
