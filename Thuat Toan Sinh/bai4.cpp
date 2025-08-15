#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define MOD 1000000007
#define PI 3.14
using namespace std;

int n;
int a[22];
bool check = false;

void init() {
	for (int i = 1; i <= n; i++) {
		a[i] = 1;
	}
}

void sinh() {
	int i = n;
	while (i > 0 && a[i] == 0) {
		a[i] = 1;
		i--;
	}
	if (i == 0) {
		check = true;
	} else {
		a[i] = 0;
	}
}

int main()
{
	fastIO;

	cin >> n;
	init();
	while (!check) {
		for (int i = 1; i <= n; i++) {
			if (a[i] == 1) {
				cout << 'B';
			} else {
				cout << 'A';
			}
		}
		sinh();
		cout << endl;
	}
	return 0;
}