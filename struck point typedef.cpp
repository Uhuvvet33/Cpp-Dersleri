#include <iostream>
#include <locale.h>
using namespace std;

struct Nokta{	//struct tan�mlama
	int x,y;	
};

typedef int* pInt; //s�k kulln�lan de�i�kenleri burda tan�mlayarak kulland�k
typedef int dizi[5];

int main (){
setlocale(LC_ALL, "Turkish");

Nokta n;   //n struck tan�mlama
n.x=2;
n.y=5;

cout<<sizeof(Nokta)<<endl; //bellekte kaplad��� alan

Nokta* pNokta; //pointer tan�mlama
pNokta=new Nokta(); //dinamik bellekte yer ay�rma
pNokta->x=3; //de�er atama
pNokta->y=9;

cout<<n.x<<" , "<<n.y<<endl;   //nesnenin g�sterimi
cout<<pNokta->x<<" , "<<pNokta->y<<endl; //pointer g�sterimi


//int dizi[5];
int* Array;

pInt ptr; //kendi tan�mlad���m�z
dizi d;
d[4]=5;
cout <<d[4];


}

