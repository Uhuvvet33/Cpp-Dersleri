#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish"); //Türkçe Karakter
	
	int a,i,topl{1};
	cout<<".: FAKTÖRÝYEL PROGRAMI :."<<endl;
basla:						//goto basla; ile buraya dönüþ yapýlýr.
		cout<<"Sayýyý giriniz \t:";
		cin>>a;
		if (a>=0)
			for(i=1;i<=a;i++){
				topl*=i;				
			}	
		else
		{
		
		cout<<"Negatif sayý girdiniz"<<endl;
	
goto basla;					//dönüþ yapýlmasý için kullanýlýr.
		}
		cout<<"Sonuç \t\t"<<a<<"! = "<<topl<<endl;
}


