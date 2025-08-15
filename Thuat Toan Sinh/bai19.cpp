#include <iostream>
#include <algorithm>
using namespace std;

int n;
bool check = false;
string a;

void init()
{
    for (int i = 0; i < n; i++)
    {
        a += '0';
    }
}

void sinh()
{
    int i = n - 1;
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

bool thuanNghich(string s)
{
    string tmp = s;
    reverse(s.begin(), s.end());
    return tmp == s;
}

int main()
{
    cin >> n;
    init();
    while (!check)
    {
        if (thuanNghich(a))
        {
            cout << a << endl;
        }
        sinh();
    }
    return 0;
}