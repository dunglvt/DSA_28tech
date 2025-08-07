#include <bits/stdc++.h>

using namespace std;

string gcd(string n, string m)
{
    if (m == "0")
    {
        return n;
    }
    long long res = 0;
    for (char x : n)
    {
        res = res * 10 + (x - '0');
        res %= stoll(m);
    }
    return gcd(m, to_string(res));
}

int main()
{
    string n, m;
    cin >> n >> m;

    cout << gcd(n, m);
    return 0;
}