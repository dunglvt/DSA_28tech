#include <iostream>
using namespace std;

int n, k;
int x[1111];
void result()
{
	for (int i = 1; i <= k; i++)
	{
		cout << x[i];
	}
	cout << endl;
}

void Try(int i)
{
	for (int j = 1; j <= n; j++)
	{
		x[i] = j;
		if (i == k)
		{
			result();
		}
		else
		{
			Try(i + 1);
		}
	}
}

int main()
{
	cin >> n >> k;
	Try(1);
	return 0;
}