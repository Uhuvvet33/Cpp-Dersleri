#include <iostream>
#include <locale.h>
using namespace std;

int main (){
setlocale(LC_ALL, "Turkish");

int x, toplam(0);
cout<<"Bir say� giriniz(1 ile 10 aras�)\t:";
cin>>x;

while(x<10){
	cout<<"d�ng� �ncesi \tx:"<<x<<"\ttoplam:"<<toplam<<endl;
	toplam+=x;
	x++;
	cout<<"d�ng� sonu \tx:"<<x<<"\ttoplam:"<<toplam<<endl;
}
cout<<"Toplam\t:"<<toplam;

}

