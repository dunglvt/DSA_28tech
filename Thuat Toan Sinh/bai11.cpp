#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define MOD 1000000007
#define PI 3.14
using namespace std;

int n, cnt = 0;
int a[222];
bool check = false;
int dem = 1;

void init()
{
	cnt = 1;
	a[0] = n;
}

void sinh()
{
	int i = cnt - 1;
	while (i >= 0 && a[i] == 1)
	{
		--i;
	}
	if (i == -1)
	{
		check = true;
	}
	else
	{
		int tmp = cnt - i;
		--a[i];
		cnt = i + 1;
		int q = tmp / a[i];
		int r = tmp % a[i];
		if (q != 0)
		{
			for (int j = 1; j <= q; j++)
			{
				a[i + j] = a[i];
			}
			cnt += q;
		}
		if (r != 0)
		{
			a[cnt] = r;
			++cnt;
		}
	}
}

int main()
{
	fastIO;
	cin >> n;
	init();
	while (!check)
	{
		sinh();
		if (!check)
		{
			++dem;
		}
	}
	cout << dem << endl;
	check = false;
	init();
	while (!check)
	{
		for (int i = 0; i < cnt; i++)
		{
			cout << a[i];
			if (i < cnt - 1)
			{
				cout << '+';
			}
		}
		cout << endl;
		sinh();
	}
	return 0;
}