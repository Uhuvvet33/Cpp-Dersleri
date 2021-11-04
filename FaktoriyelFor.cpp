#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish"); //Türkçe Karakter

	int faktoriyel{1}, i=1, sayi;
		cout<<"Bir sayý giriniz \t:";
		cin>>sayi;

	if(sayi<0){
			printf("0\'dan küçük bir sayý girdiniz.");
	}else if(sayi==0){
			printf("Faktöriyeli \t: 1");
	}else{		
		for(int i=1;i<=sayi;i++){
			faktoriyel=faktoriyel*i;
			}					
			printf("Faktöriyeli \t: %d", faktoriyel);
	}
		
return 0;


}


