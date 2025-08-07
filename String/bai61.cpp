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
	int t; cin >> t;
	while (t--) {
		string n, m;
		cin >> n >> m;

		string res;
		int sn = 0;
		int i = n.length() - 1, j = m.length() - 1;
		while (i >= 0 && j >= 0) {
			int s1 = n[i] - '0';
			int s2 = m[j] - '0';
			if (s1 + s2 + sn <= 9) {
				res += to_string(s1 + s2 + sn);
				sn = 0;
			} else {
				int k = s1 + s2 + sn;
				res += to_string(k % 10);
				sn = 1;
			}
			--i;
			--j;
		}

		while (i >= 0) {
			int s1 = n[i] - '0';
			res += to_string(s1 + sn);
			sn = 0;
			--i;
		}
		while (j >= 0) {
			int s2 = m[j] - '0';
			res += to_string(s2 + sn);
			sn = 0;
			--j;
		}
		reverse(res.begin(), res.end());
		cout << res << endl;
	}
	return 0;
}