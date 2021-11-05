#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	setlocale(LC_ALL, "Turkish");
	int x;
	scanf("%d",&x);
	if (x > 5 && (x%2 == 0))
	{
	if (x==7)
	printf("e");
	else 
	printf("d");	
	}
		else
	{
		if(x==8)
		printf("c");
		if (x%2==1)
			printf("b");
			 else if (x==7)		
			 printf("f");
	}
printf("a");
return 0;
}

