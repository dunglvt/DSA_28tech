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

	bool check = false;
	for (int i = 0; i < (int)s.size(); i++) {
		if (i + 2 < (int)s.size() && s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '1') {
			i += 2;
		} else {
			check = true;
			cout << s[i];
		}
	}
	if (!check) {
		cout << "EMPTY";
	}
	return 0;
}