#include <iostream>
#include <locale>
using namespace std;

class Nokta{		//Nokta isminde Sýnýf tanýmlama.
	public:			//Sýnýf dýþýndan eriþime açýlmasý 
	int x,y;		//sýnýfa özellik belirleme
	
	void degerAta(int _x,int _y){	//Sýnýfa Metot, davranýþ ekleme.
		x=_x;
		y=_y;
	}		
	
	void ekranaYaz(){	//ekranaYaz davranýþý, metodu
		cout << x <<","<< y <<endl;
	}
	
	bool baslangictaMi(){
		if(x == 0 && y == 0)
			return true;
		else
			return false;
	}



};	

int main (){
	setlocale(LC_ALL, "Turkish");
	Nokta n;		//sýnýftan nesne tanýmlama
	Nokta n1;		//ikinci kez nesne tanýmlama
	//n.x = 0;		//nesnenin özelliðine deðer atama
	//n.y = 5;
	n.degerAta(5,7);	//nesneye deðer atandý
	n.ekranaYaz();		//nesnenin davranýþý çaðrýlýyor
	
	n1.degerAta(0,0);	//ayný sýnýfý kullanarak ikinci kez çaðrýlýyor
	n1.ekranaYaz();
	
	if(n.baslangictaMi())
		cout<<"n baþlangýç noktasýnda"<<endl;

	if (n1.baslangictaMi())
		cout<<"n1 baþlangýç noktasýnda"<<endl;	
	
	if(n.baslangictaMi()==false)
		cout<<"n baþlangýçta deðil"<<endl;
		
	if(n1.baslangictaMi()==false)
		cout<<"n1 baþlangýçta deðil"<<endl;
	
	
return 0;
}

