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
	vector<string> v;
	map<string, int> m;

	while (cin >> s) {
		if (!m[s]) {
			v.push_back(s);
		}
		m[s]++;
	}

	for (pair<string, int> x : m) {
		cout << x.first << ' ' << x.second << endl;
	}

	cout << endl;

	for (string x : v) {
		if (m[x]) {
			cout << x << ' ' << m[x] << endl;
			m[x] = 0;
		}
	}
	return 0;
}
