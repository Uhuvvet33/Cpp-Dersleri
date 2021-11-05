#include <iostream>
#include <locale.h>
using namespace std;

int main (){
setlocale(LC_ALL, "Turkish");

int x, y;
cout<<"1. sayý girin\t:";
cin>>x;
cout<<"2. sayý girin\t:";
cin>>y;

if(x>y){
	while(x>y){
		cout<<"Sayýlar eþit deðil \n";
		x--;		
	}
	cout<<"Eþitlendi x:"<<x;
}else{
	while(x<y){
		cout<<"Sayýlar eþit deðil\n";
		y--;
	}
	cout<<"Eþitlendi y:"<<y;
}



}

