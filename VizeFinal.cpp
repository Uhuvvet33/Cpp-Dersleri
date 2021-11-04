#include <iostream>

using namespace std;

int main(){	
	setlocale(LC_ALL,"Turkish"); //T�rk�e Karakter

	int vize, final;
	float orta;
	
	cout<<"Not Hesaplama Program"<<endl;
	cout<<"Vize Notunun \%40, Final Notnun \%60"<<endl;
	cout<<"Vize Notu Giriniz \t: ";
		cin>>vize;
	cout<<"Final Notu Giriniz \t: ";
		cin>>final;
		
	orta=((vize*40/100)+(final*60/100));
		
	if(orta>=50){
		cout<<"Notunuz \t\t: "<<orta<<", Gectiniz. Tebrikler."<<endl;
	}else{
		cout<<"Notunuz \t\t: "<<orta<<", Kaldiniz"<<endl;
	}
	
	
return 0;
}

