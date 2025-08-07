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
		string s;
		cin >> s;
		map<char, int>m;
		for (char x : s) {
			m[x]++;
		}

		bool check = true;
		if ((int)s.length() & 1) {
			int count = 0; //dem so le
			for (pair<char, int> x : m) {
				if (x.second & 1) {
					++count;
				}
				if (count > 1) {
					check = false;
					break;
				}
			}
		} else {
			for (pair<char, int> x : m) {
				if (x.second & 1) {
					check = false;
					break;
				}
			}
		}
		if (check) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;
}