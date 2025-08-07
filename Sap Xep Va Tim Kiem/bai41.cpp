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
	int n, x;
	cin >> n >> x;
	int a[n];

	for (int &i : a) {
		cin >> i;
	}

	int sum = 0;
	int l = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
		if (sum > x) {
			while (sum > x && l <= i) {
				sum -= a[l++];
				if (sum == x) {
					++count;
				}
			}
		} else if (sum == x) {
			++count;
		}
	}
	cout << count;
	return 0;
}
