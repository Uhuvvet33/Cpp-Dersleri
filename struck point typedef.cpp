#include <iostream>
#include <locale.h>
using namespace std;

struct Nokta{	//struct tanýmlama
	int x,y;	
};

typedef int* pInt; //sýk kullnýlan deðiþkenleri burda tanýmlayarak kullandýk
typedef int dizi[5];

int main (){
setlocale(LC_ALL, "Turkish");

Nokta n;   //n struck tanýmlama
n.x=2;
n.y=5;

cout<<sizeof(Nokta)<<endl; //bellekte kapladýðý alan

Nokta* pNokta; //pointer tanýmlama
pNokta=new Nokta(); //dinamik bellekte yer ayýrma
pNokta->x=3; //deðer atama
pNokta->y=9;

cout<<n.x<<" , "<<n.y<<endl;   //nesnenin gösterimi
cout<<pNokta->x<<" , "<<pNokta->y<<endl; //pointer gösterimi


//int dizi[5];
int* Array;

pInt ptr; //kendi tanýmladýðýmýz
dizi d;
d[4]=5;
cout <<d[4];


}

