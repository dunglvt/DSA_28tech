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

void selectionSort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int index = i;
		for (int j = i + 1; j < n; j++) {
			if (a[index] > a[j]) {
				index = j;
			}
		}
		swap(a[i], a[index]);
		cout << "Buoc " << i + 1 << ": ";
		for (int x = 0; x < n; x++) {
			cout << a[x] << ' ';
		}
		cout << endl;
	}
	return;
}

int main() {

	fastIO;

	//code here
	int n; cin >> n;
	int a[n];
	for (int &i : a) {
		cin >> i;
	}
	selectionSort(a, n);
	return 0;
}
