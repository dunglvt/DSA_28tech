#include <bits/stdc++.h>
using namespace std;

int a[555][555];

bool isPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return n > 1;
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}

	int count1 = 0;
	int count2 = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i < j) {
				if (isPrime(a[i][j])) {
					++count1;
				}
			} else if (i > j) {
				if (isPrime(a[i][j])) {
					++count2;
				}
			}
		}
	}
	if (count2 < count1) {
		cout << "28tech";
	} else if (count2 > count1) {
		cout << "29tech";
	} else {
		cout << "30tech";
	}
	return 0;
}