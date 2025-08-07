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

	long long sum = s.size();
	for (char x : s) {
		m[x]++;
	}

	for (auto x : m) {
		sum += 1ll * (x.second) * (x.second - 1) / 2;
	}
	cout << sum;
	return 0;
}
