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

int findPos(int a[], int n, int l, int r, int x) {
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] == x) {
			return 1;
		} else if (a[m] > x) {
			r = m - 1;
		} else {
			l = m + 1;
		}
	}
	return -1;
}

int main() {

	fastIO;

	//code here
	int n, x;
	cin >> n >> x;
	int a[n];
	for (int &i : a) {
		cin >> i;
	}

	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		int pos = findPos(a, n, 0, n - 1, a[i] - x);
		if (pos == 1) {
			cout << 1;
			return 0;
		}
	}
	cout << -1;
	return 0;
}
