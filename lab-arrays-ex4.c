/* Zadanie 4:* napisz program drukujący histogram na postawie zawartości tablicy z zadania 2. W razie potrzeby zwiększ wymiar tablicy. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define PI 3.14

int main()
{
	//Z zadania 2
	
	int i;
	float tab[100];
	float wynik;
	srand(time(NULL));
	for (i=0; i<100; i++)
	{
		//Generowanie z rozkładem naturalnym
		do
		{
	    wynik=(cos(2*PI*(1.0*rand()/RAND_MAX))*sqrt(-2.0*log((1.0*rand()/RAND_MAX))));	//transformacja Boxa-Mullera
		} while (wynik>=1.0 || wynik<=0.0); 
		tab[i]=wynik;
	}
	
	//Nowy kod do zadania 4
	
	int j;
	float k=0;
	printf("Histogram:\n\nLp	Wartosc tablicy Histogram\n");
		for (i=0; i<100; i++)
	{
		printf("%d	%f	",i+1,tab[i]);
		for (j=0; j<50; j++)
		{
			if (tab[i]>k) printf("#");
			k=k+0.02;
		}
		k=0; 
		printf("\n");
	}
	return 0;
}
