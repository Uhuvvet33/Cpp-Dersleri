#include <iostream>
#include <locale.h>

using namespace std;


int main (){
	setlocale(LC_ALL, "Turkish");
/*
	Diziler (Array)
	Referanslar (Referances
	Ýþaretçiler (Pointer)
*/	
	
	int dizi[5]={2,4,6,8,10};	//dizi deðerlerine küme olarak deðer veriyoruz
	cout<<dizi[3]<<endl;	//dizinin 0' indisine ulaþýr ve gösteriri
		dizi[3] = 20;
	for(int i=0; i<5; i++)
	{
		cout<<dizi[i]<<" ";
	}
	cout<<endl;
	
	int a=33;	
	int & adres = a;		//referans tanýmlama
			
	/*referans numaralarýný tutar, 
	baþlangýç içerisinde deðer atanbilir ve bu deðer sonradan diðiþtirelemez.*/
	
	int * isaret = &a; 	//pointir tanýmlama a nýn adres bilgisine 
	
	cout<<"a \t\t:"<<a<<endl;
	cout<<"& a \t\t:"<<&a<<endl;
	cout<<"& adres\t\t:"<<&adres<<endl;
	cout<<"adres \t\t:"<<adres<<endl;
	cout<<"* isaret\t:"<<*isaret<<endl;
	cout<<"isaret \t\t:"<<isaret<<endl;
	cout<<"& isaret\t:"<<&isaret<<endl;
	/*referansýn adresini atama yaptýk  */
	

	
	
	return 0;
	

}

