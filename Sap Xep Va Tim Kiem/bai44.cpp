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
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int &i : a) {
		cin >> i;
	}

	unordered_map<int, int> um;
	int l = 0;
	long long count = 0;
	for (int r = 0; r < n; r++) {
		um[a[r]]++;
		while (um.size() > k) {
			um[a[l]]--;
			if (um[a[l]] == 0) {
				um.erase(a[l]);
			}
			++l;
		}
		count += (r - l + 1);
	}
	cout << count;
	return 0;
}