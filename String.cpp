#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "Turkish");
	
	string adSoyad = "Mehmet �EN", yas; //de�i�ken atama
	yas ="40";
		cout << adSoyad <<" " << yas << endl<<endl; //ekranda G�ster
		
		cout << adSoyad.empty() << endl; //i�eri�i bo� mu? bo� ise 1 de�erini g�sterir.
		cout << adSoyad.at(0)<<endl; // indis de�erindeki i�eri�i g�sterir
		cout << adSoyad.length() <<endl; //ka�karakter oldu�unu g�sterir
		//adSoyad.clear(); //string i�eri�i s�f�rlan�r
		cout << adSoyad <<endl; 
		
		cout << adSoyad.find("met")<<endl; //stringde arama yapar
		cout << adSoyad.find("h",2)<<endl; 
		cout << adSoyad.find_last_of("h",2)<<endl;		//sondan ba�layarak arama yapar

		adSoyad.insert(2,"123456789"); // string i�erisinebelirtilen indisten itibaren ekleme
		cout << adSoyad<<endl;
				adSoyad.insert(2,"0000",10); // string i�erisinebelirtilen indisten itibaren ekleme
		cout << adSoyad <<endl;
		adSoyad.erase(5); //
		cout <<adSoyad<<endl;;
		
		
		string str="Merhaba Uzay";
		string str2;
		
		str2=str.substr(2,7); //alt string olu�turma �a��rma
		cout <<str<<endl;
		cout <<str2<<endl;


}

