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
	int n, m; cin >> n >> m;
	int a[n], b[m];
	for (int &i : a) {
		cin >> i;
	}
	for (int &i : b) {
		cin >> i;
	}
	int i = 0, j = 0;
	while (i < n  && j < m) {
		if (a[i] < b[j]) {
			cout << a[i++] << ' ';
		} else if (a[i] > b[j]) {
			cout << b[j++] << ' ';
		} else {
			cout << a[i++] << ' ' << b[j++] << ' ';
		}
	}
	while (i < n) {
		cout << a[i++] << ' ';
	}
	while (j < m) {
		cout << b[j++] << ' ';
	}
	return 0;
}
