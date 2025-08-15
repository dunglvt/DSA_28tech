#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define MOD 1000000007
#define PI 3.14
using namespace std;

bool check = false;
string a;

void init(int len)
{
	for (int i = 0; i < len; i++)
	{
		a += '0';
	}
	a[len - 1] = '8';
}

void sinh(int len)
{
	int i = len - 1;
	while (i >= 0 && a[i] == '8')
	{
		a[i] = '0';
		--i;
	}
	if (i == -1)
	{
		check = true;
	}
	else
	{
		a[i] = '8';
	}
}

long long chiaHet(string res, int n)
{
	long long r = 0;
	for (char x : res)
	{
		r = r * 10 + (x - '0');
		r %= n;
	}
	return r;
}

int main()
{
	fastIO;
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int len = 1;
		bool found = false;
		while (!found)
		{
			check = false;
			a.clear();
			init(len);
			while (!check)
			{
				if (chiaHet(a, n) == 0)
				{
					cout << a << endl;
					found = true;
					break;
				}
				sinh(len);
			}
			++len;
		}
	}
	return 0;
}