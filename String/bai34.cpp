#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    bool check1 = true, check2 = true;
    for (int i = 0; i < (int)s.size() - 1; i++)
    {
        int tmp = s[i] - '0';
        int tmp1 = s[i + 1] - '0';
        if (tmp1 - tmp < 0)
        {
            check1 = false;
            break;
        }
    }
    for (int i = 0; i < (int)s.size() - 1; i++)
    {
        int tmp = s[i] - '0';
        int tmp1 = s[i + 1] - '0';
        if (tmp1 - tmp > 0)
        {
            check2 = false;
            break;
        }
    }

    if (check1 || check2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}