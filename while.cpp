#include <iostream>
#include <locale.h>
using namespace std;

int main (){
setlocale(LC_ALL, "Turkish");

int x, y;
cout<<"1. say� girin\t:";
cin>>x;
cout<<"2. say� girin\t:";
cin>>y;

if(x>y){
	while(x>y){
		cout<<"Say�lar e�it de�il \n";
		x--;		
	}
	cout<<"E�itlendi x:"<<x;
}else{
	while(x<y){
		cout<<"Say�lar e�it de�il\n";
		y--;
	}
	cout<<"E�itlendi y:"<<y;
}



}

