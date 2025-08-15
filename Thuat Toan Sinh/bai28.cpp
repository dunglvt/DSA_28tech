#include <iostream>
#include <algorithm>
using namespace std;

int a[4], b[3];
bool check = false, check1 = false;

void sinh()
{
    int i = 2;
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
        int j = 3;
        while (a[j] < a[i])
        {
            --j;
        }
        swap(a[j], a[i]);
        reverse(a + i + 1, a + 4);
    }
}

void init()
{
    for (int i = 0; i < 3; i++)
    {
        b[i] = 0;
    }
}

void sinh1()
{
    int i = 2;
    while (i >= 0 && b[i] == 1)
    {
        b[i] = 0;
        --i;
    }
    if (i == -1)
    {
        check1 = true;
    }
    else
    {
        b[i] = 1;
    }
}

int main()
{
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    long long ans = -1e18;
    init();
    while (!check1)
    {
        long long sum = a[0];
        for (int i = 0; i < 3; i++)
        {
            if (b[i] == 1)
            {
                sum += a[i + 1];
            }
            else
            {
                sum -= a[i + 1];
            }
        }
        ans = max(ans, sum);
        sinh1();
    }
    cout << ans;
    return 0;
}