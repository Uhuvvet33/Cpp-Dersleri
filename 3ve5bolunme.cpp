#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e Karakter
	
	int sayi=0, sonuc3, sonuc5;
	
		printf("Bir say� giriniz\t:");		//say� girilmesi isteniyor
		scanf("%d", &sayi);
		
	while (sayi<0 || sayi>100){				//girilen say� 0 ile 100 aras� kontrol
			printf("L�tfen 0 ile 100 aras�nda Bir say� giriniz\t:");
			scanf("%d", &sayi);
	}
		
			
	if(sayi%3==0){		//3 ve 5'e b�l�n�p b�l�nmedi�inin kontrol�
		if(sayi%5==0){
			printf("girilen %d say�s�, 3 ve 5 tam b�l�n�r.", sayi);
		}else{
			printf("girilen %d say�s�, 3 tam b�l�n�r 5\'e b�l�nmez.", sayi);
		}
		
	}else if(sayi%5==0){
		printf("girilen %d say�s�, 5 tam b�l�n�r 3\'e b�l�nmez.", sayi);
	}
	
	cout<<endl;
	
	if (sayi%3==0 && sayi%5==0){   //3 ve 5'e b�l�n�p b�l�nmedi�inin kontrol�
		printf("3 ve 5\'e b�l�n�r");
	}else if(sayi%3==0){
		printf("3\'e b�l�n�r");
	}else if(sayi%5==0){
		printf("5\'e b�l�n�r");
	}else{
		printf("3 ve 5\'e b�l�nmez");
	}
	

return 0;
}


