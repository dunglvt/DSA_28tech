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
	int n, m;
	cin >> n >> m;
	int b[n], c[m];
	for (int &i : b) {
		cin >> i;
	}
	for (int &i : c) {
		cin >> i;
	}

	int i = 0, j = 0;
	while (i < n && j < m) {
		if (b[i] > c[j]) {
			cout << 'c' << ++j << ' ';
		} else {
			cout << 'b' << ++i << ' ';
		}
	}
	while (i < n) {
		cout << 'b' << ++i << ' ';
	}
	while (j < m) {
		cout << 'c' << ++j << ' ';
	}
	return 0;
}
