#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

// input/output
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr)

// data type
#define ll long long
#define ull unsigned long long

// STL
#define FORL(i, l, r) for (ll i = l; i <= r; ++i)
#define FORR(i, r, l) for (ll i = r; i >= l; --i)
#define fi first
#define se second

// constant
#define MOD 1000000007
#define PI 3.141592653589793

bool cmp(pair<string, int> x, pair<string, int> y) {
    if (x.second == y.second) {
        return x.first < y.first;
    }
    return x.second < y.second;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    fastIO;
    // code here
    map<string, int> m;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        m[s]++;
    }

    vector<pair<string, int>> LIST(m.begin(), m.end());

    sort(LIST.begin(), LIST.end(), [](const auto & x, const auto & y) {
        return x.first > y.first;
    });

    int maxScore = 0;
    for (auto x = LIST.rbegin(); x != LIST.rend(); x++) {
        cout << (*x).first << ' ' << (*x).second << endl;
        maxScore = max(maxScore, (*x).second);
    }
    auto pos = max_element(LIST.begin(), LIST.end(), cmp);

    cout << endl;

    cout << LIST[0].first << ' ' << LIST[0].second << endl;
    cout << (*pos).first << ' ' << (*pos).second << endl;
    return 0;
}