#include <iostream>
#include <locale.h>
using namespace std;

int main (){
setlocale(LC_ALL, "Turkish");
//girilen say�n�n fakt�riyeli bulunmas�
int x, t(1);
cout<<"say� giriniz\t:";
cin>>x;

for(int i=1;i<=x;i++){
	t*=i;
}
cout<<"Fakt�riyeli :"<<t;

}

