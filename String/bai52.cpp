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

	char tmp;
	int k = 0;
	for (int i = 0; i < (int)s.length();) {
		if (isalpha(s[i])) {
			tmp = s[i];
			i++;
		}
		k = 0;
		while (isdigit(s[i])) {
			k = k * 10 + (s[i] - '0');
			i++;
		}
		while (k--) {
			cout << tmp;
		}
	}
	return 0;
}