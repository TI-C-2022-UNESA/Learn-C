#include <iostream>
using namespace std;

int main(){
	int panjang, lebar, keliling, luas;
	cout<<"Program Menghitung luas dan keliling persegi panjang"<<endl;
	cout<<"Masukkan panjang persegi panjang :";
	cin>>panjang;
	cout<<"Masukkan Lebar persegi panjang :";
	cin>>lebar;
	
	luas = panjang * lebar;
	keliling = 2 * (panjang + lebar);
	
	cout<<"Luas Persegi panjang = "<<luas<<endl;
	cout<<"Keliling persegi panjang = "<<keliling;
	
	return 0;
}
