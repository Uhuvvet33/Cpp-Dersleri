#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e Karakter
	
	int a,i,topl{1};
	cout<<".: FAKT�R�YEL PROGRAMI :."<<endl;
basla:						//goto basla; ile buraya d�n�� yap�l�r.
		cout<<"Say�y� giriniz \t:";
		cin>>a;
		if (a>=0)
			for(i=1;i<=a;i++){
				topl*=i;				
			}	
		else
		{
		
		cout<<"Negatif say� girdiniz"<<endl;
	
goto basla;					//d�n�� yap�lmas� i�in kullan�l�r.
		}
		cout<<"Sonu� \t\t"<<a<<"! = "<<topl<<endl;
}


