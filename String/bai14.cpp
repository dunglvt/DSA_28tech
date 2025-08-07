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
	map<string, int> m;

	while (cin >> s) {
		m[s]++;
	}

	vector<pair<string, int>> v(m.begin(), m.end());

	sort(v.begin(), v.end(), [](const pair<string, int> &x, const pair<string, int> &y) {
		if (x.second == y.second) {
			return x.first < y.first;
		}
		return x.second < y.second;
	});

	int min_Value = 1e9;
	for (pair<string, int> x : v) {
		min_Value = min(min_Value, x.second);
	}

	cout << v[v.size() - 1].first << ' ' << v[v.size() - 1].second << endl;

	string res;
	for (pair<string, int> x : v) {
		if (x.second == min_Value) {
			res = x.first;
		}
	}
	cout << res << ' ' << min_Value << endl;
	return 0;
}
