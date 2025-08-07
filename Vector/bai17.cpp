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

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    fastIO;
    // code here
    int t;
    cin >> t;
    vector<string> result;

    while (t--)
    {
        long long n;
        cin >> n;
        vector<string> v;
        while (n)
        {
            int tmp = n % 2;
            v.push_back(to_string(tmp));
            n /= 2;
        }

        string res = "";
        for (vector<string>::reverse_iterator it = v.rbegin(); it != v.rend(); it++)
        {
            res += *it;
        }

        while (res.length() < 64)
        {
            res = '0' + res;
        }

        result.push_back(res);
    }

    for (string i : result)
    {
        cout << i << endl;
    }
    return 0;
}