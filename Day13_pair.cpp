#include <bits/stdc++.h>
using namespace std;

int main() {
// vector co the tu dong tang kich thuoc
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	cout << v.size()<< endl;
//	cout<< "Phan tu dau tien trong vector: " << v[0] << endl;
//	cout<< "Phan tu cuoi cung trong vector: " << v[v.size()-1] <<endl;
//
//	for(int i=0; i<v.size(); i++) {
//		cout << v[i] << " ";
//	}
//	cout << endl;
//
//	for (int a: v) {
//		cout << a <<" ";
//	}
//	cout << endl;
//
//	for(vector<int>::iterator it= v.begin(); it!=v.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	for(auto it = v.begin(); it!=v.end(); it++) {
//		cout << *it << " ";
//	}
//		cout << endl;
//	//truy xuat phan tu
//	cout<< v[2] << endl;
//	//hoac
//	cout << *(v.begin()+2) << endl;

//	int n;
//	cin >>n;
//	vector<int> v(n);
//	for(int i =0;i<n;i++){
//		cin >> v[i];
//	}
//	cout <<endl;
//	for(int i =0;i<n;i++){
//		cout << v[i] <<" ";
//	}

//	int n;
//	cin >>n;
//	vector<int> v;
//	for(int i =0;i<n;i++){
//		int x;
//		cin >> x;
//		v.push_back(x);
//	}
//	cout <<endl;
//	for(int i =0;i<n;i++){
//		cout << v[i] <<" ";
//	}

//	int n;
//	cin >>n;
//	vector<int> v(n,2);
//	cout <<endl;
//	for(int i =0;i<n;i++){
//		cout << v[i] <<" ";
//	}

	string s = " ngon ngu   lap trinh java ";
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss >> tmp) {
		v.push_back(tmp);
	}
	for(string a: v) {
		cout << a << " ";
	}

	return 0;
}

