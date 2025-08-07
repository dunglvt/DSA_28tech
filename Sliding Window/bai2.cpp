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

	// code here
	int n, k;
	cin >> n >> k;
	map<int, int> mp;
	int a[n];
	for (int &i : a)
	{
		cin >> i;
	}

	for (int i = 0; i < k; i++)
	{
		mp[a[i]]++;
	}
	cout << (*(mp).begin()).first << ' ' << (*(mp).rbegin()).first << endl;

	for (int r = 0; r < n - k; r++)
	{
		mp[a[r + k]]++;
		if (mp[a[r + k]] == 1)
		{
			mp[a[r + k]] = 1;
		}
		--mp[a[r]];
		if (mp[a[r]] == 0)
		{
			mp.erase(a[r]);
		}
		cout << (*(mp).begin()).first << ' ' << (*(mp).rbegin()).first << endl;
	}
	return 0;
}
