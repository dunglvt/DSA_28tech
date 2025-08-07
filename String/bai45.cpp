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
	int a[5] = {6, 8, 4, 2, 6};

	int r = 0;
	for (char x : n) {
		r = r * 10 + (x - '0');
		r %= 4;
	}
	cout << a[r];
	return 0;
}