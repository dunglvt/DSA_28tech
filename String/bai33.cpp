#include <bits/stdc++.h>

using namespace std;

bool tn(string s)
{
    string tmp = s;
    reverse(s.begin(), s.end());
    return tmp == s;
}

int main()
{
    string s;
    cin >> s;

    bool check = false;
    for (char x : s)
    {
        if (x == '6')
        {
            check = true;
            break;
        }
    }
    if (check && tn(s))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}