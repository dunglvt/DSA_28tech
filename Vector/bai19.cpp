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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<int> v1, v2;
    int n;
    while (cin >> n)
    {
        if (isPrime(n))
        {
            v1.push_back(n);
        }
        else
        {
            v2.push_back(n);
        }
    }

    for (vector<int>::reverse_iterator it1 = v1.rbegin(); it1 != v1.rend(); it1++)
    {
        cout << *it1 << ' ';
    }
    cout << endl;

    for (int i : v2)
    {
        cout << i << ' ';
    }
    return 0;
}