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

int main() {

	fastIO;

	//code here
	string s;
	cin >> s;
	map<char, int> m;
	for (char x : s) {
		m[x]++;
	}
	vector<pair<char, int>> v(m.begin(), m.end());

	sort(v.begin(), v.end(), [](const pair<char, int> &x, const pair<char, int> &y) {
		if (x.second == y.second) {
			return x > y;
		}
		return x.second > y.second;
	});

	int minV = 1e9;
	for (auto x : v) {
		minV = min(minV, x.second);
	}
	cout << v[0].first << ' ' << v[0].second << endl;

	for (auto x : v) {
		if (x.second == minV) {
			cout << x.first << ' ' << x.second;
			return 0;
		}
	}
	return 0;
}
