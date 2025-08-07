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
	vector<string> v;
	string s;
	cin >> s;

	string w;
	w += s[0];
	for (int i = 1; i < (int)s.size(); i++) {
		if (s[i] == w[0]) {
			w += s[i];
		} else {
			v.push_back(w);
			w.clear();
			w += s[i];
		}
	}
	v.push_back(w);

	sort(v.begin(), v.end(), [](const string & x, const string & y) {
		if (x.size() == y.size()) {
			return x < y;
		}
		return x.size() < y.size();
	});

	cout << v[v.size() - 1];
	return 0;
}
