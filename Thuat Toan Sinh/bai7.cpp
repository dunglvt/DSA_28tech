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
string a[111];
bool check = false;

// void init() {
// 	for (int i = 1; i <= n; i++) {
// 		a[i] = i;
// 	}
// }

void sinh() {
	int i = n - 1;
	while (i > 0 && a[i] > a[i + 1]) {
		--i;
	}
	if (i == 0) {
		check = true;
	} else {
		int j = n;
		while (a[j] < a[i]) {
			--j;
		}
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
	}
}

int main()
{
	fastIO;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + n + 1);
	while (!check) {
		for (int i = 1; i <= n; i++) {
			cout << a[i] << ' ';
		}
		cout << endl;
		sinh();
	}
	return 0;
}