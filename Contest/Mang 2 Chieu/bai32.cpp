#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return n > 1;
}

bool check(int a[], int n, int i) {
	if (i == n) {
		return true;
	}
	if (!isPrime(a[i])) {
		return false;
	}
	return check(a, n, i + 1);
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int &i : a) {
		cin >> i;
	}

	if (check(a, n, 0)) {
		cout << "28tech";
	} else {
		cout << "29tech";
	}
	return 0;
}