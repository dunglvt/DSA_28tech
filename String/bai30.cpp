#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<string> v;

    string tmp;
    for (char x : s)
    {
        if (isdigit(x))
        {
            tmp += x;
        }
        else
        {
            if (!tmp.empty())
            {
                v.push_back(tmp);
                tmp.clear();
            }
        }
    }

    if (!tmp.empty())
    {
        v.push_back(tmp);
    }

    if (v.empty())
    {
        return 0;
    }

    for (string &x : v)
    {
        int count = 0;
        while (count < (int)x.size() && x[count] == '0')
        {
            ++count;
        }

        if (count == (int)x.size())
        {
            x = "0";
        }
        else
        {
            x = x.substr(count);
        }
    }

    sort(v.begin(), v.end(), [](const string &x, const string &y)
         { return x + y > y + x; });

    int dem = 0;
    for (string x : v)
    {
        if (x == "0")
        {
            ++dem;
        }
    }

    if (dem == (int)v.size())
    {
        cout << 0;
        return 0;
    }

    for (string x : v)
    {
        cout << x;
    }
    return 0;
}