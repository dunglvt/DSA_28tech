#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n, m;
    cin >> n >> m;

    long long res = 0;
    for (char x : n)
    {
        res = res * 10 + (x - '0');
        res %= stoll(m);
    }

    cout << res;
    return 0;
}