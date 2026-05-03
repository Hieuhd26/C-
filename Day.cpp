#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n+1];
	int prefix[n];
	prefix[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	for (int i = 1; i <= n; i++) {
		prefix[i] = prefix[i - 1] + a[i];
	}

	for (int i = 0; i <= n; i++) {
		cout << prefix[i] << " ";
	}

	int l,r;
	cin >> l>> r;
	int sum = prefix[r] - prefix[l-1];
	cout << "Tong tu vi tri "<< l << " cho toi vi tri "<< r<< " la: "<< sum;
	return 0;
}

