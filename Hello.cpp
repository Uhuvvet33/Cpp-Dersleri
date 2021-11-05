#include <iostream>
using namespace std;


int main(){
	
	int array[3];
	array[0]=10;
	array[1]=20;
	array[2]=40;
	
	double array2[]={1,2,3,4,5,6};
	string array3[4];
	
	
	cout<<"0. index"<<array[0]<<endl;
	cout<<"1. index"<<array[1]<<endl;
	cout<<"2. index"<<array[2]<<endl;
	
	cout<<"farkli"<<endl;
	
	for (int i=0;i<4;i++)
	cout <<i<<".index :"<<array2[i] <<endl;
	
	
	
	for (int a=0;a<4;a++){
		cin >> array3[a];
	}
		for (int i=0;i<4;i++)
	cout <<i<<".index :"<<array3[i] <<endl;
	return 0;
	
}
