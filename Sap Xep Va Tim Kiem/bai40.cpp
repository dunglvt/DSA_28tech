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
	vector<int> pos(n + 1);
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		pos[x] = i;
	}

	int count = 1;
	for (int i = 1; i < n; i++) {
		if (pos[i] > pos[i + 1]) {
			++count;
		}
	}
	cout << count;
	return 0;
}
