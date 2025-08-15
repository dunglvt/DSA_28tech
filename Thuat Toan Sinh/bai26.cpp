#include <bits/stdc++.h>
using namespace std;

char c;
string s = "ABCDEFGH";
string a;
bool check = false;

void init()
{
    for (int i = 0;; i++)
    {
        a += s[i];
        if (s[i] == c)
        {
            break;
        }
    }
}

void sinh()
{
    int n = a.length();
    int i = n - 2;
    while (i >= 0 && a[i] > a[i + 1])
    {
        --i;
    }
    if (i == -1)
    {
        check = true;
    }
    else
    {
        int j = n - 1;
        while (a[j] < a[i])
        {
            --j;
        }
        swap(a[i], a[j]);
        reverse(a.begin() + i + 1, a.end());
    }
}

bool kt()
{
    unordered_map<char, int> um;
    um['A'] = 1;
    um['E'] = 1;
    for (int i = 1; i < (int)a.length() - 1; i++)
    {
        if (um.count(a[i]) && (um.count(a[i - 1]) == 0) && (um.count(a[i + 1]) == 0))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cin >> c;
    init();
    while (!check)
    {
        if (kt())
        {
            cout << a << endl;
        }
        sinh();
    }
    return 0;
}