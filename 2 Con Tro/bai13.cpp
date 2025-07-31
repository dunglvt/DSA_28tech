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
	int x, y;
	cin >> s >> x >> y;

	int ans = 0;
	int count2 = 0;
	int count8 = 0;
	int l = 0;

	for (int r = 0; r < (int)s.size(); r++)
	{
		if (s[r] == '8')
		{
			++count8;
			while (count8 > y)
			{
			}
		}
		else
		{
			++count2;
		}
	}
	return 0;
}
