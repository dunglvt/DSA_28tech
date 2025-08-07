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

bool check(int a[], int n, double length, int k) {
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (long long)(a[i] / length);
	}
	return sum >= k;
}

int main() {

	fastIO;

	//code here
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int &i : a) {
		cin >> i;
	}

	double res = 0;
	double l = 0;
	double r = (*max_element(a, a + n));
	while (r - l > 1e-8) {
		double m = (l + r) / 2;
		if (check(a, n, m, k)) {
			res = m;
			l = m;
		} else {
			r = m;
		}
	}
	cout << fixed << setprecision(6) << res;
	return 0;
}
