#include <iostream>
#include <locale>
#include <math.h>
using namespace std;

int main (){
setlocale(LC_ALL, "Turkish");
	int x,y,z;
	cout<<"1. Sayýyý Giriniz\t:";
	cin>>x;
	cout<<"2. Sayýyý Giriniz\t:";
	cin>>y;

	cout<<"Ýþlem seçiniz: \n1-Toplam, \n2-Çýkarma, \n3-Bölme, \n4-Çarpma\n  :";
	cin>>z;
	switch (z){
		case 1:
			cout<<"Toplam\t:"<<x+y;
			break;
		case 2:
			cout<<"Fark\t:"<<abs(x-y);
			break;
		case 3:
			printf("Sonuç :%.2f\t Kalan :%d",(float)x/y,x%y);
			break;
		case 4:
			cout<<"Sonuç\t:"<<x*y;
			break;
		default:
		{
			cout<<"Hatalý Seçim.";
			break;
		}
		}



}

