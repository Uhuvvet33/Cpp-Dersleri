#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e Karakter

	int faktoriyel{1}, i=1, sayi;
		cout<<"Bir say� giriniz \t:";
		cin>>sayi;

	if(sayi<0){
			printf("0\'dan k���k bir say� girdiniz.");
	}else if(sayi==0){
			printf("Fakt�riyeli \t: 1");
	}else{		
		for(int i=1;i<=sayi;i++){
			faktoriyel=faktoriyel*i;
			}					
			printf("Fakt�riyeli \t: %d", faktoriyel);
	}
		
return 0;


}


