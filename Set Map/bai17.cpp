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

bool cmp(pair<char, int> x, pair<char, int> y)
{
    if (x.second == y.second)
    {
        return x.first > y.first;
    }
    return x.second < y.second;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    fastIO;
    // code here
    string s;
    cin >> s;
    map<char, int> MAP;
    for (char x : s)
    {
        MAP[x]++;
    }

    vector<pair<char, int>> v(MAP.begin(), MAP.end());
    sort(v.begin(), v.end(), cmp);

    cout << (*v.rbegin()).fi << ' ' << (*v.rbegin()).se << endl;
    cout << (*v.begin()).fi << ' ' << (*v.begin()).se << endl;
    cout << v.size();
    return 0;
}