/* Zadanie 4:* napisz program drukujący histogram na postawie zawartości tablicy z zadania 2. W razie potrzeby zwiększ wymiar tablicy. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
	int i,j,l,m;
	float tab[100],war=0,sr=0,br;
	float r1,r2,wynik;
	float min, max, k=0;
	srand(time(NULL));
	for (i=0; i<100; i++)
	{
		do
		{
			r1=(1.0*rand()/RAND_MAX);
		    r2=(1.0*rand()/RAND_MAX);
		    wynik=(cos(2*3.14*r2)*sqrt(-2.0*log(r1)));	//transformacja Boxa-Mullera
		} while (wynik>=1.0 || wynik<=0.0);
		tab[i]=wynik;
		printf("Tab[%d]=%f\n",i+1,tab[i]);
	}
	min=tab[0];
	max=tab[0];
	for (i=1; i<100; i++)
	{
		if (min>tab[i])
		{
			min=tab[i];
			l=i+1;
		}
		if (max<tab[i])
		{
			max=tab[i];
			m=i+1;
		}
	}
	printf("\nNajmniejsza liczba = %f\n",min);
	printf("Największa liczba = %f\n",max);
	printf("\n\nHistogram:\n\nLp	Wartosc tablicy Histogram\n");
		for (i=0; i<100; i++)
	{
		printf("%d	%f	",i+1,tab[i]);
		for (j=0; j<19; j++)
		{
			if (tab[i]>k) printf("*");
			k=k+0.05;
		}
		k=0; 
		printf("\n");
	}
	return 0;
}
