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
	map<string, int> m;
	for (int i = 1; i <= 10; i++) {
		string s;
		int x;
		cin >> s >> x;
		m[s] = x;
	}

	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int ntk = 0;
		for (int i = 0; i < (int)s.length(); i++) {
			string tmp;
			string value;
			while (isalpha(s[i])) {
				tmp += s[i];
				++i;
			}
			while (isdigit(s[i])) {
				value += s[i];
				++i;
			}
			ntk += m[tmp] * stoi(value);
			--i;
		}
		cout << ntk << endl;
	}
	return 0;
}