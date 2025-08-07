#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	int cnt[256] = {0};

	for (char &x : s) {
		x = tolower(x);
		cnt[x] = 1;
	}

	for (int i = 97; i <= 122; i++) {
		if (cnt[i] == 0) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}
