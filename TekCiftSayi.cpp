#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e Karakter

	int sayi{0};
	printf("Bir Say� Giriniz\t:");
	scanf("%d",&sayi);
	
	if(sayi%2==0){
		printf("%d say�s� �ift say�d�r.",sayi);
	}else{
		printf("%d say�s� Tek say�d�r.",sayi);
	}


}


