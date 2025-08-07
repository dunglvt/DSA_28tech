#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}

int main()
{
    string s;
    cin >> s;

    int sum = 0;
    for (char x : s)
    {
        if (isdigit(x))
        {
            if (!isPrime(x - '0'))
            {
                cout << "NO";
                return 0;
            }
            sum += x - '0';
        }
    }
    if (!isPrime(sum))
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}