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
	for (int i : a) {
		sum += i;
	}

	sort(a + 1, a + n);

	int j = 1;

	int t1 = n - k - 1;
	while (t1--) {
		sum -= 2 * a[j];
		j++;
	}
	cout << sum;
	return 0;
}
