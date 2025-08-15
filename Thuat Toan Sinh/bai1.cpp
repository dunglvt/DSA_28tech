#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define MOD 1000000007
#define PI 3.14
using namespace std;

bool check = false;

void sinh(string &s) {
	int i = s.length() - 1;
	while (i >= 0 && s[i] == '1') {
		s[i] = '0';
		--i;
	}
	if (i == -1) {
		check = true;
	} else {
		s[i] = '1';
	}
	return;
}

int main()
{
	fastIO;
	string s;
	cin >> s;

	sinh(s);
	for (int i = 0; i < (int)s.length(); i++) {
		cout << s[i];
	}
	return 0;
}