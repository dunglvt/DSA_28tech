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

bool tn(string s) {
	string tmp = s;
	reverse(s.begin(), s.end());
	return tmp == s;
}

int main() {

	fastIO;

	//code here
	string s;
	vector<string> v;
	unordered_map<string, int> m;

	while (cin >> s) {
		if (tn(s)) {
			if (m[s] == 0) {
				v.push_back(s);
			}
			m[s]++;
		}
	}

	stable_sort(v.begin(), v.end(), [](const string & x, const string & y) {
		return x.size() < y.size();
	});

	for (string x : v) {
		cout << x << ' ';
	}
	return 0;
}
