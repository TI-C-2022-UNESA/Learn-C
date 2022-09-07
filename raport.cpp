#include <iostream>
using namespace std;

int main(){
	int cm, meter, sisa;
	
	cout<<"Program pengubah cm menjadi meter"<<endl;
	cout<<"Masukkan cm : ";
	cin>>cm;
	
	meter = cm/100;
	sisa = cm%100;
	cout<<"Hasil konversinya adalah "<<meter<<" meter "<<sisa<<" cm";
}
