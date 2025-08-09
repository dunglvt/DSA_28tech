#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define MOD 1000000007
#define PI 3.14
using namespace std;

int main()
{
	fastIO;
	int n, k; cin >> n >> k;
	vector<int> v(n);

	for (int &i : v) {
		cin >> i;
	}

	unordered_map<long long, long long> mp;
	long long tong = 0;
	long long count = 0;
	mp.insert({0, 1});
	for (int i = 0; i < n; i++) {
		tong += v[i];
		if ((mp.count(tong - k))) {
			count += mp[tong - k];
		}
		mp[tong]++;
	}
	cout << count;
	return 0;
}