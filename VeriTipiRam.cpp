#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "Turkish");
	
	char a ='x';
	int	b=10;
	const float c=2.5; //Deðiþken sabitlemek için baþýna const getirilir
	double d=12.87;
	bool e=true;
	
	cout <<sizeof(char) <<endl;
	cout <<sizeof(int) <<endl;
	cout <<sizeof(float) <<endl;
	cout <<sizeof(double) <<endl;
	cout <<sizeof(bool) <<endl;
	
	cout << a <<" "<< b << " " << c << " " << d << " " << e <<endl;
	
	cout <<"Deðeri girin: "<<endl;
	cin >> b;
	cout<<endl<<b<<endl;
	

}

