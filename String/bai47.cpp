#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	string a;
	ll x, y;
	cin >> a >> x >> y;

	ll g = gcd(x, y); // TÃ­nh UCLN cá»§a x vÃ  y
	for (ll i = 0; i < g; i++) {
		cout << a; // In chuá»—i a Ä‘Ãºng g láº§n
	}

	return 0;
}