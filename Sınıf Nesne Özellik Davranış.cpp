#include <iostream>
#include <locale>
using namespace std;

class Nokta{		//Nokta isminde S�n�f tan�mlama.
	public:			//S�n�f d���ndan eri�ime a��lmas� 
	int x,y;		//s�n�fa �zellik belirleme
	
	void degerAta(int _x,int _y){	//S�n�fa Metot, davran�� ekleme.
		x=_x;
		y=_y;
	}		
	
	void ekranaYaz(){	//ekranaYaz davran���, metodu
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
	Nokta n;		//s�n�ftan nesne tan�mlama
	Nokta n1;		//ikinci kez nesne tan�mlama
	//n.x = 0;		//nesnenin �zelli�ine de�er atama
	//n.y = 5;
	n.degerAta(5,7);	//nesneye de�er atand�
	n.ekranaYaz();		//nesnenin davran��� �a�r�l�yor
	
	n1.degerAta(0,0);	//ayn� s�n�f� kullanarak ikinci kez �a�r�l�yor
	n1.ekranaYaz();
	
	if(n.baslangictaMi())
		cout<<"n ba�lang�� noktas�nda"<<endl;

	if (n1.baslangictaMi())
		cout<<"n1 ba�lang�� noktas�nda"<<endl;	
	
	if(n.baslangictaMi()==false)
		cout<<"n ba�lang��ta de�il"<<endl;
		
	if(n1.baslangictaMi()==false)
		cout<<"n1 ba�lang��ta de�il"<<endl;
	
	
return 0;
}

