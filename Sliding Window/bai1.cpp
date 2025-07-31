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
	int n, k; cin >> n >> k;
	int a[n];
	for (int &i : a) {
		cin >> i;
	}

	long long sum = 0;
	for (int i = 0; i < k; i++) {
		sum += a[i];
	}
	int pos = 0;
	long long ans = sum;
	for (int i = 1; i < n - k + 1; i++) {
		sum = sum - a[i - 1] + a[i + k - 1];
		if (sum > ans) {
			pos = i;
			ans = sum;
		}
	}
	cout << ans << endl;
	for (int i = pos; i < k + pos; i++) {
		cout << a[i] << ' ';
	}
	return 0;
}
