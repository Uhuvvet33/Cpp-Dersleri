#include <iostream>
#include <locale.h>

using namespace std;


int main (){
	setlocale(LC_ALL, "Turkish");
/*
	Diziler (Array)
	Referanslar (Referances
	��aret�iler (Pointer)
*/	
	
	int dizi[5]={2,4,6,8,10};	//dizi de�erlerine k�me olarak de�er veriyoruz
	cout<<dizi[3]<<endl;	//dizinin 0' indisine ula��r ve g�steriri
		dizi[3] = 20;
	for(int i=0; i<5; i++)
	{
		cout<<dizi[i]<<" ";
	}
	cout<<endl;
	
	int a=33;	
	int & adres = a;		//referans tan�mlama
			
	/*referans numaralar�n� tutar, 
	ba�lang�� i�erisinde de�er atanbilir ve bu de�er sonradan di�i�tirelemez.*/
	
	int * isaret = &a; 	//pointir tan�mlama a n�n adres bilgisine 
	
	cout<<"a \t\t:"<<a<<endl;
	cout<<"& a \t\t:"<<&a<<endl;
	cout<<"& adres\t\t:"<<&adres<<endl;
	cout<<"adres \t\t:"<<adres<<endl;
	cout<<"* isaret\t:"<<*isaret<<endl;
	cout<<"isaret \t\t:"<<isaret<<endl;
	cout<<"& isaret\t:"<<&isaret<<endl;
	/*referans�n adresini atama yapt�k  */
	

	
	
	return 0;
	

}

