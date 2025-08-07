#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n;
	cin >> n;

	char s[28] = {
		'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R'
	};

	if (n == 0) {
		cout << 0;
		return 0;
	}
	string res;
	while (n) {
		int dv = n % 28;
		res += s[dv];
		n /= 28;
	}
	reverse(res.begin(), res.end());
	cout << res;
	return 0;
}