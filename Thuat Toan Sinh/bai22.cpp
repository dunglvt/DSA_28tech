#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
string s;
bool check = false;

void init(int len)
{
    for (int i = 0; i < len; i++)
    {
        s += '6';
    }
}

void sinh(int len)
{
    int i = len - 1;
    while (i >= 0 && s[i] == '8')
    {
        s[i] = '6';
        --i;
    }
    if (i == -1)
    {
        check = true;
    }
    else
    {
        s[i] = '8';
    }
}

bool kt()
{
    string tmp = s;
    reverse(tmp.begin(), tmp.end());
    return tmp == s;
}

int main()
{
    cin >> n;
    int len = 2;
    vector<string> v;
    while ((int)v.size() < n)
    {
        init(len);
        while (!check)
        {
            if (kt())
            {
                v.push_back(s);
                if ((int)v.size() == n)
                {
                    break;
                }
            }
            sinh(len);
        }
        len += 2;
        s.clear();
        check = false;
    }
    sort(v.begin(), v.end(), [](const string &x, const string &y)
         {
        if(x.length() == y.length()){
            return x < y;
        }
        return x.length() < y.length(); });

    for (string x : v)
    {
        cout << x << ' ';
    }
    return 0;
}