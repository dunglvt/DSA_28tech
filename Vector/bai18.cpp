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
    vector<string> res;

    string a[16];
    for (int i = 0; i < 10; i++)
    {
        a[i] = to_string(i);
    }
    a[10] = "a";
    a[11] = "b";
    a[12] = "c";
    a[13] = "d";
    a[14] = "e";
    a[15] = "f";

    while (t--)
    {
        vector<string> v;
        long long n;
        cin >> n;
        while (n)
        {
            long long temp = n % 16;
            v.push_back(a[temp]);
            n /= 16;
        }

        string result = "";
        for (vector<string>::reverse_iterator i = v.rbegin(); i != v.rend(); i++)
        {
            result += *i;
        }

        res.push_back(result);
    }

    for (string i : res)
    {
        cout << i << endl;
    }
    return 0;
}