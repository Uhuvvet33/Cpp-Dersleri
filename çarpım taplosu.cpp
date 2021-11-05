#include <iostream>
#include <locale.h>
using namespace std;

int main (){ setlocale(LC_ALL, "Turkish");

for(int i=1;i<=10;i++){
	for(int n=1;n<=10;n++){
		cout<<n<<"x"<<i<<"="<<n*i<<"\t";
	}
	cout<<endl;
}

return 0;
}

