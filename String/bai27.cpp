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

	fastIO;

	// code here
	string s;
	cin >> s;

	vector<string> v;
	string res;
	for (int i = 0; i < (int)s.size() - 1; i++)
	{
		if (s[i] != s[i + 1])
		{
			res += s[i];
			// cout << "if 1: " << res << endl;
		}
		else
		{
			if (s[i] != res[(int)res.size() - 1])
			{
				res += s[i];
			}
			v.push_back(res);
			// cout << "if 2: " << res << endl;
			res.clear();
		}
	}
	if ((int)s.size() - 1 != (int)s.size() - 2)
	{
		res += s[s.size() - 1];
	}
	v.push_back(res);

	sort(v.begin(), v.end(), [](const string & x, const string & y)
	{
		if (x.size() == y.size()) {
			return x < y;
		}
		return x.size() < y.size();
	});

	cout << v[v.size() - 1] << endl;
	// for (string x : v)
	// {
	// 	cout << x << ' ';
	// }
	return 0;
}