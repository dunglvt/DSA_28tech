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
	string s, t;
	getline(cin, s);
	getline(cin, t);

	map<string, int> m;

	stringstream ss(s);
	string w;
	while (ss >> w) {
		for (char &x : w) {
			x = tolower(x);
		}
		m[w] = 1;
	}

	stringstream ss1(t);
	while (ss1 >> w) {
		for (char &x : w) {
			x = tolower(x);
		}
		if (m[w] == 1) {
			m[w] = 3;
		} else if (m[w] == 0) {
			m[w] = 2;
		}
	}

	for (auto x : m) {
		if (x.second == 3) {
			cout << x.first << ' ';
		}
	}
	return 0;
}
