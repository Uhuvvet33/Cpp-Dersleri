#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "Turkish");
	
	string adSoyad = "Mehmet ÞEN", yas; //deðiþken atama
	yas ="40";
		cout << adSoyad <<" " << yas << endl<<endl; //ekranda Göster
		
		cout << adSoyad.empty() << endl; //içeriði boþ mu? boþ ise 1 deðerini gösterir.
		cout << adSoyad.at(0)<<endl; // indis deðerindeki içeriði gösterir
		cout << adSoyad.length() <<endl; //kaçkarakter olduðunu gösterir
		//adSoyad.clear(); //string içeriði sýfýrlanýr
		cout << adSoyad <<endl; 
		
		cout << adSoyad.find("met")<<endl; //stringde arama yapar
		cout << adSoyad.find("h",2)<<endl; 
		cout << adSoyad.find_last_of("h",2)<<endl;		//sondan baþlayarak arama yapar

		adSoyad.insert(2,"123456789"); // string içerisinebelirtilen indisten itibaren ekleme
		cout << adSoyad<<endl;
				adSoyad.insert(2,"0000",10); // string içerisinebelirtilen indisten itibaren ekleme
		cout << adSoyad <<endl;
		adSoyad.erase(5); //
		cout <<adSoyad<<endl;;
		
		
		string str="Merhaba Uzay";
		string str2;
		
		str2=str.substr(2,7); //alt string oluþturma çaðýrma
		cout <<str<<endl;
		cout <<str2<<endl;


}

