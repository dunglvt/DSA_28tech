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
    map<string, vector<pair<int, int>>> LIST;
    string s;
    while(getline(cin, s)){
        stringstream ss(s);
        string tmp;
        vector<string> TEMP;

        while(ss >> tmp){
            TEMP.push_back(tmp);
        }

        LIST[TEMP[0]].push_back({stoi(TEMP[1]), stoi(TEMP[2])});
    }

    for(map<string, vector<pair<int, int>>>::reverse_iterator it = LIST.rbegin(); it != LIST.rend(); it++){
        cout << (*it).first << " : ";
        double sum_Average = 0.0;
        int coE = 0;
        for(pair<int, int> x : (*it).second){
            sum_Average += x.first * x.second;
            coE += x.first;
        }
        cout << fixed << setprecision(2) << sum_Average / coE << endl;
    }
    return 0;
}