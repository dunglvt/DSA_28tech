#include <bits/stdc++.h>
using namespace std;

// input/output
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);

//data type
#define ll long long
#define ull unsigned long long

//STL
#define FORL(i,l,r) for(auto i = l; i <= r; i++)
#define FORR(i,r,l) for(auto i = r; i >= l; i--)
#define fi first
#define se second

//constant
#define MOD 1000000007
#define PI 3.14

int main() {

    fastIO;

    //code here
    int n, q; cin >> n >> q;
    int a[n];
    int d[n + 1];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    memset(d, 0, sizeof(d));
    while (q--) {
        int l, r;
        cin >> l >> r;
        ++d[l - 1];
        --d[r];
    }

    long long f[n];
    memset(f, 0, sizeof(f));
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            f[i] = d[i];
        } else {
            f[i] = d[i] + f[i - 1];
        }
    }

    sort(a, a + n, greater<int>());
    sort(f, f + n, greater<long long>());

    long long sum = 0;
    for (int i = 0 ; i < n; i++) {
        sum += f[i] * a[i];
    }
    cout << sum;
    return 0;
}
