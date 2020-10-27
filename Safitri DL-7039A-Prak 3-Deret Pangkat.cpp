#include <stdio.h>

int deret3();
 int main ()
{

int deret3()	;

	int i,a,deret_3;
	printf ("--Mencari Deret Pangkat3--");
	printf("Masukkan Jumlah deret Pangkat Yang Dicari");
	scanf ("%d", &a);
	
	for (i=1; i<=a; i++)
	{
		deret_3=i*i*i;
		printf("deret3 (%d)  : %d\n", i,deret_3);
	}	
	printf ("\n");
}
