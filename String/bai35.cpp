#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum = 0;
    int dv = s[s.size() - 1] - '0';

    for (char x : s)
    {
        sum += x - '0';
    }

    if (sum % 3 == 0 && !(dv & 1))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}