#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e Karakter
	
	int toplam{0}, sayi;
	for(int i=1;i<11;i++){
		cout<<i<<". say�y� giriniz \t:";
		cin>>sayi;
			toplam=toplam+sayi;				
	}
	
	cout<<"Toplam� \t:"<<toplam<<endl;
	cout<<"Ortalamas� \t:"<<toplam/10.0<<endl;



}


