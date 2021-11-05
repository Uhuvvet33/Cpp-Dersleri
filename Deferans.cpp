#include <iostream>
#include <locale.h>

using namespace std;


int main (){
	setlocale(LC_ALL, "Turkish");
	
	int x = 5;
    cout <<"x\t:"   << x << '\n'; // x deðiþkeninin deðeri yazdýrýlýr.
    cout <<"& x\t:" << &x << '\n'; // x deðiþkeninin bellekteki adresi yazdýrýlýr.
    cout <<"*&x\t:" << *&x << '\n'; /// x deðiþkeinin adresindeki deðer yazdýrýlýr.

	int deger=20;
	int *ptr=&deger;
	cout<<"deger\t:"<<deger<<endl;
	cout<<"*ptr=&deger iþlemi yapýlýyor\t:"<<endl;
	cout<<"ptr\t:"<<ptr<<endl;
	cout<<"*ptr\t:"<<*ptr<<endl;
	cout<<"&ptr\t:"<<&ptr<<endl;

	delete ptr;


    return 0;
	

}

