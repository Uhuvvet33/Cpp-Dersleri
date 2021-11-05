#include <iostream>
#include <locale.h>

using namespace std;


int main (){
	setlocale(LC_ALL, "Turkish");
	
	cout<<"for döngüsü"<<endl;	
	for(int i=0;i<10;i++){ 	//for döngüsünün kullanýmý
		cout<<i<<" ";
	}

	cout<<endl<<"while döngü iþlemi"<<endl;	
	int j=0;
	while(j<10){       		//while döngüsü þart doðru ise iþlem yapar		
		cout<<j<<" ";
		j++;
	}

	cout<<endl<<"do döngüsü"<<endl;
	int k=1;
	do{						//do döngüsü en az bir kez iþlem yapar
		cout<<k<<" ";
		k+=2;		
	}while(k<10);
	

}

