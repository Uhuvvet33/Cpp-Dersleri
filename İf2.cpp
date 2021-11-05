#include <iostream>
#include <locale.h>
using namespace std;

int main (){
setlocale(LC_ALL, "Turkish");

	int x;
	cout<<"Ortalama Notunuzu giriniz\t:";
	cin>>x;
		
		if (x>90){
			cout<<"AA";
		}
		else if(x>80){
			cout<<"BB";
		}
		else if(x>70){
			cout<<"CC";
		}
		else{
			cout <<"70\'den düþük";
		}


}

