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

int cnt[1000006];

int main() {

	fastIO;

	//code here
	int n; cin >> n;
	int a[n];
	for (int &i : a) {
		cin >> i;
		cnt[i] = 1;
	}
	int count = 0;
	int l = *min_element(a, a + n);
	int r = *max_element(a, a + n);
	for (int i = l; i <= r; i++) {
		if (cnt[i] == 0) {
			++count;
		}
	}
	cout << count;
	return 0;
}
