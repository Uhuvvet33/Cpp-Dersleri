#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int main (){
setlocale(LC_ALL, "Turkish");

	string ulke;
	cout<<"Bulundu�unuz yer :";
	cin>>ulke;
	
	cout <<"Bulundu�unuz yer "<<ulke;

}

