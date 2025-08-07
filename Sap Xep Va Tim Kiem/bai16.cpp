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
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({a, b});
	}

	sort(v.begin(), v.end(), [](const pair<int, int> &x, const pair<int, int> &y) {
		return x.second < y.second;
	});

	int count = 1;
	int endTime = v[0].second;
	for (int i = 1; i < n; i++) {
		if (endTime < v[i].first) {
			++count;
			endTime = v[i].second;
		}
	}

	cout << count;
	return 0;
}
