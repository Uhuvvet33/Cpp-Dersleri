#include <iostream>
#include <locale.h>
using namespace std;

int main (){ setlocale(LC_ALL, "Turkish");

for (int x=0;x<5;x++)
{
	for(int y=0;y<10;y++)
	{
		cout<<" * ";
	}
	cout<<endl;
}
cout<<"-----------------"<<endl;
for (int i=0;i<5;i++)
{
	for(int j=0;j<i+1;j++)
	{
		cout<<"*";
		
	}
	cout<<endl;
}
cout<<"-----------------"<<endl;
for (int i=0; i<5; i++)
{
	for(int j=0; j<5-(i+1); j++)
	{
			cout<<" ";	
	}
	for(int j=0; j<=i; j++)
	{
			cout<<"*";	
	}
	cout<<endl;
}




return 0;
}

