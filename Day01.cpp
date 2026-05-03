//#include <iostream>
//using namespace std;
//
//int main() {
//
//
//	int soMayChon = 5;
//	int soBanChon;
//	bool daThang = false;
//
//
//
//	for(int i=1; i<=5; i++) {
//
//		cin >> soBanChon;
//		if(soBanChon>soMayChon) {
//			cout << "Ban chon lon hon";
//		} else if( soBanChon < soMayChon) {
//			cout <<"Ban chon nho hon";
//		} else {
//			cout << "ban da chon dung so";
//			daThang = true;
//			break;
//		}
//
//
//
//	}
//	if (!daThang) {
//        cout << "\nTiec qua! Da het luot. Con so bi mat la: ";
//    }
//
//
//	return 0;
//}

#include <iostream>
using namespace std;

int main() {


	int soMayChon = 5;
	int soBanChon;
	



	for(int i=1; i<=5; i++) {

		cin >> soBanChon;
		if(soBanChon==soMayChon){
			cout <<"dung";
		} else {
			if(soBanChon<soMayChon){
				cout << "Nho hon" ;
			} else {
				cout <<" Lon hon";
			}
		}



	}
	


	return 0;
}

