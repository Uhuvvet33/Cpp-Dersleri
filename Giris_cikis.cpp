#include <iostream>
#include <locale.h>  //t�rk�e karakter i�in
#include <sstream>  //stream k�t�phanesi, nesne d�n���m�nde kullan�l�r


using namespace std;

int main (){
	setlocale(LC_ALL, "Turkish");
	
	string str;
	/*
	cin>>str;
	cout<<str<<endl;;
	
	getline(cin,str,'.'); //cin kayna��ndan, str de�i�keni, . nokta konuluncaya kadar de�er giri�i  yap�labilir
	cout <<str<<endl;
	*/
	
	str ="1 2 3 4 5";
	stringstream sstream;   //nesne d�n���mleri i�in de�i�ken tan�mlama stringstreamla
	sstream << str; //sstrem de�i�kenine str de�i�ken de�erlerinin i�eri�i
	int temp;   
	sstream >> temp;  //int de�i�ken olarak tan�mlanan temp' sstream de�i�ken de�erinin ilk say� de�eri atan�r
	
	cout <<temp;

}

