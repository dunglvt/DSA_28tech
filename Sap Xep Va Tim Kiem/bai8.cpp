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

void bubbleSort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
		cout << "Buoc " << i + 1 << ": ";
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
	bubbleSort(a, n);
	return 0;
}
