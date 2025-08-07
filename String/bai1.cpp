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
	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
	for (char x : s) {
		if (isalpha(x)) {
			++cnt1;
		} else if (isdigit(x)) {
			++cnt2;
		} else {
			++cnt3;
		}
	}
	cout << cnt1 << ' ' << cnt2 << ' ' << cnt3;
	return 0;
}
