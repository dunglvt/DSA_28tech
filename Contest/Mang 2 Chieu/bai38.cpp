#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[111][111];
int s = 0;
bool visited[111][111];
int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1};

void loang(int b, int c, int k) {
	s++;
	visited[b][c] = true;
	for (int i = 0; i < 8; i++) {
		int x = b + dx[i];
		int y = c + dy[i];
		if (x > 0 && y > 0 && x <= n && y <= m && a[x][y] == k && !visited[x][y]) {
			loang(x, y, k);
		}
	}
	return;
}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	cout << endl;
	map<int, vector<int>> list;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (!visited[i][j]) {
				loang(i, j, a[i][j]);
				list[a[i][j]].push_back(s);
				s = 0;
			}
		}
	}

	for (auto &x : list) {
		sort(x.second.begin(), x.second.end());
	}

	for (auto x : list) {
		cout << x.first << " : ";
		for (int i : x.second) {
			cout << i << ' ';
		}
		cout << endl;
	}
	return 0;
}