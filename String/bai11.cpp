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
	while (cin >> s) {
		v.push_back(s);
	}

	sort(v.begin(), v.end());
	for (string x : v) {
		cout << x << ' ';
	}

	cout << endl;

	sort(v.begin(), v.end(), [](const string & x, const string & y) {
		if ((int)x.size() == (int)y.size()) {
			return x < y;
		} else {
			return (int)x.size() < (int)y.size();
		}
	});

	for (string x : v) {
		cout << x << ' ';
	}

	return 0;
}
