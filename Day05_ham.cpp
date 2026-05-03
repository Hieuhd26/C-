#include <bits/stdc++.h>
using namespace std;

// lay doi so gan cho tham so
void xinChao(int n) {
	cout << n << endl;
}

int getNumber() {
	return 1000;
}
int getNumber(int n) {
	return n+1;
}
// trong 1 ham co nhieu return, cau lenh return dau tien nao duoc thuc hien thi ham se ket thuc ngay tai thoi diem do
int getMax(int a, int b) {
	if(a>b) {
		return a;
	} else {
		return b;
	}
}

// chu y gia tri ham tra ve co dung voi yeu cau de bai
//pass by value // deep copy
void thayDoi1(int m){
	m+=100;
}

//pass by reference // shallow copy
void thayDoi2(int &m){
	m+=100;
}

int main() {
//	xinChao(100); // doi so
//	xinChao(20);
//
//	cout << getNumber(3) << endl;
//
//	cout << getMax(67,34);

	int n =20;
	thayDoi1(n);
	cout<< n << endl;
	
	thayDoi2(n);
	cout << n;
	
	//
	return 0;
}

