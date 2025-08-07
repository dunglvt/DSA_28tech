#include <bits/stdc++.h>
using namespace std;

// input/output
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);

// data type
#define ll long long
#define ull unsigned long long

// STL
#define FOR(i, l, r) for (auto i = l; i <= r; i++)
#define FORD(i, r, l) for (auto i = r; i >= l; i--)
#define fi first
#define se second

// constant
#define MOD 1000000007
#define PI 3.14

int main()
{

	fastIO;

	// code here
	int n, k;
	cin >> n >> k;
	int a[n];

	for (int &i : a)
	{
		cin >> i;
	}

	int l = 0;
	long long count = 0;
	unordered_map<int, int> m;
	for (int r = 0; r < n; r++)
	{
		m[a[r]]++;
		while ((int)m.size() > k)
		{
			--m[a[l]];
			if (m[a[l]] == 0)
			{
				m.erase(a[l]);
			}
			++l;
		}
		count += (r - l + 1);
	}

	cout << count;
	return 0;
}
