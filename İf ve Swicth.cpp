#include <iostream>
#include <locale.h>

using namespace std;


int main (){
	setlocale(LC_ALL, "Turkish");
	
	int x,a;
	cout <<"Say� gir :";
	cin>>x;
	
	if(x>100){    //if else kullan�m�
		cout<<x<<" say�s� 100'den b�y�k";		
	}	
		else if(x<100){
			cout<<x<<" say�s� 100'den k���k";			
		}
	else{
		cout<<x<<" say�s� 100'e e�it";
		
	}
	cout<<endl;
	
	cout<<"1 ile 5 aras�nda bir say� girin :";
	cin>>a;
	switch(a){
		case 1:
			cout<<"1 yazd�n�z.";
			break;
		case 2:
			cout<<"2 yazd�n�z.";
			break;		
		case 3:
			cout<<"3 yazd�n�z.";
			break;		
		case 4:
			cout<<"4 yazd�n�z.";
			break;
		case 5:
			cout<<"5 yazd�n�z.";
			break;
		default:
			cout<<"Farkl� bir say� girdiniz";
			break;
			
	}
	 
	

}

