#include <iostream>
#include <locale.h>
using namespace std;

int main (){ setlocale(LC_ALL, "Turkish");
	int sayi1, sayi2;

		printf( "�ki tamsay� girin\n" );
		printf( "Bu iki say�n�n kar��la�t�rmas� yap�lacakt�r: " );
		scanf( "%d %d", &sayi1, &sayi2 ); /* iki say.n.n al.nmas. */

 if ( sayi1 == sayi2 )
 printf( "%d e.ittir %d\n", sayi1, sayi2 );

 if ( sayi1 != sayi2 )
 printf( " %d e�it de�ildir %d\n ", sayi1, sayi2 );
 if ( sayi1 < sayi2 )
 printf( "%d kucuktur %d\n", sayi1, sayi2 );

 if ( sayi1 > sayi2 )
 printf( "%d buyuktur %d\n", sayi1, sayi2 );

 if ( sayi1 <= sayi2 )
 printf( "%d kucuktur yada e.ittir %d\n",
 sayi1, sayi2 );

 if ( sayi1 >= sayi2 )
 printf( "%d buyuktur yada e.ittir %d\n",
 sayi1, sayi2 );

 return 0; /* program ba.ar.l. bir .ekilde sona ermi.tir */



return 0;
}

