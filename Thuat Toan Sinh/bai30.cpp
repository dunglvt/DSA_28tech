#include <iostream>
#include <algorithm>
using namespace std;

int n, s;
bool check = false;
int a[111], b[111], c[1111];

void sinh()
{
    int i = n - 1;
    while (i >= 0 && a[i] == 1)
    {
        a[i] = 0;
        --i;
    }
    if (i == -1)
    {
        check = true;
    }
    else
    {
        a[i] = 1;
    }
}

int main()
{
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {

        cin >> c[i];
    }

    int ans = 0;
    while (!check)
    {
        int sum_w = 0, sum_v = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1 && sum_w + b[i] <= s)
            {
                sum_w += b[i];
                sum_v += c[i];
            }
        }
        ans = max(ans, sum_v);
        sinh();
    }
    cout << ans;
    return 0;
}