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
	string name;
	getline(cin, name);

	vector<string> res, res1;

	stringstream ss(name);
	string tmp;
	while (ss >> tmp) {
		tmp[0] = toupper(tmp[0]);
		for (int i = 1; i < (int)tmp.size(); i++) {
			tmp[i] = tolower(tmp[i]);
		}
		res.push_back(tmp);
	}

	for (char &x : res[(int)res.size() - 1]) {
		x = toupper(x);
	}

	res1 = res;

	res[res.size() - 2] += ',';

	for (string x : res) {
		cout << x << ' ';
	}

	cout << endl << res[res1.size() - 1] << ", ";

	for (int i = 0; i < (int)res1.size() - 1; i++) {
		cout << res1[i] << ' ';
	}
	return 0;
}
