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
int a[22];
bool check = false;

void init() {
	for (int i = 1; i <= k; i++) {
		a[i] = i;
	}
}

void sinh() {
	int i = k;
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
	init();
	while (!check) {
		for (int i = 1; i <= k; i++) {
			cout << a[i];
		}
		cout << endl;
		sinh();
	}
	return 0;
}