#include <iostream>
#include <locale.h>

using namespace std;

void arttr_yazdir()
{
	static int s_deger=1;  //static deðiþken
	int sayi=1;				//static OLMAYAN
		++s_deger;
		++sayi;
	cout<<"static deger :"<<s_deger<<endl;
	cout<<"static OLMAYAN :"<<sayi<<endl;
}// "s_deger" yok edilmedi.  "sayi" static olmayan deðer

int g=10;  //Global deðiþken

int main (){
	setlocale(LC_ALL, "Turkish");
	
	arttr_yazdir();
	arttr_yazdir();
	arttr_yazdir();
	cout<<g;

}

