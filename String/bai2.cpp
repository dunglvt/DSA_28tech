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
	getline(cin, s);

	for (char x : s) {
		if (islower(x)) {
			cout << (char)toupper(x);
		} else {
			cout << x;
		}
	}
	cout << endl;

	for (char x : s) {
		if (isupper(x)) {
			cout << (char)tolower(x);
		} else {
			cout << x;
		}
	}
	cout << endl;
	return 0;
}
