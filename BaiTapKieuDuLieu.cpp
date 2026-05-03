#include <iostream>
using namespace std;

int main() {

//
//  int n;
//  cin >> n;

	// Tinh tong tu 1 den n
// long long tong =(1ll * n* (n+1))/2; // nho la ep kieu ve ll de tranh bi tran so
	//cout << tong;

	//tong binh phuong cac so
//  long long tong = (1ll*n*(n+1)*(2*n+1))/6;
//  cout <<tong;

	//tinh tong 3

//double tong = 1 - (double)1/(n+1);
//double tong = 1 - 1.0* 1/(n+1);
//cout <<tong;

//tinh tong 5

//bai 14
//	int a,b;
//	cin >> a>>b;
//	int soCanTim = (a+ b-1)/b * b;
//	cout << soCanTim;

//bai 15
	long long n;
	cin >> n;
	if(n%2==0) {
		cout << 0;
	} else {
		cout << 1;
	}

	return 0;
}

