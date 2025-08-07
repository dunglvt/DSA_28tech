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

bool check(int a, int b, long long length, int n) {
	long long res = (length / a) * (length / b);
	return res >= n;
}

int main() {

	fastIO;

	//code here
	int a, b, n;
	cin >> a >> b >> n;

	long long res = -1;
	long long l = 1;
	long long r = 1ll * max(a, b) * n;
	while (l <= r) {
		long long m = (l + r) / 2;
		if (check(a, b, m, n)) {
			res = m;
			r = m - 1;
		} else {
			l = m + 1;
		}
	}
	cout << res;
	return 0;
}
