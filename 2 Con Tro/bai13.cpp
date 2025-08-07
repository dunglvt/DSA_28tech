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
	int x, y;
	cin >> x >> y;

	int l = 0, max_len = 0;
	int count2 = 0, count8 = 0;
	for (int r = 0; r < (int)s.length(); r++)
	{
		if (s[r] == '2')
		{
			++count2;
		}
		else
		{
			++count8;
		}
		while (count2 > x || count8 > y)
		{
			if (s[l] == '2')
			{
				--count2;
			}
			else
			{
				--count8;
			}
			++l;
		}
		max_len = max(max_len, r - l + 1);
	}
	cout << max_len << endl;
	return 0;
}
