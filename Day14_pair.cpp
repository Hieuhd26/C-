#include <bits/stdc++.h>
using namespace std;

int main() {
	pair<int,int> v;
	pair <string,int> v2;

	pair<int,int> v3 = make_pair(100,200);
	pair<int,int> v4 = {100,300};

	cout << v.first << " "<< v.second << endl;
	cout << v3.first << " "<< v3.second << endl;
	cout << v4.first << " "<< v4.second << endl;

	tuple<int,int,int> t {1,2,3};
	cout << get<0>(t) << endl;

	tuple<string,int,string> t2 = make_tuple("java",100,"python");
	cout << get<0>(t2) << endl;
	cout << get<1>(t2) << endl;
	cout << get<2>(t2) << endl;
	return 0;
}

