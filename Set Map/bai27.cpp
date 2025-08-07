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
    int n; cin >> n;
    cin.ignore(1);
    map<string, string> LIST;
    for(int i = 0; i < n; i++){
        string s1, s2;
        getline(cin , s1);
        getline(cin, s2);
        LIST.insert({s2, s1});
    }

    int t; cin >> t;
    while(t--){
        string x, y;
        int amount;
        cin >> x >> y >> amount;
        
        map<string, string>::iterator sender = LIST.find(x);
        map<string, string>::iterator recipient = LIST.find(y);

        if(sender != LIST.end()){
            cout << (*sender).second;
        } else {
            cout << "Unknown wallet";
        }
        cout << " send " << amount << " bitcoin to ";

        if(recipient != LIST.end()){
            cout << (*recipient).second << endl;
        } else {
            cout << "Unknown wallet\n";
        }

    }
    return 0;
}