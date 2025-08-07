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
	string s;
	cin >> s;

	string tmp;
	tmp += s[0];
	for (int i = 1; i < (int)s.length(); i++) {
		if (tmp[0] != s[i]) {
			cout << tmp[0] << tmp.length();
			tmp.clear();
			tmp += s[i];
		} else {
			tmp += s[i];
		}
	}
	if (!tmp.empty()) {
		cout << tmp[0] << tmp.length();
	}
	return 0;
}