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

void smm(string n) {
	int res = 0;
	for (char x : n) {
		res += (x - '0');
	}
	if (res == 9) {
		check = true;
		return;
	}
	if (res > 9) {
		smm(to_string(res));
	}
	return;
}

int main()
{
	fastIO;
	string n;
	cin >> n;

	smm(n);

	if (check) {
		cout << "YES";
	} else {
		cout << "NO";
	}

	return 0;
}