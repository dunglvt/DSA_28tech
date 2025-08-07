#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define MOD 1000000007
#define PI 3.14
using namespace std;

pair<int, int> f[1000004];

int main()
{
	fastIO;
	string s; cin >> s;
	int count = 0;

	map<pair<int, int>, int> m;
	m[ {0, 0}] = 1;
	int c2 = 0, c8 = 0, ct = 0, i = 1;
	for (char x : s) {
		if (x == '2') {
			++c2;
		} else if (x == '8') {
			++c8;
		} else {
			++ct;
		}

		int fi = c2 - c8;
		int se = c8 - ct;
		f[i] = {fi, se};
		m[f[i]]++;
		++i;
	}
	for (auto x : m) {
		count += (x.second - 1) * x.second / 2;
	}
	cout << count;
	return 0;
}