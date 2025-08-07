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
	string name, date;
	getline(cin, name);
	getline(cin, date);

	stringstream ss(name);
	string word;
	string res;
	while (ss >> word) {
		word[0] = toupper(word[0]);
		for (int i = 1; i < (int)word.size(); i++) {
			word[i] = tolower(word[i]);
		}
		res += word + ' ';
	}

	stringstream ss1(date);
	string res1;
	while (getline(ss1, word, '/')) {
		if ((int)word.size() != 2 && (int)word.size() != 4) {
			word = '0' + word;
		}
		if ((int)word.size() == 2) {
			res1 += word + '/';
		} else {
			res1 += word;
		}
	}

	cout << res << endl << res1;
	return 0;
}
