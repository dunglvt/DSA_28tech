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
	int n; cin >> n;
	unordered_map<int, int> m;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		m[x]++;
		bool check = false;
		for (pair<int , int> &k : v) {
			if (k.first == x) {
				k.second = m[x];
				check = true;
				break;
			}
		}
		if (!check) {
			v.push_back({x, m[x]});
		}
	}

	vector<pair<int, int>> v1(v.begin(), v.end()), v2(v.begin(), v.end());

	sort(v1.begin(), v1.end(), [](const pair<int, int> &x, const pair<int, int> &y) {
		if (x.second == y.second) {
			return x < y;
		}
		return x.second > y.second;
	});

	stable_sort(v2.begin(), v2.end(), [](const pair<int, int> &x, const pair<int, int> &y) {
		return x.second > y.second;
	});

	for (pair<int, int> &x : v1) {
		while (x.second) {
			cout << x.first << ' ';
			--x.second;
		}
	}
	cout << endl;
	for (pair<int, int> &x : v2) {
		while (x.second) {
			cout << x.first << ' ';
			--x.second;
		}
	}
	return 0;
}
