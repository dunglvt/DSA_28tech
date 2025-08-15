#include <iostream>
#include <algorithm>
using namespace std;

int a[11];
bool check = false;
int n;

void init()
{
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
}

void sinh()
{
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
        reverse(a + i + 1, a + n);
    }
}

bool kt()
{
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(a[i] - a[i + 1]) == 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cin >> n;
    init();
    while (!check)
    {
        if (kt())
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i];
            }
            cout << endl;
        }
        sinh();
    }
    return 0;
}