#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define MOD 1000000007
#define PI 3.14
using namespace std;

int n;
int a[11], b[11];
bool check = false;

void init()
{
	for (int i = 0; i < n; i++)
	{
		a[i] = 0;
		b[i] = i + 1;
	}
}

void sinh()
{
	int i = n - 1;
	while (i >= 0 && a[i] == 1)
	{
		a[i] = 0;
		--i;
	}
	if (i == -1)
	{
		check = true;
	}
	else
	{
		a[i] = 1;
	}
}

int main()
{
	fastIO;
	cin >> n;
	init();
	int j = 0;
	vector<vector<int>> v((1 << n));
	while (!check)
	{
		sinh();
		for (int i = 0; i < n; i++)
		{
			if (a[i] == 1)
			{
				v[j].push_back(b[i]);
			}
		}
		++j;
	}
	sort(v.begin(), v.end());
	for (vector<int> x : v)
	{
		for (int j : x)
		{
			cout << j << ' ';
		}
		cout << endl;
	}
	return 0;
}