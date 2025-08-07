#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define MOD 1000000007
#define PI 3.14
using namespace std;

int main()
{
    fastIO;

    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &i : a)
    {
        cin >> i;
    }

    int l = 0, ans = 1e9, pos = -1;
    long long sum = 0;
    for (int r = 0; r < n; r++)
    {
        sum += a[r];
        if (sum >= k)
        {
            while (sum - a[l] >= k)
            {
                sum -= a[l];
                ++l;
            }
            if (ans > r - l + 1)
            {
                ans = r - l + 1;
                pos = l;
            }
        }
    }
    if (pos == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = pos; i < ans + pos; i++)
        {
            cout << a[i] << ' ';
        }
    }
    return 0;
}