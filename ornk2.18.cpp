#include <iostream>
#include <locale.h>
using namespace std;

int main (){ setlocale(LC_ALL, "Turkish");
	int say1{0}, say2{0}, say3{0};
	int topl, carp, orta;
	int enKucuk, enBuyuk;
	
	printf("Üç farklý sayý giriniz\t:");
	scanf("%d %d %d", &say1, &say2, &say3);
	
	topl=say1+say2+say3;
	carp=say1*say2*say3;
	orta=(say1+say2+say3)/3;
	
	printf("Toplam \t: %d\n", topl);
	printf("Orta \t: %d\n", orta);
	printf("Çarpým \t: %d\n", carp);
	
	if(say1>say2){
		if(say1>say3){
			enBuyuk=say1;
			if(say2>say3){
				enKucuk=say3;
			}else{
				enKucuk=say2;
			}
		}else{
			enBuyuk=say3;
			enKucuk=say2;
		}
			
	}else{
		if(say2>say3){
			enBuyuk=say2;
			if(say3>say1){
				enKucuk=say1;
			}else{
				enKucuk=say3;
			}			
		}else{
			enBuyuk=say3;
			if(say1>say2){
				enKucuk=say2;
			}else{
				enKucuk=say1;
			}
		}
	}

printf("En Küçük :%d\n",enKucuk);
printf("En Büyük :%d\n",enBuyuk);


return 0;
}

