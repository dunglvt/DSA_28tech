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
	int n, m , k;
	cin >> n >> m >> k;
	int a[n], b[m];
	for (int &i : a) {
		cin >> i;
	}
	for (int &i : b) {
		cin >> i;
	}

	sort(a, a + n);
	sort(b, b + m);

	int count = 0;
	int i = 0;
	int j = 0;

	while (i < n && j < m) {
		if (a[i] + k >= b[j] && b[j] >= a[i] - k) {
			++j;
			++i;
			++count;
		} else if (a[i] + k < b[j]) {
			++i;
		} else if (a[i] - k > b[j]) {
			++j;
		}
	}
	cout << count;
	return 0;
}
