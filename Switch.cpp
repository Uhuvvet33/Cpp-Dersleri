#include <iostream>
#include <locale>
#include <math.h>
using namespace std;

int main (){
setlocale(LC_ALL, "Turkish");
	int x,y,z;
	cout<<"1. Say�y� Giriniz\t:";
	cin>>x;
	cout<<"2. Say�y� Giriniz\t:";
	cin>>y;

	cout<<"��lem se�iniz: \n1-Toplam, \n2-��karma, \n3-B�lme, \n4-�arpma\n  :";
	cin>>z;
	switch (z){
		case 1:
			cout<<"Toplam\t:"<<x+y;
			break;
		case 2:
			cout<<"Fark\t:"<<abs(x-y);
			break;
		case 3:
			printf("Sonu� :%.2f\t Kalan :%d",(float)x/y,x%y);
			break;
		case 4:
			cout<<"Sonu�\t:"<<x*y;
			break;
		default:
		{
			cout<<"Hatal� Se�im.";
			break;
		}
		}



}

