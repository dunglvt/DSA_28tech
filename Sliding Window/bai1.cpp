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

int a[113][113];

int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1};

int main() {

	fastIO;

	//code here
	int n; cin >> n;

	for (int i  = 0; i < n; i++) {
		for (int j = 0; j < n; j ++) {
			cin >> a[i][j];
		}
	}

	int max_sum = 0;
	for (int i = 1; i < n - 1; i++) {
		for (int j = 1; j < n - 1; j++) {
			int sum = a[i][j];
			for (int k = 0; k < 8; k++) {
				sum += a[dx[k] + i][dy[k] + j];
			}
			max_sum = max(max_sum, sum);
		}
	}
	cout << max_sum;
	return 0;
}

bool Try(int i, int j) {
	if (a[i][j] == 0 || visited[i][j]) return false;

	visited[i][j] = 1;

	for (int k = 0; k < 4; k++) {
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m) {
			Try(i1, j1);
		}
	}
	return true;
}
