#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define MOD 1000000007
#define PI 3.14
using namespace std;

string s;
bool check = false;

void sinh() {
	int i = s.length() - 2;
	while (i >= 0 && s[i] >= s[i + 1]) {
		--i;
	}
	if (i == -1) {
		check = true;
	} else {
		int j = s.length() - 1;
		while (s[j] <= s[i]) {
			--j;
		}
		swap(s[i], s[j]);
		reverse(s.begin() + i + 1, s.end());
	}
}

int main()
{
	fastIO;
	cin >> s;

	sinh();
	if (check) {
		cout << "NOT EXIST";
		return 0;
	} else {
		for (char x : s) {
			cout << x;
		}
	}
	return 0;
}