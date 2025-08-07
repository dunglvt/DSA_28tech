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

int check(int a[], int n, long long m) {
	int i = 0;
	while (i < n / 2) {
		long long sum = a[i] + a[n - i - 1];
		if (sum > m) {
			return false;
		}
		++i;
	}
	return true;
}

int main() {

	fastIO;

	//code here
	int n;
	cin >> n;
	int a[n];
	for (int &i : a) {
		cin >> i;
	}

	sort(a, a + n);

	long long l = a[0] + a[1];
	long long r = a[n - 1] + a[n - 2];
	long long res = -1;
	while (l <= r) {
		long long m = (l + r) / 2;
		if (check(a, n, m)) {
			res = m;
			r = m - 1;
		} else {
			l = m + 1;
		}
	}
	cout << res;
	return 0;
}
