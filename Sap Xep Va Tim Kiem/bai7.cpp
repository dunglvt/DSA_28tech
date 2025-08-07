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

void insertionSort(int a[], int n) {
	for (int i = 1; i < n; i++) {
		int pos = i - 1, value = a[i];
		while (pos >= 0 && value < a[pos]) {
			a[pos + 1] = a[pos];
			--pos;
		}
		a[pos + 1] = value;
		cout << "Buoc " << i << ": ";
		for (int k = 0; k < n; k++) {
			cout << a[k] << ' ';
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
	insertionSort(a, n);
	return 0;
}
