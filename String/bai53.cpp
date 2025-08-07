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
	string s;
	map<string, int> list;

	while (getline(cin, s)) {
		vector<string>v;
		stringstream ss(s);
		string tmp;
		while (getline(ss, tmp, '-')) {
			v.push_back(tmp);
		}
		v[0].erase(v[0].size() - 1, 1);
		string score, name;
		int pos = 0;
		for (int i = (int)v[0].size() - 1; i >= 0; i--) {
			pos = i;
			if (v[0][i] == ' ') {
				break;
			} else {
				score += v[0][i];
			}
		}
		reverse(score.begin(), score.end());

		for (int i = 0; i < pos; i++) {
			name += v[0][i];
		}

		list[name] += stoi(score);

		score.clear();
		name.clear();
		v[1].erase(0, 1);

		for (int i = 0; i < (int)v[1].size(); i++) {
			pos = i;
			if (v[1][i] == ' ') {
				break;
			}
			if (isdigit(v[1][i])) {
				score += v[1][i];
			}
		}

		for (int i = pos + 1; i < (int)v[1].size(); i++) {
			name += v[1][i];
		}

		list[name] += stoi(score);
	}

	vector<pair<string, int>> ve(list.begin(), list.end());

	sort(ve.begin(), ve.end(), [](const pair<string, int> &x, const pair<string, int> &y) {
		if (x.second == y.second) {
			return x.first < y.first;
		}
		return x.second > y.second;
	});

	for (pair<string, int> x : ve) {
		cout << x.first << ' ' << x.second << endl;
	}
	return 0;
}