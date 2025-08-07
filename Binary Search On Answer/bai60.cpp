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

bool check(int a[], int n, int k, int m) {
	long long current_sum = a[0];
	int count = 1;
	for (int i = 1; i < n; i++) {
		if (current_sum + m <= a[i]) {
			++count;
			current_sum = a[i];
		}
	}
	return count >= k;
}

int main() {

	fastIO;

	//code here
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int &i : a) {
		cin >> i;
	}

	sort(a, a + n);

	int l = 1;
	int r = a[n - 1] - a[0];
	int res = -1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (check(a, n, k, m)) {
			res = m;
			l = m + 1;
		} else {
			r = m - 1;
		}
	}
	cout << res;
	return 0;
}
