#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define MOD 1000000007
#define PI 3.14
using namespace std;

int main()
{
	fastIO;
	int n; cin >> n;
	int a[n];
	for (int &i : a) {
		cin >> i;
	}

	unordered_set<int> us;
	int l = 0;
	int ans = 0;
	for (int r = 0; r < n; r++) {
		while (us.count(a[r]) == 1) {
			us.erase(a[l]);
			++l;
		}
		ans = max(ans, r - l + 1);
		us.insert(a[r]);
	}
	cout << ans;
	return 0;
}