#include <iostream>
#include <locale.h>
using namespace std;

struct insan{	
	int TcNo;
	string ad;
	string sehir;
}m;  


int main (){ setlocale(LC_ALL, "Turkish");

insan insanlar[3];
for(int i=0; i<3;i++){
	insan a;
	cout<<i+1<<". Ad� giriniz\t:";
	cin>>a.ad;
	
	cout<<"�ehir giriniz\t:";
	cin>>a.sehir;
	
	cout<<"TCNo giriniz\t:";
	cin>>a.TcNo;
	insanlar[i]=a;
} 

for(int i=0;i<3;i++){
	cout<<i+1<<". �sim :"<<insanlar[i].ad<<endl;
	cout<<"�ehir:"<<insanlar[i].sehir<<endl;
	cout<<"TcNo :"<<insanlar[i].TcNo<<endl;
}


return 0;
}

