#include <iostream>
#include <locale.h>
using namespace std;

int main (){ setlocale(LC_ALL, "Turkish");
	int tmsy1, tmsy2, topl;
	
	printf("�lk Tamsay� girin\t:");
	scanf("%d", &tmsy1);
	printf("�kinci Tamsay� girin\t:");
	scanf("%d", &tmsy2);
	topl=tmsy1+tmsy2;
	printf("Toplam \t:%d\n", topl);
	printf("Toplam \t:%d", tmsy1+tmsy2);



return 0;
}

