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
int a[111], b[111];
bool check = false;

void init() {
	for (int i = 0; i < n; i++) {
		a[i] = i + 1;
	}
}

void sinh() {
	int i = n - 2;
	while (i >= 0 && a[i] > a[i + 1]) {
		--i;
	}
	if (i == -1) {
		check = true;
	} else {
		int j = n - 1;
		while (a[j] < a[i]) {
			j--;
		}
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n);
	}
}

int main()
{
	fastIO;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	init();
	int count = 0;
	bool kt = true;
	while (!check) {
		++count;
		for (int i = 0; i < n; i++) {
			if (a[i] != b[i]) {
				kt = false;
				break;
			}
		}
		if (kt) {
			cout << count;
			break;
		}
		sinh();
		kt = true;
	}
	return 0;
}