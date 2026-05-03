#include <bits/stdc++.h>
using namespace std;

int main() {
//  int a[]={1,4,3,6};
//  cout << a[2];

// nhap so tu ban phim
//
//	int b[10]= {1,4,3,6};
////	int b[10]= {0};
//	for(int i =0; i<10; i++) {
//		cout << b[i] << " ";
//	}

int n;
cin >>n;
int a[n];
for(int &y: a){
	cin >> y;
}
for(int y: a){
	cout << y << " ";
}
	return 0;
}

