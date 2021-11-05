#include <iostream>
#include <locale.h>
using namespace std;

int main (){
setlocale(LC_ALL, "Turkish");

int x, toplam(0);
cout<<"Bir sayý giriniz(1 ile 10 arasý)\t:";
cin>>x;

while(x<10){
	cout<<"döngü öncesi \tx:"<<x<<"\ttoplam:"<<toplam<<endl;
	toplam+=x;
	x++;
	cout<<"döngü sonu \tx:"<<x<<"\ttoplam:"<<toplam<<endl;
}
cout<<"Toplam\t:"<<toplam;

}

