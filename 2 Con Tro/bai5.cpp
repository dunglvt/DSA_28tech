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
	int n, s;
	cin >> n >> s;
	int a[n];

	for (int &i : a) {
		cin >> i;
	}

	long long sum = 0;
	int ans = 1e9;
	int l = 0, r = 0;
	while (r < n) {
		sum += a[r];
		while (sum >= s) {
			ans = min(ans, r - l + 1);
			sum -= a[l];
			++l;
		}
		++r;
	}
	cout << ans;
	return 0;
}
