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

bool check(int a[], int n, int k, long long m) {
	long long sum = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
		if (sum >= m) {
			++count;
			sum = 0;
		}
	}
	return count >= k + 1;
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

	long long res = -1;
	long long l = *min_element(a, a + n);
	long long r = 0;

	for (int i : a) {
		r += i;
	}

	while (l <= r) {
		long long m = (l + r) / 2;
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
