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

bool check(int a[], int n, int H, int k) {
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (a[i] + k - 1) / k;
		if (sum > H) {
			return false;
		}
	}
	return true;
}

int main() {

	fastIO;

	//code here
	int n, H;
	cin >> n >> H;
	int a[n];
	for (int &i : a) {
		cin >> i;
	}

	long long l = 1;
	long long r = *max_element(a, a + n);
	long long res = -1;
	while (l <= r) {
		long long m = (l + r) / 2;
		if (check(a, n, H, m)) {
			res = m;
			r = m - 1;
		} else {
			l = m + 1;
		}
	}
	cout << res;
	return 0;
}
