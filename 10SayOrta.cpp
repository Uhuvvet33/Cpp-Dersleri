#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish"); //Türkçe Karakter
	
	int toplam{0}, sayi;
	for(int i=1;i<11;i++){
		cout<<i<<". sayýyý giriniz \t:";
		cin>>sayi;
			toplam=toplam+sayi;				
	}
	
	cout<<"Toplamý \t:"<<toplam<<endl;
	cout<<"Ortalamasý \t:"<<toplam/10.0<<endl;



}


