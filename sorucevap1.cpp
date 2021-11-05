#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "Turkish");
	int x;
	scanf ("%d",&x);
	if (x==0)
	printf("A");
	else
	printf("B");
	if(x>0)
	printf("C");
	else
	printf("D");
	
	int s=1;
	while(1){
		
		if (s==3) continue;
		printf ("*");
		s++;
		
	}
	


}

