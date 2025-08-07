#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

long long getMod(string n)
{
    long long tmp = 0;
    for (char x : n)
    {
        tmp = tmp * 10 + (x - '0');
        tmp %= MOD;
    }
    return tmp;
}

string binPow(string a, long long b)
{
    long long ans = 1;
    long long res = getMod(a);
    while (b != 0)
    {
        if (b % 2)
        {
            ans *= res;
            ans %= MOD;
        }
        b >>= 1;
        res *= res;
        res %= MOD;
    }
    return to_string(ans);
}

int main()
{
    string n;
    long long m;
    cin >> n >> m;

    cout << binPow(n, m);
    return 0;
}