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

int binarySearch(int a[], int n, int l, int r, int x) {
	int pos = n;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] == x) {
			return m;
		} else if (a[m] > x) {
			l = m + 1;
		} else {
			r = m - 1;
		}
	}
	return pos;
}

int main() {

	fastIO;

	//code here
	int n; cin >> n;
	int a[n];
	for (int &i : a) {
		cin >> i;
	}
	int q; cin >> q;
	while (q--) {
		int x; cin >> x;
		if (binarySearch(a, n, 0, n - 1, x) != n) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}
