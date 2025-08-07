#include <bits/stdc++.h>
using namespace std;

// input/output
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);

//data type
#define ll long long
#define ull unsigned long long

//STL
#define FORL(i,l,r) for(auto i = l; i <= r; i++)
#define FORR(i,r,l) for(auto i = r; i >= l; i--)
#define fi first
#define se second

//constant
#define MOD 1000000007
#define PI 3.14

int main() {
	fastIO;

	int m, s;
	cin >> m >> s;

	if ((s == 0 && m > 1) || s > 9 * m) {
		cout << "NOT FOUND";
		return 0;
	}
	if (s == 0 && m == 1) {
		cout << "0 0";
		return 0;
	}

	string max_value = "", min_value = "";

	int temp = s;
	for (int i = 0; i < m; i++) {
		int digit = min(9, temp);
		max_value += char(digit + '0');
		temp -= digit;
	}

	temp = s;
	for (int i = 0; i < m; i++) min_value += '0';

	temp--;
	for (int i = m - 1; i > 0; i--) {
		if (temp >= 9) {
			min_value[i] = '9';
			temp -= 9;
		} else {
			min_value[i] = char('0' + temp);
			temp = 0;
		}
	}
	min_value[0] = char('1' + temp);

	cout << min_value << ' ' << max_value;
	return 0;
}
