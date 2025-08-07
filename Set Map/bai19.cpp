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
    cin.ignore(1);
    map<string, vector<string>> LIST;

    while (n--)
    {
        vector<string> TEMP;
        string s;
        getline(cin, s);
       
        stringstream ss(s);
        string tmp;
        while (getline(ss, tmp, '-'))
        {
            if(tmp != ""){
                TEMP.push_back(tmp);
            }
        }
        TEMP[0].erase(TEMP[0].size() - 1, 1);
        TEMP[1].erase(0, 1);
        LIST[TEMP[0]].push_back(TEMP[1]);
        LIST[TEMP[1]].push_back(TEMP[0]);
    }

    for (map<string, vector<string>>::iterator x = LIST.begin(); x != LIST.end(); x++)
    {
        cout << (*x).first << " : ";
        sort((*x).second.begin(), (*x).second.end());
        for (vector<string>::iterator i = (*x).second.begin(); i != (*x).second.end(); i++)
        {
            cout << *i;
            if( i != (*x).second.end() - 1){
                cout << ", ";
            }
        }
        cout << endl;
    }
    return 0;
}