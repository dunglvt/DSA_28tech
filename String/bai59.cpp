#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define MOD 1000000007
#define PI 3.14
using namespace std;

int f[1000004];

int main()
{
	fastIO;
	string s; cin >> s;
	int ans = 0;

	map<int, int> m;
	m[0] = 0;
	int c0 = 0, c1 = 0, i = 1;
	for (char x : s) {
		if (x == '0') {
			++c0;
		} else {
			++c1;
		}
		f[i] = c0 - c1;
		if (m.count(f[i]) == 0) {
			m[f[i]] = i;
		} else {
			ans = max(ans, i - m[f[i]]);
		}
		++i;
	}
	cout << ans;
	return 0;
}