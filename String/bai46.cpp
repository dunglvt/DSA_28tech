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
	string n; cin >> n;
	int a2[4] = {6, 2, 4, 8};
	int a3[4] = {1, 3, 9, 7};
	int a4[2] = {6, 4};

	int r2 = 0, r3 = 0, r4 = 0;
	for (char x : n) {
		r2 = r2 * 10 + (x - '0');
		r2 %= 4;

		r3 = r3 * 10 + (x - '0');
		r3 %= 4;

		r4 = r4 * 10 + (x - '0');
		r4 %= 2;
	}

	int res = (1 + a2[r2] + a3[r3] + a4[r4]) % 5;
	cout << res;
	return 0;
}