#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    long long f[1001] = {0};
    long long sum = 0;

    f[0] = 1;
    for (int i = 1; i < 1001; i++)
    {
        f[i] = 2 * f[i - 1];
        f[i] %= 5;
    }

    for (int i = 0; i < (int)s.size(); i++)
    {
        sum += f[s.size() - i - 1] * (s[i] - '0');
        sum %= 5;
    }
    if (sum == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}