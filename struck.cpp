#include <iostream>
#include <locale.h>
using namespace std;

struct insan{	
	int TcNo;
	string ad;
	string sehir;
}m;   //burada tanýmlama yapýlarak direk çaðrýlabili aþaðýdaki þeki,lde


int main (){ setlocale(LC_ALL, "Turkish");

insan n1, n2; //m ninolmadýðý burada görülebiliyor

n1.ad="Mehmet";
n1.sehir="Mersin";
n1.TcNo=1231231;

n2.ad="Mehmet2";
n2.sehir="Mersin2";
n2.TcNo=44444;

m.TcNo=12121;
m.ad="Ahmet";
m.sehir="dsas";

cout<<n1.TcNo<<", "<<n1.ad<<", "<<n1.sehir<<endl;
cout<<n2.TcNo<<", "<<n2.ad<<", "<<n2.sehir<<endl;
cout<<m.ad<<m.sehir;
return 0;
}

