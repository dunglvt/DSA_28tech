#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define MOD 1000000007
#define PI 3.14
using namespace std;

int n, k;
int a[111];
bool check = false;
int cnt = 0;

void init() {
	for (int i = 0; i < n; i++) {
		a[i] = 0;
	}
}

void sinh() {
	int i = n - 1;
	while (i >= 0 && a[i] == 1) {
		a[i] = 0;
		--i;
	}
	if (i == -1) {
		check = true;
	} else {
		a[i] = 1;
	}
	for (int j = 0; j < n; j++) {
		if (a[j] == 1) {
			++cnt;
		}
	}
}

bool kiemTra(int a[], int n, int k) {
	int dem = 0;
	for (int i = 0; i <= n - k; i++) {
		bool kt = true;
		for (int j = i; j < k + i; j++) {
			if (a[j] != 1) {
				kt = false;
				break;
			}
		}
		if (kt) {
			++dem;
		}
		kt = false;
	}
	return dem == 1;
}

int main()
{
	fastIO;

	cin >> n >> k;

	init();
	while (!check) {
		sinh();
		if (cnt == k) {
			for (int i = 0; i < n; i++) {
				cout << a[i];
			}
			cout << ' ';
		}
		cnt = 0;
	}
	cout << endl;
	init();
	check = false;

	while (!check) {
		sinh();
		if (kiemTra(a, n, k)) {
			for (int i = 0; i < n; i++) {
				cout << a[i];
			}
			cout << ' ';
		}
	}
	return 0;
}