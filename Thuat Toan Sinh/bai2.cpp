#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define MOD 1000000007
#define PI 3.14
using namespace std;

bool check = false;
int a[10004], b[10004];
void sinh(int n, int k) {
	int i = k - 1;
	while (i >= 0 && a[i] == n - (k - i - 1)) {
		b[i] = 1;
		--i;
	}
	if (i == -1) {
		check = true;
	} else {
		a[i]++;
		for (int j = i + 1; j < k; j++) {
			a[j] = a[j - 1] + 1;
		}
	}
	return;
}

int main()
{
	fastIO;
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < k; i++) {
		cin >> a[i];
	}
	sinh(n, k);
	if (check) {
		for (int i = 0; i < k; i++) {
			cout << i + b[i] << ' ';
		}
		return 0;
	}
	for (int i = 0; i < k; i++) {
		cout << a[i] << ' ';
	}
	return 0;
}