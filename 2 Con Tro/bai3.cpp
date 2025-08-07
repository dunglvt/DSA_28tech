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

int firstPos(int a[], int n, int l, int r, int x) {
	int pos = n;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] == x) {
			pos = m;
			r = m - 1;
		} else if (a[m] > x) {
			r = m - 1;
		} else {
			l = m + 1;
		}
	}
	return pos;
}

int lastPos(int a[], int n, int l, int r, int x) {
	int pos = n;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] == x) {
			pos = m;
			l = m + 1;
		} else if (a[m] < x) {
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
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for (int &i : a) {
		cin >> i;
	}
	for (int &i : b) {
		cin >> i;
	}

	long long cnt = 0;
	for (int i = 0; i < n; i++) {
		int fPos = firstPos(b, m, 0, m - 1, a[i]);
		int lPos = lastPos(b, m, 0, m - 1, a[i]);
		if (fPos != m && lPos != m) {
			cnt += lPos - fPos + 1;
		}
	}
	cout << cnt;
	return 0;
}
