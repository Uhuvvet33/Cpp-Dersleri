#include <iostream>
#include <locale.h>
using namespace std;

int main (){
setlocale(LC_ALL, "Turkish");

int x,y;
cout <<"Girilen iki say� aras�ndaki ili�ki\n";
cout <<"1. say� \t:";
cin>>x;

cout <<"2. say� \t:";
cin>>y;

if(x==y){
	cout<<"E�ittir.\n";
}

if(x!=y){
	cout<<"E�it de�ildir\n";
}
if(x>y){
	cout<<"1. say� B�y�k\n";
} else if(x<y){
	cout<<"2. say� B�y�kt�r\n";
}

int z;
cout<<"say� giriniz\t:";
cin>>z;

if(z>3 && z<10){
	cout<<"girilen say� 3 ile 10 aras�nda\n";
}
else{

	cout<<"girilen say� 3 ile 10 aras�nda de�il\n";
}
if(z==3 || z==10 ){
	cout<<"girilen say� 3 veya 10 dur.\n";
}

}

