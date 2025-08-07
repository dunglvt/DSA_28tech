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
	string s1, s2;
	cin >> s1 >> s2;
	map<char, int> m;

	for (char x : s1) {
		m[x] = 1;
	}
	for (char x : s2) {
		if (m[x] == 1) {
			m[x] = 3;
		} else if (m[x] == 0) {
			m[x] = 2;
		}
	}

	for (auto x : m) {
		if (x.second == 1) {
			cout << x.first;
		}
	}
	cout << endl;
	for (auto x : m) {
		if (x.second == 2) {
			cout << x.first;
		}
	}
	return 0;
}
