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
	pair<int, int> a[n];
	for (pair<int, int> &i : a) {
		cin >> i.first >> i.second;
	}

	sort(a, a + n, [](const pair<int, int> &x, const pair<int, int> &y) {
		return x.first < y.first;
	});

	long long time = a[0].first + a[0].second;

	for (int i = 1; i < n; i++) {
		if (a[i].first >= time) {
			time = a[i].first + a[i].second;
		} else {
			time += a[i].second;
		}
	}
	cout << time;
	return 0;
}
