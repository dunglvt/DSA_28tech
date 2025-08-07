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

bool check(int a[], int n, int L, long long H) {
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		if (H <= a[i]) {
			sum += a[i] - H;
		}
	}
	return sum >= L;
}

int main() {

	fastIO;

	//code here
	int n, L;
	cin >> n >> L;
	int a[n];
	for (int &i : a) {
		cin >> i;
	}

	long long l = 0;
	long long r = *max_element(a, a + n);
	long long res = -1;
	while (l <= r) {
		long long m = (l + r) / 2;
		if (check(a, n, L, m)) {
			res = m;
			l = m + 1;
		} else {
			r = m - 1;
		}
	}

	cout << res;
	return 0;
}
