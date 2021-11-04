#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish"); //Türkçe Karakter

	int sayi{0};
	printf("Bir Sayý Giriniz\t:");
	scanf("%d",&sayi);
	
	if(sayi%2==0){
		printf("%d sayýsý Çift sayýdýr.",sayi);
	}else{
		printf("%d sayýsý Tek sayýdýr.",sayi);
	}


}


