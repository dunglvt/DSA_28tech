#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define MOD 1000000007
#define PI 3.14
using namespace std;

string s;
int n;
bool check = false;

void init()
{
	for (int i = 0; i < n; i++)
	{
		s += '6';
	}
}

void sinh()
{
	int i = n - 1;
	while (i >= 0 && s[i] == '8')
	{
		s[i] = '6';
		--i;
	}
	if (i == -1)
	{
		check = true;
	}
	else
	{
		s[i] = '8';
	}
}

bool kt1()
{
	return (s[0] == '8') && (s[n - 1] == '6');
}

bool kt2()
{
	for (int i = 0; i < n - 1; i++)
	{
		if ((s[i] == '8') && (s[i + 1] == '8'))
		{
			return false;
		}
	}
	return true;
}

bool kt3()
{
	for (int i = 0; i < n - 3; i++)
	{
		if ((s[i] == '6') && (s[i + 1] == '6') && (s[i + 2] == '6') && (s[i + 3] == '6'))
		{
			return false;
		}
	}
	return true;
}

int main()
{
	fastIO;

	cin >> n;
	init();
	while (!check)
	{
		if (kt1() && kt2() && kt3())
		{
			cout << s << endl;
		}
		sinh();
	}
	return 0;
}