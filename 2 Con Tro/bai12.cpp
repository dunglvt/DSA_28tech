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
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int &i : a)
	{
		cin >> i;
	}

	sort(a, a + n);

	for (int i = 0; i < n - 2; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			int l = j + 1;
			int r = n - 1;
			while (l < r)
			{
				if (a[l] + a[r] == k - a[i] - a[j])
				{
					cout << "YES";
					return 0;
				}
				else if (a[l] + a[r] > k - a[i] - a[j])
				{
					--r;
				}
				else
				{
					++l;
				}
			}
		}
	}
	cout << "NO";
	return 0;
	return 0;
	n return 0
}
d