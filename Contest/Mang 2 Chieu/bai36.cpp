#include <bits/stdc++.h>
using namespace std;

int n, m, s = 0;
int h1, h2, c1, c2;
int a[111][111];
bool visited[111][111];
int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1};

void loang(int b, int c) {
	++s;
	visited[b][c] = true;
	h1 = min(h1, b);
	h2 = max(h2, b);
	c1 = min(c1, c);
	c2 = max(c2, c);
	for (int i = 0; i < 8; i++) {
		int x = b + dx[i];
		int y = c + dy[i];
		if (x > 0 && y > 0 && x <= n && y <= m && a[x][y] == 1 && visited[x][y] == false) {
			loang(x, y);
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

	int count = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (!visited[i][j] && a[i][j]) {
				h1 = i;
				c1 = j;
				h2 = i;
				c2 = j;
				loang(i, j);
				int dienTich = (abs(h2 - h1) + 1) * (abs(c2 - c1) + 1);
				if (dienTich == s) {
					++count;
				}
				// cout << h1 << ' ' << c1 << ' ' << h2 << ' ' << c2 << endl;
				s = 0;
			}
		}
	}
	cout << count;
	return 0;
}