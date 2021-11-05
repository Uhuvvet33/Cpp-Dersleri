#include <iostream>
#include <locale.h>

using namespace std;

//ref degiskene referans edecektir. Kopyalama olmaz
void Degistir(int &ref)
{
    ref = 21;

}
int main (){
	setlocale(LC_ALL, "Turkish");
	
    int value = 5; // normal integer
    int &ref = value; // degiskene referanss
    value = 6; // value simdi 6 oldu
    
	ref = 7; // vaue simdi 7 oldu
    	cout << value<<" \n"; // prints 7
    ++ref;
     	cout << value<<"\n"; // prints 8
 	
 	int n=5;
 	cout<<"n deger\t:"<<n<<endl;
 	Degistir(n);
 	cout<<"n degeri degisti\t:"<<n<<endl;
 
    return 0;	
	

}

