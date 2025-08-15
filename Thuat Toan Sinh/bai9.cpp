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
int a[111], b[111];
bool check = false;

void init() {
	for (int i = 1; i <= k; i++) {
		a[i] = i;
	}
}

void sinh() {
	int i = n;
	while (i > 0 && a[i] == n - k + i) {
		--i;
	}
	if (i == 0) {
		check = true;
	} else {
		a[i]++;
		for (int j = i + 1; j <= k; j++) {
			a[j] = a[j - 1] + 1;
		}
	}
}

int main()
{
	fastIO;

	cin >> n >> k;
	for (int i = 1; i <= k; i++) {
		cin >> b[i];
	}

	init();
	int count = 0, tmp = 0;
	bool kt = true;
	while (!check) {
		++count;
		for (int i = 1; i <= k; i++) {
			if (a[i] != b[i]) {
				kt = false;
				break;
			}
		}
		if (kt) {
			tmp = count;
		}
		sinh();
		kt = true;
	}
	cout << count - tmp + 1;
	return 0;
}