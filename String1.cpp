#include <iostream>
#include <locale.h>
#include <string>
using namespace std;

int main (){
setlocale(LC_ALL, "Turkish");

	string ulke;
	cout<<"Bulundušunuz yer :";
	cin>>ulke;
	
	cout <<"Bulundušunuz yer "<<ulke;

}

