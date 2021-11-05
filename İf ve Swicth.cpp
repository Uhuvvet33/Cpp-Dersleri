#include <iostream>
#include <locale.h>

using namespace std;


int main (){
	setlocale(LC_ALL, "Turkish");
	
	int x,a;
	cout <<"Sayý gir :";
	cin>>x;
	
	if(x>100){    //if else kullanýmý
		cout<<x<<" sayýsý 100'den büyük";		
	}	
		else if(x<100){
			cout<<x<<" sayýsý 100'den küçük";			
		}
	else{
		cout<<x<<" sayýsý 100'e eþit";
		
	}
	cout<<endl;
	
	cout<<"1 ile 5 arasýnda bir sayý girin :";
	cin>>a;
	switch(a){
		case 1:
			cout<<"1 yazdýnýz.";
			break;
		case 2:
			cout<<"2 yazdýnýz.";
			break;		
		case 3:
			cout<<"3 yazdýnýz.";
			break;		
		case 4:
			cout<<"4 yazdýnýz.";
			break;
		case 5:
			cout<<"5 yazdýnýz.";
			break;
		default:
			cout<<"Farklý bir sayý girdiniz";
			break;
			
	}
	 
	

}

