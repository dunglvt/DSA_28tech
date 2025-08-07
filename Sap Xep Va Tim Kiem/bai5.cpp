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
	int n; cin >> n;
	int a[n];
	for (int &i : a) {
		cin >> i;
	}
	sort(a, a + n);
	int count = 1;
	int ans = -1e9;
	int res = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] != a[i - 1]) {
			if (count > ans) {
				ans = count;
				res = a[i - 1];
			}
			count = 1;
		} else {
			++count;
		}

	}
	if (count > ans) {
		cout << a[n - 1] << ' ' << count;
		return 0;
	}
	cout << res << ' ' << ans;
	return 0;
}
