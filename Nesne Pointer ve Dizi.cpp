#include <iostream>
#include <locale>
using namespace std;

class Nokta{		//Nokta isminde S�n�f tan�mlama.
	public:			//S�n�f d���ndan eri�ime a��lmas� 
	int x,y;
	
	void degerAta(int _x,int _y){	//s�n�fa degerAta davran�� �zelli�i kazand�r�l�yor
		x=_x;
		y=_y;
	}		
	
	void ekranaYaz(){	//ekranaYaz davran�� �zelli�i
		cout << x <<","<< y <<endl;
	}
	
	bool baslangictaMi(){
		return x==0 && y==0;		//K�sa yaz�m �ekli do�ru ise true de�ilse false
	}

};	

int main (){
	setlocale(LC_ALL, "Turkish");

	Nokta n1;		//n nesnesi
	Nokta n2;		//ikinci kez nesneolu�turma
	Nokta* n3;		//pointer ile tan�mlama
	Nokta* n4;		//n4 pointer ile tan�mlan�yor
	Nokta array[10];	//dizi tan�mlama s�n�f �zerinden
	Nokta* pArray;		//i�aret�i ile tan�mlama
	pArray =new Nokta[10];// bellekten yer ay�rma
	
	for (int i=0;i<10;i++){
		array[i].degerAta(i, i+2);
		(pArray + sizeof(Nokta)*i)->degerAta(i+5,i+10);
	}
	
	for(int i=0;i<10;i++){
		array[i].ekranaYaz();
		(pArray + sizeof(Nokta)*i)->degerAta(i+5,i+10);
		cout<<endl;
	}
		
	n3 = &n2;		//n2 nin de�erlerine i�aret ettik
	n4 =new Nokta();	//n4 i�in new operat�r� ile bellekten yer al�n�yor
		
	cout<<"n1 degeri\t:";
	n1.degerAta(5,7);	//nesneye de�er atand�
	n1.ekranaYaz();		//nesnenin davran�� �zelli�ini ekrana yazd�rd�k
	
	cout<<"n2 degeri\t:";
	n2.degerAta(0,0);	//ayn� s�n�f� kullanarak ikinci kez �a�r�l�yor
	n2.ekranaYaz();
	
	if(n1.baslangictaMi())
		cout<<"n ba�lang�� noktas�nda"<<endl;

	if (n2.baslangictaMi())
		cout<<"n1 ba�lang�� noktas�nda"<<endl;	
	
	cout<<"n3 pointer degerleri\t: ";
	n3->ekranaYaz();
	n4->degerAta(100,300);
	n4->ekranaYaz();
	
return 0;
}

