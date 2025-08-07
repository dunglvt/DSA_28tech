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
    int n;
    cin >> n;
    map<string, string> MAP;
    for (int i = 0; i < n; i++)
    {
        string mssv, name;
        cin >> mssv;
        cin.ignore(1);
        getline(cin, name);
        MAP.insert({mssv, name});
    }

    int q;
    cin >> q;
    while (q--)
    {
        bool check = false;
        string test;
        cin >> test;
        map<string, string>::iterator pos = MAP.find(test);
        if (pos != MAP.end())
        {
            check = true;
            cout << (*pos).se << endl;
        }
        if (!check)
        {
            cout << "NOT FOUND\n";
        }
    }
    return 0;
}