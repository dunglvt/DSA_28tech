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
    int sum = 0;
    for (int &i : a) {
        cin >> i;
        sum += i;
    }

    if (sum < k) {
        cout << -1 << endl;
        return 0;
    }

    int cur_sum = 0, ans = 0;
    for (int i = 0; i < k; i++) {
        cur_sum += a[i];
    }
    for (int i = 0; i < n - k; i++) {
        cur_sum += a[i + k] - a[i];
        ans = max(ans, cur_sum);
    }

    cout << abs(ans - k);
    return 0;
}