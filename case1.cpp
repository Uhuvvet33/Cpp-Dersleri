#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "Turkish");
	int x;
	scanf("%d",&x);
	switch(x){
		case 1:
			printf("a");
			break;
		case 2:
			printf("b");
				default:
			printf(" ");
	}
	printf("c");


}

