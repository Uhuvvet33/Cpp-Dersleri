#include <iostream>
#include <locale.h>

using namespace std;


int main (){
	setlocale(LC_ALL, "Turkish");
	
	int b(8), c{7}, d=9;	//de�i�kenlere bu �ekildede de�er atanabilir
	printf("b: %d, c: %d, d: %d\n",b,c,d); //printf konumtu ile g�sterimi
	
	int x, dizi[x];
			cout<<"Dizi say�s� belirle :";
			cin>>x;	
	
	int *array = new int[x];   //dizi boyutu belirleme i�in new dinamik bellek i�lemi pointer kullanarak
	
	cout<<endl;
	
	for(int i=0;i<x;i++){
		cout<<i+1<<". say�y� giriniz: ";
		cin>>dizi[i];
	}
	
	cout<<endl;
	
	for(int y=0;y<x;y++){
		cout<<y+1<<". girilen say�:"<<dizi[y]<<endl;
	}
	
	cout<<endl;
	
	for (int say=0;say<x;say++)
	{
		if(dizi[say]%2==0)
	{
			cout<<"�ift say� :"<<dizi[say]<<endl;
	}	else{
			cout<<"Tek say� :"<<dizi[say]<<endl;
			}
	
	}
	delete[] array; // delete kullanarak dinamik bellekteki alan� bo�alt�yoruz
    
	}	
