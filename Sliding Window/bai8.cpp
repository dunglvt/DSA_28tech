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

    int n, k; cin >> n >> k;
    int a[n];
    for (int &i : a) {
        cin >> i;
    }

    map<int, int> mp;
    for (int i = 0; i <= k; i++) {
        mp[a[i]]++;
        if (mp[a[i]] == 2) {
            cout << "YES";
            return 0;
        }
    }

    for (int r = 0; r < n - k - 1; r++) {
        if (mp[a[r]] == mp[a[r + k]]) {
            cout << "YES";
            return 0;
        }
        mp[a[r]]--;
        mp[a[r + k + 1]]++;
        if (mp[a[r]] == 0) {
            mp.erase(a[r]);
        }
    }
    cout << "NO";
    return 0;
}