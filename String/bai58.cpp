#include <bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false), cin.tie(nullptr);
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define MOD 1000000007
#define PI 3.14
using namespace std;

int main()
{
	fastIO;
	int t; cin >> t;
	cin.ignore(1);
	while (t--) {
		string s;
		getline(cin, s);
		vector<string> v;
		for (char &x : s) {
			if ( x == '+') {
				x = ' ';
			}
		}

		stringstream ss(s);
		string tmp;
		while (ss >> tmp) {
			v.push_back(tmp);
		}

		map<string, int> m;
		for (string x : v) {
			string k, h;
			for (int i = (int)x.length() - 3; i < (int)x.length(); i++) {
				k += x[i];
			}
			for (int i = 0; i < (int)x.length() - 3; i++) {
				h += x[i];
			}
			m[k] += stoi(h);
		}

		for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
			cout << (*it).second << (*it).first;
			if (it != --(m.end())) {
				cout << " + ";
			}
		}
		cout << endl;
	}
	return 0;
}