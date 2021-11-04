#include <iostream>
#include <cmath>

using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e Karakter

	float sy1, sy2;
	char sec;

	cout<<"1. Say�y� giriniz \t:";
	cin>>sy1;
	cout<<"2. Say�y� giriniz \t:";
	cin>>sy2;

	cout<<".: Girilen Say�lar ��in ��lem Se�in :."<<endl<<endl;
	cout<<".: Toplama (+) :."<<endl;
	cout<<".: ��karma (-) :."<<endl;
	cout<<".: �arpma  (*) :."<<endl;
	cout<<".: B�lme   (/) :."<<endl<<"  ";
		cin>>sec;
		cout<<"Se�iminiz\t:"<<sec<<endl;

	switch(sec){
		case '+':
			printf("Toplam	\t:%.2f", float(sy1+sy2));
			break;
		case '-':
			printf("��karma	\t:%.2f", abs(sy1-sy2));
			break;
		case '*':
			printf("�arpma	\t:%.2f", float(sy1*sy2));
			break;
		case '/':
			printf("B�lme	\t:%.2f", float(sy1/sy2));
			break;
}
}
