#include <bits/stdc++.h>
using namespace std;
// set co sap xep thu tu
// luu gia tri duy nhat
int main() {
//	set<int> s;
//	s.insert(100); //O(logn)
//	s.insert(200);
//	cout<< s.size() << endl;

//	set<int>s1;
//	for(int i = 0; i<10; i++) {
//		s1.insert(i);
//	}
	//count
//	if(s1.count(5)!=0){
//		cout << "Found";
//	} else {
//		cout << "Not found";
//	}

//find
//	if(s1.find(5)!= s1.end()) {
//		cout << "Found";
//	} else {
//		cout << "Not found";
//	}
	// xoa gia tri
//	s1.erase(1);
//
//	// xoa thong qua iterator
//	s1.erase(s1.find(6));
//	s1.insert(-2);
//	for(int x: s1) {
//		cout << x << " ";
//	}
//	cout << endl;
//	cout << *s1.begin()<< endl;
//	cout << *s1.rbegin()<< endl;
//	cout << endl;
//
//	// khai bao iterator duyet qua set


//multiset<int> ms;
//ms.insert(100);
//ms.insert(200);
//ms.insert(100);
//ms.insert(400);
//ms.erase(100);
//for (int x : ms){
//	cout << x << endl;
//}

// cho mang co n phan tu va so nguyen k, moi day con lien tiep co chieu dai k
// In ra phan tu lon nhat trong day con do
//10 3
// 1 2 3 1 4 5 1 8 9 10
//output
// 3 3 4 5 5 8 9 10

	int n,k;
	cin >>n>>k;
	int a[n];
	for(int &x:a) cin >>x;
	multiset<int> ms;
	for(int i =0; i<k; i++) {
		ms.insert(a[i]);
	}
	for(int i = k; i<n; i++) {
		cout << *ms.rbegin() << " ";
		ms.erase(ms.find(a[i-k]));
		ms.insert(a[i]);
	}
	cout << *ms.rbegin()<< endl;

	return 0;
}

