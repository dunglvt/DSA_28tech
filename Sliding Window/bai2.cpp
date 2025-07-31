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
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int &i : a) {
		cin >> i;
	}

	int max_value = -1e9;
	long long sum = 0;
	for (int i = 0; i < k; i++) {
		sum += a[i];
		max_value = max(max_value, a[i]);
	}

	for (int i = 1; i < n - k + 1; i++) {
		if (max_value != a[i - 1]) {
			max_value = max(max_value, a[i + k - 1]);
		} else {
			for (int j = i; j < j + k; j++) {
				max_value = max(max_value, a[j]);
			}
		}
		cout << max_value << ' ';
	}
	return 0;
}
