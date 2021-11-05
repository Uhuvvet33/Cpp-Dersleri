#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int main (){
setlocale(LC_ALL, "Turkish");

	string ulke;
	cout<<"Bulunduðunuz yer :";
	cin>>ulke;
	
	cout <<"Bulunduðunuz yer "<<ulke;

}

