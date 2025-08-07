#include <bits/stdc++.h>
using namespace std;

int n;
char a[555][555];
int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1};
bool visited[555][555];
map<char, int> mp;

void loang(int b, int c) {
	visited[b][c] = true;
	for (int i = 0; i < 8; i++) {
		int x = b + dx[i];
		int y = c + dy[i];
		mp[a[x][y]]++;
	}
	return;
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
			a[i][j] = tolower(a[i][j]);
		}
	}

	if (n < 3) {
		cout << "29tech";
		return 0;
	}

	string s = "28tech";
	for (int i = 2; i <= n - 1; i++) {
		for (int j = 2; j <= n - 1; j++) {
			bool check = true;
			mp[a[i][j]]++;
			loang(i, j);
			for (char x : s) {
				if (mp[x] == 0) {
					check = false;
					break;
				}
			}
			if (check) {
				cout << "28tech";
				return 0;
			}
			mp.clear();
		}
	}
	cout << "29tech";
	return 0;
}