#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int n;
bool check = false;
string a;

void init(int len)
{
    for (int i = 0; i < len; i++)
    {
        a += '0';
    }
}

void sinh(int len)
{
    int i = len - 1;
    while (i >= 0 && a[i] == '1')
    {
        a[i] = '0';
        --i;
    }
    if (i == -1)
    {
        check = true;
    }
    else
    {
        a[i] = '1';
    }
}

bool tn(string s)
{
    string tmp = s;
    reverse(s.begin(), s.end());
    return s == tmp;
}

string rv(string a)
{
    reverse(a.begin(), a.end());
    return a;
}

int main()
{
    cin >> n;
    unordered_map<string, int> um;
    vector<string> v;
    for (int len = 2; len <= n / 2; len++)
    {
        init(len);
        while (!check)
        {
            if (!(len & 1) && tn(a) && um.count(a) == 0)
            {
                um[a]++;
                v.push_back(a);
            }
            string tmp = a + rv(a);
            if (um.count(tmp) == 0)
            {
                v.push_back(tmp);
                um[tmp]++;
            }
            sinh(len);
        }
        check = false;
        a.clear();
    }
    sort(v.begin(), v.end());
    for (string x : v)
    {
        cout << x << endl;
    }
    return 0;
}