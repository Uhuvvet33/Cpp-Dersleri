#include <iostream>
#include <locale.h>

using namespace std;


int main (){
	setlocale(LC_ALL, "Turkish");
	
	int b(8), c{7}, d=9;	//deðiþkenlere bu þekildede deðer atanabilir
	printf("b: %d, c: %d, d: %d\n",b,c,d); //printf konumtu ile gösterimi
	
	int x, dizi[x];
			cout<<"Dizi sayýsý belirle :";
			cin>>x;	
	
	int *array = new int[x];   //dizi boyutu belirleme için new dinamik bellek iþlemi pointer kullanarak
	
	cout<<endl;
	
	for(int i=0;i<x;i++){
		cout<<i+1<<". sayýyý giriniz: ";
		cin>>dizi[i];
	}
	
	cout<<endl;
	
	for(int y=0;y<x;y++){
		cout<<y+1<<". girilen sayý:"<<dizi[y]<<endl;
	}
	
	cout<<endl;
	
	for (int say=0;say<x;say++)
	{
		if(dizi[say]%2==0)
	{
			cout<<"Çift sayý :"<<dizi[say]<<endl;
	}	else{
			cout<<"Tek sayý :"<<dizi[say]<<endl;
			}
	
	}
	delete[] array; // delete kullanarak dinamik bellekteki alaný boþaltýyoruz
    
	}	
