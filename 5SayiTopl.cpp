#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e Karakter

	int toplam{0}, sayi=0;
	for(int i=1;i<6;i++){
		cout<<i<<". say�y� giriniz \t:";
		cin>>sayi;
			toplam=toplam+sayi;
			sayi=0;		
	}
	
	cout<<"Toplam \t:"<<toplam<<endl;

}


