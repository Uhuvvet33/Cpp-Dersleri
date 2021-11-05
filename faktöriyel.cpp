#include <iostream>
#include <locale.h>
using namespace std;

int main (){
setlocale(LC_ALL, "Turkish");
//girilen sayýnýn faktöriyeli bulunmasý
int x, t(1);
cout<<"sayý giriniz\t:";
cin>>x;

for(int i=1;i<=x;i++){
	t*=i;
}
cout<<"Faktöriyeli :"<<t;

}

