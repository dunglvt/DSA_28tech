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

int findPos1(int a[], int n, int l, int r, int x) {
	int pos = -1;
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

int findPos2(int a[], int n, int l, int r, int x) {
	int pos = -1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] == x) {
			pos = m;
			l = m + 1;
		} else if (a[m] > x) {
			r = m - 1;
		} else {
			l = m + 1;
		}
	}
	return pos;
}

int findPos3(int a[], int n, int l, int r, int x) {
	int pos = -1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] >= x) {
			pos = m;
			r = m - 1;
		} else {
			l = m + 1;
		}
	}
	return pos;
}

int findPos4(int a[], int n, int l, int r, int x) {
	int pos = -1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] > x) {
			pos = m;
			r = m - 1;
		} else {
			l = m + 1;
		}
	}
	return pos;
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

	cout << findPos1(a, n, 0, n - 1, x) << endl;
	cout << findPos2(a, n, 0, n - 1, x) << endl;
	cout << findPos3(a, n, 0, n - 1, x) << endl;
	cout << findPos4(a, n, 0, n - 1, x) << endl;
	if (findPos1(a, n, 0, n - 1, x) != -1) {
		cout << findPos2(a, n, 0, n - 1, x) - findPos1(a, n, 0, n - 1, x) + 1 << endl;
	} else {
		cout << 0 << endl;
	}
	return 0;
}
