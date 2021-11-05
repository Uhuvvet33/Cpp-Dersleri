#include <iostream>
#include <locale.h>  //türkçe karakter için
#include <sstream>  //stream kütüphanesi, nesne dönüþümünde kullanýlýr


using namespace std;

int main (){
	setlocale(LC_ALL, "Turkish");
	
	string str;
	/*
	cin>>str;
	cout<<str<<endl;;
	
	getline(cin,str,'.'); //cin kaynaðýndan, str deðiþkeni, . nokta konuluncaya kadar deðer giriþi  yapýlabilir
	cout <<str<<endl;
	*/
	
	str ="1 2 3 4 5";
	stringstream sstream;   //nesne dönüþümleri için deðiþken tanýmlama stringstreamla
	sstream << str; //sstrem deðiþkenine str deðiþken deðerlerinin içeriði
	int temp;   
	sstream >> temp;  //int deðiþken olarak tanýmlanan temp' sstream deðiþken deðerinin ilk sayý deðeri atanýr
	
	cout <<temp;

}

