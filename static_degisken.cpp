#include <iostream>
#include <locale.h>

using namespace std;

void arttr_yazdir()
{
	static int s_deger=1;  //static de�i�ken
	int sayi=1;				//static OLMAYAN
		++s_deger;
		++sayi;
	cout<<"static deger :"<<s_deger<<endl;
	cout<<"static OLMAYAN :"<<sayi<<endl;
}// "s_deger" yok edilmedi.  "sayi" static olmayan de�er

int g=10;  //Global de�i�ken

int main (){
	setlocale(LC_ALL, "Turkish");
	
	arttr_yazdir();
	arttr_yazdir();
	arttr_yazdir();
	cout<<g;

}

