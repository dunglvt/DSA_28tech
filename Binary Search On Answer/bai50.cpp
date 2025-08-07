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

bool check(int x, int y, int n, long long time) {
	long long sum = time / min(x, y) + time / max(x, y);
	return sum + 1 >= n;
}

int main() {

	fastIO;

	//code here
	int n, x, y;
	cin >> n >> x >> y;

	long long res = 0;
	long long l = 1ll * (n - 1) * x * y / (x + y);
	long long r = 1ll * min(x, y) * n;
	while (l <= r) {
		long long m = (l + r) / 2;
		if (check(x, y, n, m)) {
			res = m;
			r = m - 1;
		} else {
			l = m + 1;
		}
	}
	cout << res + min(x, y);
	return 0;
}
