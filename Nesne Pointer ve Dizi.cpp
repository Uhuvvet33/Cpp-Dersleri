#include <iostream>
#include <locale>
using namespace std;

class Nokta{		//Nokta isminde Sýnýf tanýmlama.
	public:			//Sýnýf dýþýndan eriþime açýlmasý 
	int x,y;
	
	void degerAta(int _x,int _y){	//sýnýfa degerAta davranýþ özelliði kazandýrýlýyor
		x=_x;
		y=_y;
	}		
	
	void ekranaYaz(){	//ekranaYaz davranýþ özelliði
		cout << x <<","<< y <<endl;
	}
	
	bool baslangictaMi(){
		return x==0 && y==0;		//Kýsa yazým þekli doðru ise true deðilse false
	}

};	

int main (){
	setlocale(LC_ALL, "Turkish");

	Nokta n1;		//n nesnesi
	Nokta n2;		//ikinci kez nesneoluþturma
	Nokta* n3;		//pointer ile tanýmlama
	Nokta* n4;		//n4 pointer ile tanýmlanýyor
	Nokta array[10];	//dizi tanýmlama sýnýf üzerinden
	Nokta* pArray;		//iþaretçi ile tanýmlama
	pArray =new Nokta[10];// bellekten yer ayýrma
	
	for (int i=0;i<10;i++){
		array[i].degerAta(i, i+2);
		(pArray + sizeof(Nokta)*i)->degerAta(i+5,i+10);
	}
	
	for(int i=0;i<10;i++){
		array[i].ekranaYaz();
		(pArray + sizeof(Nokta)*i)->degerAta(i+5,i+10);
		cout<<endl;
	}
		
	n3 = &n2;		//n2 nin deðerlerine iþaret ettik
	n4 =new Nokta();	//n4 için new operatörü ile bellekten yer alýnýyor
		
	cout<<"n1 degeri\t:";
	n1.degerAta(5,7);	//nesneye deðer atandý
	n1.ekranaYaz();		//nesnenin davranýþ özelliðini ekrana yazdýrdýk
	
	cout<<"n2 degeri\t:";
	n2.degerAta(0,0);	//ayný sýnýfý kullanarak ikinci kez çaðrýlýyor
	n2.ekranaYaz();
	
	if(n1.baslangictaMi())
		cout<<"n baþlangýç noktasýnda"<<endl;

	if (n2.baslangictaMi())
		cout<<"n1 baþlangýç noktasýnda"<<endl;	
	
	cout<<"n3 pointer degerleri\t: ";
	n3->ekranaYaz();
	n4->degerAta(100,300);
	n4->ekranaYaz();
	
return 0;
}

