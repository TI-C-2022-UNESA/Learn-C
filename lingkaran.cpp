#include <iostream>
using namespace std;

int main(){
	float keliling, r;
	const float phi = 3.14159;
	
	cout<<"Program menghitung keliling lingkaran"<<endl;
	cout<<"Masukkan panjang jari-jari lingkaran : ";
	cin>>r;
	
	keliling = 2 * phi * r;
	cout<<"Keliling lingkaran adalah "<<keliling;
	
	return 0;
}
