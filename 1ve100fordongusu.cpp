#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e Karakter

	for(int i=1;i<101;i++){
		printf("%d ",i);
	}
	cout<<endl;

	for(int i=1;i<101;i++){
		cout<<i<<" ";
	}
	cout<<endl;

	for(int i=1;i<=100;i++){
		if(i%2==0){
			printf("%d ",i);
		}
	}
getchar();

}
