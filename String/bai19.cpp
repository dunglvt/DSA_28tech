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

	//code here
	int n; cin >> n;
	cin.ignore(1);

	vector<pair<string, string>> list;
	map<string, int> m;
	while (n--) {
		string s;
		getline(cin, s);
		vector<string> v;

		stringstream ss1(s);
		string w;
		while (ss1 >> w) {
			v.push_back(w);
		}

		string email = v[v.size() - 2];
		string password;

		for (char &x : email) {
			x = tolower(x);
		}
		for (int i = 0; i < (int)v.size() - 2; i++) {
			v[i][0] = tolower(v[i][0]);
			email += v[i][0];
		}

		if (m[email] == 0) {
			m[email]++;
		} else {
			email += to_string(++m[email]);
		}

		email += "@xyz.edu.vn";

		stringstream ss(v[v.size() - 1]);
		string word;
		vector<string>tmp;

		while (getline(ss, word, '/')) {
			tmp.push_back(word);
		}

		if (tmp[1][0] == '0') {
			tmp[1] = tmp[1][1];
		}
		if (tmp[0][0] == '0') {
			tmp[0] = tmp[0][1];
		}

		for (string x : tmp) {
			password += x;
		}

		list.push_back({email, password});
	}

	for (pair<string, string> x : list) {
		cout << x.first << endl;
		cout << x.second << endl;
	}
	return 0;
}
