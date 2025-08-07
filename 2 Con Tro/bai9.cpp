#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &i : a)
    {
        cin >> i;
    }

    long long count = 0;
    int l = 0;
    multiset<int> s;
    for (int r = 0; r < n; r++)
    {
        s.insert(a[r]);
        while (*s.rbegin() - *s.begin() > k)
        {
            s.erase(s.find(a[l]));
            ++l;
        }
        count += r - l + 1;
    }
    cout << count;
    return 0;
}