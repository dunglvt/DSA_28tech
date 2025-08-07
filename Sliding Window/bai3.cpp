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
    for (int &i : a) {
        cin >> i;
    }

    multiset<int> ms;

    for (int i = 0; i < k; i++) {
        ms.insert(a[i]);
    }

    multiset<int>::iterator it = ms.begin();

    for (int i = 0; i < (k - 1) / 2; i++) {
        ++it;
    }

    cout << *it << ' ';
    for (int i = k; i < n; i++) {
        ms.insert(a[i]);
        if (a[i] < *it) {
            --it;
        }
        if (a[i - k] <= *it) {
            ++it;
        }
        ms.erase(ms.find(a[i - k]));
        cout << *it << " ";
    }
    return 0;
}