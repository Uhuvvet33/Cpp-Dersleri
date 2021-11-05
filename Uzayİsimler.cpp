#include <iostream>
#include <locale.h>
using namespace std;

namespace program1{	//isim uzayý
	int x=15;
	void Boo(){		//isim uzayý içerisinde fonksiyon
		int x=7;
		cout <<x<<endl;
	}}
	
void Foo(){	//fonksiyon
		int x=34;
		cout<<x<<endl;
	}
int main (){
setlocale(LC_ALL, "Turkish");

Foo();
cout<<program1::x<<endl;
program1::Boo();



}

