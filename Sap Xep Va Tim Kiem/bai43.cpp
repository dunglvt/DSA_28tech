#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define MOD 1000000007
#define PI 3.14
using namespace std;

int main()
{
	fastIO;
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	long long tong = 0;
	long long count = 0;
	unordered_map<long long, long long> m;
	m[0] = 1;

	for (int i : v) {
		tong += i;
		int r = tong % n;
		if (r < 0) {
			r += n;
		}
		if (m.count(r)) {
			count += m[r];
		}
		m[r]++;
	}
	cout << count;
	return 0;
}