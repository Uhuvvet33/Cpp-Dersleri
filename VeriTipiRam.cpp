#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "Turkish");
	
	char a ='x';
	int	b=10;
	const float c=2.5; //De�i�ken sabitlemek i�in ba��na const getirilir
	double d=12.87;
	bool e=true;
	
	cout <<sizeof(char) <<endl;
	cout <<sizeof(int) <<endl;
	cout <<sizeof(float) <<endl;
	cout <<sizeof(double) <<endl;
	cout <<sizeof(bool) <<endl;
	
	cout << a <<" "<< b << " " << c << " " << d << " " << e <<endl;
	
	cout <<"De�eri girin: "<<endl;
	cin >> b;
	cout<<endl<<b<<endl;
	

}

