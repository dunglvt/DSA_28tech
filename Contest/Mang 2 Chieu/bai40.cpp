#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[1111][1111];
bool visited[1111][1111];
int dx[4] = { -1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};


int main() {
	cin >> n >> m;
	vector<pair<int, int>> list;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m ; j++) {
			cin >> a[i][j];
			if (a[i][j] == 28) {
				list.push_back({i, j});
			}
		}
	}

	for (auto x : list) {
		for (int i = 1; i <= m; i++) {
			a[x.first][i] = 28;
		}
	}

	for (auto x : list) {
		for (int i = 1; i <= n; i++) {
			a[i][x.second] = 28;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m ; j++) {
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}