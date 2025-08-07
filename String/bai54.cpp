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
	string s, t;
	int n; cin >> n;
	while (n--) {
		cin >> s >> t;
		if ((int)s.length() != (int)t.length()) {
			cout << "NO" << endl;
		} else {
			bool check = true;
			map<char, int>m1, m2;
			for (char x : s) {
				m1[x]++;
			}
			for (char x : t) {
				m2[x]++;
			}
			for (int i = 0; i < (int)s.size(); i++) {
				if (m1[s[i]] != m2[s[i]]) {
					check = false;
					break;
				}
			}
			if (check) {
				cout << "YES\n";
			} else {
				cout << "NO\n";
			}
		}
	}
	return 0;
}