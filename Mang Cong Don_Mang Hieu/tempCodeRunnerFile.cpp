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
	int n, q;
	cin >> n >> q;
	int a[n];
	vector<pair<int, int>> freq;
	for (int &i : a)
	{
		cin >> i;
		bool check = false;
		for (int j = 0; j < (int)freq.size(); j++)
		{
			if (freq[j].first == i)
			{
				++freq[j].second;
				check = true;
			}
		}
		if (!check)
		{
			freq.push_back({i, 1});
		}
	}
	sort(freq.begin(), freq.end(), greater<>());
	long long sum = 0;
	sort(a, a + n, greater<>());
	while (q--)
	{
		int l, r;
		cin >> l >> r;
		for (int i = l - 1; i < r; i++)
		{
			sum += a[i];
		}
	}
	cout << sum;
	return 0;
}
