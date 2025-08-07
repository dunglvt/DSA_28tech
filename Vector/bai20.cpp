#include <bits/stdc++.h>
using namespace std;

// input/output
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);

// data type
#define ll long long
#define ull unsigned long long

// STL
#define FORL(i, l, r) for (auto i = l; i <= r; i++)
#define FORR(i, r, l) for (auto i = r; i >= l; i--)
#define fi first
#define se second

// constant
#define MOD 1000000007
#define PI 3.14

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	fastIO;

	// code here
	int n;
	cin >> n;
	vector<pair<char, int>> v;
	for (int i = 0; i < n; i++)
	{
		char c;
		int k;
		cin >> c >> k;
		if (c == 'o' || c == 'a' || c == 'i' || c == 'e' || c == 'u')
		{
			v.push_back({c, k});
		}
	}

	if (v.empty())
	{
		cout << "28tech";
		return 0;
	}
	for (vector<pair<char, int>>::reverse_iterator i = v.rbegin(); i != v.rend(); i++)
	{
		cout << (*i).first << ' ' << (*i).second << endl;
	}
	return 0;
}
