#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int k;
    cin >> s >> k;

    for (int i = (int)s.size() - k; i < (int)s.size(); i++)
    {
        if (s[i] != '0')
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}