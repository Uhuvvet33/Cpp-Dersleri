#include <iostream>
#include <locale.h>

using namespace std;


int main (){
	setlocale(LC_ALL, "Turkish");
	
	int x = 5;
    cout <<"x\t:"   << x << '\n'; // x de�i�keninin de�eri yazd�r�l�r.
    cout <<"& x\t:" << &x << '\n'; // x de�i�keninin bellekteki adresi yazd�r�l�r.
    cout <<"*&x\t:" << *&x << '\n'; /// x de�i�keinin adresindeki de�er yazd�r�l�r.

	int deger=20;
	int *ptr=&deger;
	cout<<"deger\t:"<<deger<<endl;
	cout<<"*ptr=&deger i�lemi yap�l�yor\t:"<<endl;
	cout<<"ptr\t:"<<ptr<<endl;
	cout<<"*ptr\t:"<<*ptr<<endl;
	cout<<"&ptr\t:"<<&ptr<<endl;

	delete ptr;


    return 0;
	

}

