#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define MOD 1000000007
#define PI 3.14
using namespace std;

int n, k;
int a[1111], b[1111];
bool check = false;

void sinh()
{
	int i = k - 1;
	while (i >= 0 && a[i] == n - k + i + 1)
	{
		--i;
	}
	if (i == -1)
	{
		check = true;
	}
	else
	{
		a[i]++;
		for (int j = i + 1; j < k; j++)
		{
			a[j] = a[j - 1] + 1;
		}
	}
}

int main()
{
	fastIO;
	cin >> n >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> b[i];
		a[i] = b[i];
	}

	sinh();
	int cnt = 0;
	if (check)
	{
		cnt = k;
	}
	else
	{
		for (int i = 0; i < k; i++)
		{
			if (a[i] != b[i])
			{
				++cnt;
			}
		}
	}
	cout << cnt;
	return 0;
}