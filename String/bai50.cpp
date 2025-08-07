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

	string a[10] = {"", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
	string res;

	sort(s.begin(), s.end(), greater<char>());

	for (char x : s) {
		res += a[x - '0'];
	}
	sort(res.begin(), res.end(), greater<char>());
	cout << res;
	return 0;
}