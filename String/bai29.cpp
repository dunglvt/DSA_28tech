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

    for (string x : v)
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

    long long sum = 0;
    for (string x : v)
    {
        sum += stoll(x);
    }
    cout << sum;
}