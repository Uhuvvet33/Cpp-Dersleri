#include <iostream>
#include <locale.h>
using namespace std;

int main (){
setlocale(LC_ALL, "Turkish");

int x,y;
cout <<"Girilen iki sayý arasýndaki iliþki\n";
cout <<"1. sayý \t:";
cin>>x;

cout <<"2. sayý \t:";
cin>>y;

if(x==y){
	cout<<"Eþittir.\n";
}

if(x!=y){
	cout<<"Eþit deðildir\n";
}
if(x>y){
	cout<<"1. sayý Büyük\n";
} else if(x<y){
	cout<<"2. sayý Büyüktür\n";
}

int z;
cout<<"sayý giriniz\t:";
cin>>z;

if(z>3 && z<10){
	cout<<"girilen sayý 3 ile 10 arasýnda\n";
}
else{

	cout<<"girilen sayý 3 ile 10 arasýnda deðil\n";
}
if(z==3 || z==10 ){
	cout<<"girilen sayý 3 veya 10 dur.\n";
}

}

