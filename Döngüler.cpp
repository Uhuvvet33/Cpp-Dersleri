#include <iostream>
#include <locale.h>

using namespace std;


int main (){
	setlocale(LC_ALL, "Turkish");
	
	cout<<"for d�ng�s�"<<endl;	
	for(int i=0;i<10;i++){ 	//for d�ng�s�n�n kullan�m�
		cout<<i<<" ";
	}

	cout<<endl<<"while d�ng� i�lemi"<<endl;	
	int j=0;
	while(j<10){       		//while d�ng�s� �art do�ru ise i�lem yapar		
		cout<<j<<" ";
		j++;
	}

	cout<<endl<<"do d�ng�s�"<<endl;
	int k=1;
	do{						//do d�ng�s� en az bir kez i�lem yapar
		cout<<k<<" ";
		k+=2;		
	}while(k<10);
	

}

